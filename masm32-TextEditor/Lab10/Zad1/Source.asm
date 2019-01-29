.386
.MODEL FLAT, STDCALL
;LAB10
include grafika.inc
GENERIC_READ                         equ 80000000h
GENERIC_WRITE                        equ 40000000h
CREATE_ALWAYS                        equ 2
OPEN_EXISTING                        equ 3

ExitProcess			PROTO :DWORD
SetDlgItemTextA		PROTO :DWORD,:DWORD, :DWORD
SetDlgItemInt		PROTO :DWORD,:DWORD, :DWORD, :DWORD
SendDlgItemMessageA	PROTO :DWORD,:DWORD, :DWORD, :DWORD, :DWORD

CreateDirectoryA PROTO :DWORD,:DWORD 
GetCurrentDirectoryA PROTO :DWORD,:DWORD 
CloseHandle PROTO :DWORD
WriteFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD    
ReadFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD 
lstrcpyA PROTO :DWORD,:DWORD 
lstrcatA PROTO :DWORD,:DWORD   

.DATA
fileHandel DWORD 0
fileHandel2 DWORD 0
path BYTE "D:\masm32 TextEditor\Lab10\Documents\",0   ;; There you define your path to the folder where you want save txt files.
;pathzast BYTE "D:\Lab10\Documents\",0
nazwa BYTE "Nowy",0
koncowka BYTE ".txt",0


	hinst	DWORD	0
	hicon	DWORD	0
	hcur 	DWORD	0
	hmenu	DWORD	0 
	
	buffor11 BYTE 		255 dup (0)
	buffor22 BYTE 		255 dup (0)
	buffor1 BYTE 		32 dup(0)
	
	tdlg1	BYTE		"DLG1",0
	ALIGN 4
	tmenu	BYTE		"MENU1",0
	ALIGN 4
	tOK	      BYTE		"OK",0
	ALIGN 4
	terr 	BYTE		32 dup(0)	
	tnagl	BYTE		32 dup(0)	
	buffor	BYTE		32 dup(0)
	buffor2	BYTE		32 dup(0)

	buffer2 BYTE        255 dup(0)

	bufferToClear BYTE 4000 dup(0)
	buffer BYTE 4000 dup ( 0 )
	dataWritten DWORD  0
	dataToRead	BYTE 4000 dup(0)
	dataRad DD 0
	
.CODE

INVOKE lstrcatA , OFFSET buffor11, OFFSET path


WndProc PROC uses EBX ESI EDI windowHandle:DWORD, uMsg:DWORD, wParam:DWORD, lParam:DWORD

	.IF uMSG ==  WM_INITDIALOG
		jmp	wmINITDIALOG
	.ENDIF

	.IF uMSG ==  WM_CLOSE
		jmp	wmCLOSE
	.ENDIF

	.IF uMSG ==  WM_COMMAND
		jmp	wmCOMMAND
	.ENDIF

	.IF uMSG ==  WM_MOUSEMOVE
		jmp	wmMOUSEMOVE
	.ENDIF

	 mov	EAX, 0
	 jmp	konWNDPROC 

	wmINITDIALOG:
		INVOKE LoadIcon , hinst, 11 
	mov hicon,EAX
	INVOKE SendMessageA , windowHandle , WM_SETICON ,ICON_SMALL , hicon 
		;zmodyfikuj ikone aplikacji tutaj  zad 4

		INVOKE LoadCursorA,hinst,12
		mov hcur,EAX

		INVOKE LoadMenu,hinst,OFFSET tmenu
		mov hmenu,EAX
		INVOKE SetMenu, windowHandle, hmenu 

		
		mov EAX, 1
		jmp	konWNDPROC 

	wmCLOSE:

		INVOKE DestroyMenu,hmenu
		INVOKE EndDialog, windowHandle, 0	
		 
		 mov EAX, 1
		jmp	konWNDPROC

	wmCOMMAND: 

	 .IF wParam ==  102 ;zapisz
		
			mov ECX, 32
			mov ESI , OFFSET buffor22
			mov EDI, OFFSET buffor11
			 rep movsb

			mov ECX, 4000
			mov ESI , OFFSET bufferToClear
			mov EDI, OFFSET buffer
			 rep movsb


			INVOKE lstrcatA , OFFSET buffor11, OFFSET path
			INVOKE SendDlgItemMessageA , windowHandle , 2 , WM_GETTEXT ,32, offset buffor 
			INVOKE lstrcatA , OFFSET buffor11, OFFSET buffor
			INVOKE lstrcatA , OFFSET buffor11, OFFSET koncowka



		INVOKE CreateFileA,OFFSET buffor11,GENERIC_WRITE,0,0,CREATE_ALWAYS,0,0
		mov fileHandel,EAX
		INVOKE SendDlgItemMessageA , windowHandle , 1 , WM_GETTEXT ,4000, offset buffer 

		INVOKE WriteFile,fileHandel, OFFSET buffer, 4000 ,OFFSET dataWritten,0 ;4 bo bajt po bajcie
		INVOKE CloseHandle , fileHandel

		
			mov EAX, 1

			jmp otworz

			jmp	konWNDPROC
		.ENDIF

	
		.IF wParam ==  103 ;otworz             
		otworz:

			INVOKE SetDlgItemTextA, windowHandle, 4, offset buffor1	

			mov ECX, 255
			mov ESI , OFFSET buffor22
			mov EDI, OFFSET buffor11
			 rep movsb

			mov ECX, 4000
			mov ESI , OFFSET bufferToClear
			mov EDI, OFFSET buffer
			 rep movsb

			INVOKE lstrcatA , OFFSET buffor11, OFFSET path
			INVOKE SendDlgItemMessageA , windowHandle , 2 , WM_GETTEXT ,32, offset buffor 
			INVOKE lstrcatA , OFFSET buffor11, OFFSET buffor
			INVOKE lstrcatA , OFFSET buffor11, OFFSET koncowka

		
		INVOKE CreateFileA,OFFSET buffor11,GENERIC_WRITE or GENERIC_READ,0,0,OPEN_EXISTING,0,0
		mov fileHandel,EAX ;UCHWYT DO PLIKU
		INVOKE ReadFile,fileHandel, OFFSET dataToRead, 4000,OFFSET dataRad,0

		INVOKE SendDlgItemMessageA , windowHandle , 4 , WM_SETTEXT , 4000 , offset dataToRead
		INVOKE SendDlgItemMessageA , windowHandle , 1 , WM_SETTEXT , 4000 , offset dataToRead

			mov EAX, 1
			jmp	konWNDPROC
		.ENDIF

				;WYCZYSC
			.IF wParam ==  105 ;
				INVOKE SetDlgItemTextA, windowHandle, 1, offset buffor1	
			mov EAX, 1
			jmp	konWNDPROC
			.ENDIF
		.IF wParam ==  101 
			INVOKE SetDlgItemTextA, windowHandle, 2, offset nazwa
			INVOKE SetDlgItemTextA, windowHandle, 1, offset buffor1	
			INVOKE SetDlgItemTextA, windowHandle, 4, offset buffor1	
			mov EAX, 1
		.ENDIF

		

		;;zamykanie:
		.IF wParam ==  104
		INVOKE DestroyMenu,hmenu
		INVOKE EndDialog, windowHandle, 0	
		 
		 mov EAX, 1
		jmp	konWNDPROC
		.endif
	wmMOUSEMOVE:


	konWNDPROC:	
		ret

WndProc	ENDP


main PROC

	

	INVOKE GetModuleHandleA, 0
	mov	hinst, EAX
	
	INVOKE DialogBoxParamA, hinst,OFFSET tdlg1, 0, OFFSET WndProc, 0
	

	.IF EAX == 0
			jmp	etkon
	.ENDIF

	.IF EAX == -1
		jmp	err0
	.ENDIF	

	err0:
		INVOKE LoadString, hinst,2,OFFSET terr,32
		INVOKE MessageBoxA,0,OFFSET terr,OFFSET tnagl,0

	etkon:

	INVOKE ExitProcess, 0

main ENDP

END