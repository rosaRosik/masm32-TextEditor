;Plik nag³ówkowy grafika.inc dla aplikacji graficznych MASM32
;--- komunikaty ---
WM_DESTROY	                         equ 02h
WM_PAINT                             equ 0Fh
WM_CLOSE                             equ 10h
WM_QUERYENDSESSION                   equ 11h
WM_QUIT                              equ 12h
WM_COPYDATA                          equ 4Ah
WM_CANCELJOURNAL                     equ 4Bh
WM_NOTIFY                            equ 4Eh
WM_INPUTLANGCHANGEREQUEST            equ 50h
WM_INPUTLANGCHANGE                   equ 51h
WM_TCARD                             equ 52h
WM_HELP                              equ 53h
WM_USERCHANGED                       equ 54h
WM_NOTIFYFORMAT                      equ 55h
WM_CONTEXTMENU                       equ 7Bh
WM_STYLECHANGING                     equ 7Ch
WM_STYLECHANGED                      equ 7Dh
WM_DISPLAYCHANGE                     equ 7Eh
WM_GETICON                           equ 7Fh
WM_SETICON                           equ 80h
WM_NCCREATE                          equ 81h
WM_NCDESTROY                         equ 82h
WM_NCCALCSIZE                        equ 83h
WM_NCHITTEST                         equ 84h
WM_NCPAINT                           equ 85h
WM_NCACTIVATE                        equ 86h
WM_GETDLGCODE                        equ 87h
WM_SYNCPAINT                    	  equ 88h
WM_NCMOUSEMOVE                       equ 0A0h
WM_NCLBUTTONDOWN                     equ 0A1h
WM_NCLBUTTONUP                       equ 0A2h
WM_NCLBUTTONDBLCLK                   equ 0A3h
WM_NCRBUTTONDOWN                     equ 0A4h
WM_NCRBUTTONUP                       equ 0A5h
WM_NCRBUTTONDBLCLK                   equ 0A6h
WM_NCMBUTTONDOWN                     equ 0A7h
WM_NCMBUTTONUP                       equ 0A8h
WM_NCMBUTTONDBLCLK                   equ 0A9h
WM_KEYFIRST                          equ 100h
WM_KEYDOWN                           equ 100h
WM_KEYUP                             equ 101h
WM_CHAR                              equ 102h
WM_DEADCHAR                          equ 103h
WM_SYSKEYDOWN                        equ 104h
WM_SYSKEYUP                          equ 105h
WM_SYSCHAR                           equ 106h
WM_SYSDEADCHAR                       equ 107h
WM_KEYLAST                           equ 108h
WM_INITDIALOG                        equ 110h
WM_COMMAND                           equ 111h
WM_SYSCOMMAND                        equ 112h
WM_TIMER                             equ 113h
WM_HSCROLL                           equ 114h
WM_VSCROLL                           equ 115h
WM_INITMENU                          equ 116h
WM_INITMENUPOPUP                     equ 117h
WM_MENUSELECT                        equ 11Fh
WM_MENUCHAR                          equ 120h
WM_ENTERIDLE                         equ 121h
WM_CTLCOLORMSGBOX                    equ 132h
WM_CTLCOLOREDIT                      equ 133h
WM_CTLCOLORLISTBOX                   equ 134h
WM_CTLCOLORBTN                       equ 135h
WM_CTLCOLORDLG                       equ 136h
WM_CTLCOLORSCROLLBAR                 equ 137h
WM_CTLCOLORSTATIC                    equ 138h
WM_MOUSEFIRST                        equ 200h
WM_MOUSEMOVE                         equ 200h
WM_LBUTTONDOWN                       equ 201h
WM_LBUTTONUP                         equ 202h
WM_LBUTTONDBLCLK                     equ 203h
WM_RBUTTONDOWN                       equ 204h
WM_RBUTTONUP                         equ 205h
WM_RBUTTONDBLCLK                     equ 206h
WM_MBUTTONDOWN                       equ 207h
WM_MBUTTONUP                         equ 208h
WM_MBUTTONDBLCLK                     equ 209h
WM_MOUSELAST                         equ 209h
WM_PARENTNOTIFY                      equ 210h
WM_ENTERMENULOOP                     equ 211h
WM_EXITMENULOOP                      equ 212h
WM_MDICREATE                         equ 220h
WM_MDIDESTROY                        equ 221h
WM_MDIACTIVATE                       equ 222h
WM_MDIRESTORE                        equ 223h
WM_MDINEXT                           equ 224h
WM_MDIMAXIMIZE                       equ 225h
WM_MDITILE                           equ 226h
WM_MDICASCADE                        equ 227h
WM_MDIICONARRANGE                    equ 228h
WM_MDIGETACTIVE                      equ 229h
WM_MDISETMENU                        equ 230h
WM_DROPFILES                         equ 233h
WM_MDIREFRESHMENU                    equ 234h
WM_CUT                               equ 300h
WM_COPY                              equ 301h
WM_PASTE                             equ 302h
WM_CLEAR                             equ 303h
WM_UNDO                              equ 304h
WM_RENDERFORMAT                      equ 305h
WM_RENDERALLFORMATS                  equ 306h
WM_DESTROYCLIPBOARD                  equ 307h
WM_DRAWCLIPBOARD                     equ 308h
WM_PAINTCLIPBOARD                    equ 309h
WM_VSCROLLCLIPBOARD                  equ 30Ah
WM_SIZECLIPBOARD                     equ 30Bh
WM_ASKCBFORMATNAME                   equ 30Ch
WM_CHANGECBCHAIN                     equ 30Dh
WM_HSCROLLCLIPBOARD                  equ 30Eh
WM_QUERYNEWPALETTE                   equ 30Fh
WM_PALETTEISCHANGING                 equ 310h
WM_PALETTECHANGED                    equ 311h
WM_HOTKEY                            equ 312h
WM_PRINT                        	  equ 317h
WM_PRINTCLIENT                       equ 318h
WM_PENWINFIRST                       equ 380h
WM_PENWINLAST                        equ 38Fh
WM_SETTEXT                           equ 0Ch
WM_GETTEXT                           equ 0Dh
WM_GETTEXTLENGTH                     equ 0Eh
BM_GETCHECK                          equ 0F0h
BM_SETCHECK                          equ 0F1h
BM_GETSTATE                          equ 0F2h
BM_SETSTATE                          equ 0F3h
BM_SETSTYLE                          equ 0F4h
BM_CLICK                             equ 0F5h
BM_GETIMAGE                          equ 0F6h
BM_SETIMAGE                          equ 0F7h
;--- w³aœciwoœci ---
BS_PUSHBUTTON                        equ 0h
BS_DEFPUSHBUTTON                     equ 1h
BS_CHECKBOX                          equ 2h
BS_AUTOCHECKBOX                      equ 3h
BS_RADIOBUTTON                       equ 4h
BS_3STATE                            equ 5h
BS_AUTO3STATE                        equ 6h
BS_GROUPBOX                          equ 7h
BS_USERBUTTON                        equ 8h
BS_AUTORADIOBUTTON                   equ 9h
BS_OWNERDRAW                         equ 0Bh
BS_LEFTTEXT                          equ 20h
BS_BITMAP                            equ 80h
BS_ICON                              equ 40h
BS_TEXT             			  equ 0
BS_LEFT             			  equ 100h
BS_RIGHT           			  equ 200h
BS_CENTER           			  equ 300h
BS_TOP              			  equ 400h
BS_BOTTOM           			  equ 800h
BS_VCENTER          			  equ 0C00h
BS_PUSHLIKE         			  equ 1000h
BS_MULTILINE        			  equ 2000h
BS_NOTIFY           			  equ 4000h
BS_FLAT             			  equ 8000h
BS_RIGHTBUTTON      			  equ BS_LEFTTEXT
DS_ABSALIGN                          equ 0001h
DS_SYSMODAL                          equ 0002h
DS_3DLOOK                            equ 0004h
DS_FIXEDSYS                          equ 0008h
DS_NOFAILCREATE                      equ 0010h
DS_LOCALEDIT                         equ 0020h
DS_SETFONT                           equ 0040h
DS_MODALFRAME                        equ 0080h
DS_NOIDLEMSG                         equ 0100h
DS_SETFOREGROUND                     equ 0200h
DS_CONTROL                           equ 0400h
DS_CENTER                            equ 0800h
DS_CENTERMOUSE                       equ 1000h
DS_CONTEXTHELP                       equ 2000h
ES_LEFT                              equ 0h
ES_CENTER                            equ 1h
ES_RIGHT                             equ 2h
ES_MULTILINE                         equ 4h
ES_UPPERCASE                         equ 8h
ES_LOWERCASE                         equ 10h
ES_PASSWORD                          equ 20h
ES_AUTOVSCROLL                       equ 40h
ES_AUTOHSCROLL                       equ 80h
ES_NOHIDESEL                         equ 100h
ES_OEMCONVERT                        equ 400h
ES_READONLY                          equ 800h
ES_WANTRETURN                        equ 1000h
ES_NUMBER           			 equ 2000h
CBS_SIMPLE                           equ 1h
CBS_DROPDOWN                         equ 2h
CBS_DROPDOWNLIST                     equ 3h
CBS_OWNERDRAWFIXED                   equ 10h
CBS_OWNERDRAWVARIABLE                equ 20h
CBS_AUTOHSCROLL                      equ 40h
CBS_OEMCONVERT                       equ 80h
CBS_SORT                             equ 100h
CBS_HASSTRINGS                       equ 200h
CBS_NOINTEGRALHEIGHT                 equ 400h
CBS_DISABLENOSCROLL                  equ 800h
CB_GETEDITSEL                        equ 140h
CB_LIMITTEXT                         equ 141h
CB_SETEDITSEL                        equ 142h
CB_ADDSTRING                         equ 143h
CB_DELETESTRING                      equ 144h
CB_DIR                               equ 145h
CB_GETCOUNT                          equ 146h
CB_GETCURSEL                         equ 147h
CB_GETLBTEXT                         equ 148h
CB_GETLBTEXTLEN                      equ 149h
CB_INSERTSTRING                      equ 14Ah
CB_RESETCONTENT                      equ 14Bh
CB_FINDSTRING                        equ 14Ch
CB_SELECTSTRING                      equ 14Dh
CB_SETCURSEL                         equ 14Eh
CB_SHOWDROPDOWN                      equ 14Fh
CB_GETITEMDATA                       equ 150h
CB_SETITEMDATA                       equ 151h
CB_GETDROPPEDCONTROLRECT             equ 152h
CB_SETITEMHEIGHT                     equ 153h
CB_GETITEMHEIGHT                     equ 154h
CB_SETEXTENDEDUI                     equ 155h
CB_GETEXTENDEDUI                     equ 156h
CB_GETDROPPEDSTATE                   equ 157h
CB_FINDSTRINGEXACT                   equ 158h
CB_SETLOCALE                         equ 159h
CB_GETLOCALE                         equ 15Ah
CB_GETTOPINDEX                       equ 15Bh
CB_SETTOPINDEX                       equ 15Ch
CB_GETHORIZONTALEXTENT               equ 15Dh
CB_SETHORIZONTALEXTENT               equ 15Eh
CB_GETDROPPEDWIDTH                   equ 15Fh
CB_SETDROPPEDWIDTH                   equ 160h
CB_INITSTORAGE                       equ 161h
CB_MSGMAX                            equ 162h
LB_ADDSTRING                         equ 180h
LB_INSERTSTRING                      equ 181h
LB_DELETESTRING                      equ 182h
LB_SELITEMRANGEEX                    equ 183h
LB_RESETCONTENT                      equ 184h
LB_SETSEL                            equ 185h
LB_SETCURSEL                         equ 186h
LB_GETSEL                            equ 187h
LB_GETCURSEL                         equ 188h
LB_GETTEXT                           equ 189h
LB_GETTEXTLEN                        equ 18Ah
LB_GETCOUNT                          equ 18Bh
LB_SELECTSTRING                      equ 18Ch
LB_DIR                               equ 18Dh
LB_GETTOPINDEX                       equ 18Eh
LB_FINDSTRING                        equ 18Fh
LB_GETSELCOUNT                       equ 190h
LB_GETSELITEMS                       equ 191h
LB_SETTABSTOPS                       equ 192h
LB_GETHORIZONTALEXTENT               equ 193h
LB_SETHORIZONTALEXTENT               equ 194h
LB_SETCOLUMNWIDTH                    equ 195h
LB_ADDFILE                           equ 196h
LB_SETTOPINDEX                       equ 197h
LB_GETITEMRECT                       equ 198h
LB_GETITEMDATA                       equ 199h
LB_SETITEMDATA                       equ 19Ah
LB_SELITEMRANGE                      equ 19Bh
LB_SETANCHORINDEX                    equ 19Ch
LB_GETANCHORINDEX                    equ 19Dh
LB_SETCARETINDEX                     equ 19Eh
LB_GETCARETINDEX                     equ 19Fh
LB_SETITEMHEIGHT                     equ 1A0h
LB_GETITEMHEIGHT                     equ 1A1h
LB_FINDSTRINGEXACT                   equ 1A2h
LB_SETLOCALE                         equ 1A5h
LB_GETLOCALE                         equ 1A6h
LB_SETCOUNT                          equ 1A7h
LB_MSGMAX                            equ 1A8h
LBS_NOTIFY                           equ 1h
LBS_SORT                             equ 2h
LBS_NOREDRAW                         equ 4h
LBS_MULTIPLESEL                      equ 8h
LBS_OWNERDRAWFIXED                   equ 10h
LBS_OWNERDRAWVARIABLE                equ 20h
LBS_HASSTRINGS                       equ 40h
LBS_USETABSTOPS                      equ 80h
LBS_NOINTEGRALHEIGHT                 equ 100h
LBS_MULTICOLUMN                      equ 200h
LBS_WANTKEYBOARDINPUT                equ 400h
LBS_EXTENDEDSEL                      equ 800h
LBS_DISABLENOSCROLL                  equ 1000h
LBS_NODATA                           equ 2000h
LBS_STANDARD                         equ LBS_NOTIFY OR LBS_SORT OR WS_VSCROLL OR WS_BORDER
SBS_HORZ                             equ 0h
SBS_VERT                             equ 1h
SBS_TOPALIGN                         equ 2h
SBS_LEFTALIGN                        equ 2h
SBS_BOTTOMALIGN                      equ 4h
SBS_RIGHTALIGN                       equ 4h
SBS_SIZEBOXTOPLEFTALIGN              equ 2h
SBS_SIZEBOXBOTTOMRIGHTALIGN          equ 4h
SBS_SIZEBOX                          equ 8h
SBS_SIZEGRIP                         equ 10h
SS_LEFT                              equ 0h
SS_CENTER                            equ 1h
SS_RIGHT                             equ 2h
SS_ICON                              equ 3h
SS_BLACKRECT                         equ 4h
SS_GRAYRECT                          equ 5h
SS_WHITERECT                         equ 6h
SS_BLACKFRAME                        equ 7h
SS_GRAYFRAME                         equ 8h
SS_WHITEFRAME                        equ 9h
SS_USERITEM                          equ 0Ah
SS_SIMPLE                            equ 0Bh
SS_LEFTNOWORDWRAP                    equ 0Ch
SS_NOPREFIX                          equ 80h
SS_OWNERDRAW 			equ 0Dh
SS_BITMAP 				equ 0Eh
SS_ENHMETAFILE 			equ 0Fh
SS_ETCHEDHORZ 			equ 10h
SS_ETCHEDVERT 			equ 11h
SS_ETCHEDFRAME 			equ 12h
SS_TYPEMASK 			equ 1Fh
SS_NOTIFY 				equ 100h
SS_CENTERIMAGE 			equ 200h
SS_RIGHTJUST 			equ 400h
SS_REALSIZEIMAGE 			equ 800h
SS_SUNKEN 				equ 1000h
SS_ENDELLIPSIS 			equ 4000h
SS_PATHELLIPSIS 			equ 8000h
SS_WORDELLIPSIS 			equ 0C000h
SS_ELLIPSISMASK 			equ 0C000h
;---
OCR_NORMAL                           equ 32512
OCR_IBEAM                            equ 32513
OCR_WAIT                             equ 32514
OCR_CROSS                            equ 32515
OCR_UP                               equ 32516
OCR_SIZE                             equ 32640
OCR_ICON                             equ 32641
OCR_SIZENWSE                         equ 32642
OCR_SIZENESW                         equ 32643
OCR_SIZEWE                           equ 32644
OCR_SIZENS                           equ 32645
OCR_SIZEALL                          equ 32646
OCR_ICOCUR                           equ 32647
OCR_NO                               equ 32648
OCR_HAND            			  equ 32649
OCR_APPSTARTING     			  equ 32650
OIC_SAMPLE                           equ 32512
OIC_HAND                             equ 32513
OIC_QUES                             equ 32514
OIC_BANG                             equ 32515
OIC_NOTE                             equ 32516
OIC_WINLOGO         			  equ 32517
OIC_WARNING         			  equ OIC_BANG
OIC_ERROR           			  equ OIC_HAND
OIC_INFORMATION     			  equ OIC_NOTE
;--- Pen Style -----
PS_SOLID                             equ 0
PS_DASH                              equ 1
PS_DOT                               equ 2
PS_DASHDOT                           equ 3
PS_DASHDOTDOT                        equ 4
PS_NULL                              equ 5
PS_INSIDEFRAME                       equ 6
PS_USERSTYLE                         equ 7
PS_ALTERNATE                         equ 8
PS_STYLE_MASK                        equ 0Fh
PS_ENDCAP_ROUND                      equ 0h
PS_ENDCAP_SQUARE                     equ 100h
PS_ENDCAP_FLAT                       equ 200h
PS_ENDCAP_MASK                       equ 0F00h
PS_JOIN_ROUND                        equ 0h
PS_JOIN_BEVEL                        equ 1000h
PS_JOIN_MITER                        equ 2000h
PS_JOIN_MASK                         equ 0F000h
PS_COSMETIC                          equ 0h
PS_GEOMETRIC                         equ 10000h
PS_TYPE_MASK                         equ 0F0000h
;--------------
CS_GLOBALCLASS	EQU	4000h
CS_HREDRAW	EQU	2h
CS_VREDRAW	EQU	1h
SW_SHOWNORMAL	EQU	1h
;---
ICON_SMALL 				equ 0
ICON_BIG 				equ 1
;---
MF_INSERT                 equ 0h
MF_CHANGE                 equ 80h
MF_APPEND                 equ 100h
MF_DELETE                 equ 200h
MF_REMOVE                 equ 1000h
MF_BYCOMMAND              equ 0h
MF_BYPOSITION             equ 400h
MF_SEPARATOR              equ 800h
MF_ENABLED                equ 0h
MF_GRAYED                 equ 1h
MF_DISABLED               equ 2h
MF_UNCHECKED              equ 0h
MF_CHECKED                equ 8h
MF_USECHECKBITMAPS        equ 200h
MF_STRING                 equ 0h
MF_BITMAP                 equ 4h
MF_OWNERDRAW              equ 100h
MF_POPUP                  equ 10h
MF_MENUBARBREAK           equ 20h
MF_MENUBREAK              equ 40h
MF_UNHILITE               equ 0h
MF_HILITE                 equ 80h
MF_SYSMENU                equ 2000h
MF_HELP                   equ 4000h
MF_MOUSESELECT            equ 8000h
MF_END                    equ 80h
MF_DEFAULT          	  equ 1000h
MF_RIGHTJUSTIFY     	  equ 4000h
;---
MB_OK                                equ 0h
MB_OKCANCEL                          equ 1h
MB_ABORTRETRYIGNORE                  equ 2h
MB_YESNOCANCEL                       equ 3h
MB_YESNO                             equ 4h
MB_RETRYCANCEL                       equ 5h
MB_ICONHAND                          equ 10h
MB_ICONQUESTION                      equ 20h
MB_ICONEXCLAMATION                   equ 30h
MB_ICONASTERISK                      equ 40h
MB_USERICON					  equ 80h
MB_ICONERROR                         equ MB_ICONHAND
MB_ICONINFORMATION                   equ MB_ICONASTERISK
MB_ICONSTOP                          equ MB_ICONHAND
MB_ICONWARNING                       equ MB_ICONEXCLAMATION
MB_DEFBUTTON1                        equ 0h
MB_DEFBUTTON2                        equ 100h
MB_DEFBUTTON3                        equ 200h
MB_DEFBUTTON4               		  equ 300h
MB_APPLMODAL                         equ 0h
MB_SYSTEMMODAL                       equ 1000h
MB_TASKMODAL                         equ 2000h
MB_HELP						  equ 4000h
MB_NOFOCUS                           equ 8000h
MB_SETFOREGROUND                     equ 10000h
MB_DEFAULT_DESKTOP_ONLY              equ 20000h
MB_TYPEMASK                          equ 0Fh
MB_ICONMASK                          equ 0F0h
MB_DEFMASK                           equ 0F00h
MB_MODEMASK                          equ 3000h
MB_MISCMASK                          equ 0C000h
MB_TOPMOST                  		  equ 40000h
MB_RIGHT                    		  equ 80000h
MB_RTLREADING               		  equ 100000h
MB_SERVICE_NOTIFICATION          	  equ 200000h
;--- identyfikatory ---
IDI_APPLICATION	EQU	32512
IDC_ARROW equ 32512
IDC_IBEAM equ 32513
IDC_WAIT  equ 32514
IDC_CROSS equ 32515
IDC_UPARROW equ 32516
IDC_SIZE    equ 32640
IDC_ICON    equ 32641
IDC_SIZENWSE equ 32642
IDC_SIZENESW equ 32643
IDC_SIZEWE   equ 32644
IDC_SIZENS   equ 32645
IDC_SIZEALL  equ 32646
IDC_NO       equ 32648
IDC_HAND     equ 32649
IDC_APPSTARTING equ 32650
IDC_HELP        equ 32651
;--- Windows Style ------------
WS_OVERLAPPED                        equ 0h
WS_POPUP                             equ 80000000h
WS_CHILD                             equ 40000000h
WS_MINIMIZE                          equ 20000000h
WS_VISIBLE                           equ 10000000h
WS_DISABLED                          equ 8000000h
WS_CLIPSIBLINGS                      equ 4000000h
WS_CLIPCHILDREN                      equ 2000000h
WS_MAXIMIZE                          equ 1000000h
WS_CAPTION                           equ 0C00000h
WS_BORDER                            equ 800000h
WS_DLGFRAME                          equ 400000h
WS_VSCROLL                           equ 200000h
WS_HSCROLL                           equ 100000h
WS_SYSMENU                           equ 80000h
WS_THICKFRAME                        equ 40000h
WS_GROUP                             equ 20000h
WS_TABSTOP                           equ 10000h
WS_MINIMIZEBOX                       equ 20000h
WS_MAXIMIZEBOX                       equ 10000h
WS_TILED                             equ WS_OVERLAPPED
WS_ICONIC                            equ WS_MINIMIZE
WS_SIZEBOX                           equ WS_THICKFRAME
WS_OVERLAPPEDWINDOW                  equ WS_OVERLAPPED OR WS_CAPTION OR WS_SYSMENU OR WS_THICKFRAME OR WS_MINIMIZEBOX OR WS_MAXIMIZEBOX
WS_TILEDWINDOW                       equ WS_OVERLAPPEDWINDOW
WS_POPUPWINDOW                       equ WS_POPUP OR WS_BORDER OR WS_SYSMENU
WS_CHILDWINDOW                       equ WS_CHILD
WS_EX_DLGMODALFRAME                  equ 1h
WS_EX_NOPARENTNOTIFY                 equ 4h
WS_EX_TOPMOST                        equ 8h
WS_EX_ACCEPTFILES                    equ 10h
WS_EX_TRANSPARENT                    equ 20h
WS_EX_MDICHILD                       equ 00000040h
WS_EX_TOOLWINDOW                     equ 00000080h
WS_EX_WINDOWEDGE                     equ 00000100h
WS_EX_CLIENTEDGE                     equ 00000200h
WS_EX_CONTEXTHELP                    equ 00000400h
WS_EX_RIGHT                          equ 00001000h
WS_EX_LEFT                           equ 00000000h
WS_EX_RTLREADING                     equ 00002000h
WS_EX_LTRREADING                     equ 00000000h
WS_EX_LEFTSCROLLBAR                  equ 00004000h
WS_EX_RIGHTSCROLLBAR                 equ 00000000h
WS_EX_CONTROLPARENT                  equ 00010000h
WS_EX_STATICEDGE                     equ 00020000h
WS_EX_APPWINDOW                      equ 00040000h
WS_EX_OVERLAPPEDWINDOW               equ WS_EX_WINDOWEDGE OR WS_EX_CLIENTEDGE
WS_EX_PALETTEWINDOW                  equ WS_EX_WINDOWEDGE OR WS_EX_TOOLWINDOW OR WS_EX_TOPMOST
;---
WM_GETMINMAXINFO    = 0024h
WM_CREATE           = 0001h
WM_NCCREATE         = 0081h
WM_NCDESTROY        = 0082h
WM_NCCALCSIZE       = 0083h
WM_NCPAINT          = 0085h
WM_NCACTIVATE       = 0086h
WM_ACTIVATEAPP      = 001Ch
;
;  Stock Logical Objects
;
WHITE_BRUSH         =  0
LTGRAY_BRUSH        =  1
GRAY_BRUSH          =  2
DKGRAY_BRUSH        =  3
BLACK_BRUSH         =  4
NULL_BRUSH          =  5
HOLLOW_BRUSH        =  5
WHITE_PEN           =  6
BLACK_PEN           =  7
NULL_PEN            =  8
DOT_MARKER          =  9
OEM_FIXED_FONT      = 10
ANSI_FIXED_FONT     = 11
ANSI_VAR_FONT       = 12
SYSTEM_FONT         = 13
DEVICE_DEFAULT_FONT = 14
DEFAULT_PALETTE     = 15
SYSTEM_FIXED_FONT   = 16
;---
DLGTEMPLATE STRUCT DWORD
  style             DWORD      ?
  dwExtendedStyle   DWORD      ?
  cdit              WORD      ?
  x                 WORD      ?
  y                 WORD      ?
  lx                WORD      ?
  ly                WORD      ?
DLGTEMPLATE ENDS

DLGITEMTEMPLATE STRUCT
  style DWORD      ?
  dwExtendedStyle  DWORD      ?
  x     WORD      ?
  y     WORD      ?
  lx    WORD      ?
  cy    WORD      ?
  id    WORD      ?
DLGITEMTEMPLATE ENDS

CREATESTRUCT struct
    cs_lpCreateParams  DD 0
    cs_hInstance       DD 0
    cs_hMenu           DD 0
    cs_hwndParent      DD 0
    cs_cy              DD 0
    cs_cx              DD 0
    cs_y               DD 0
    cs_x               DD 0
    cs_style           DD 0
    cs_lpszName        DD 0
    cs_lpszClass       DD 0
    cs_dwExStyle       DD 0
CREATESTRUCT  ends
;---
WNDCLASS struct
        clsStyle        DD      0       ; class style
        clsLpfnWndProc  DD      0
        clsCbClsExtra   DD      0
        clsCbWndExtra   DD      0
        clsHInstance    DD      0       ; instance handle
        clsHIcon        DD      0       ; class icon handle
        clsHCursor      DD      0       ; class cursor handle
        clsHbrBackground DD     0       ; class background brush
        clsLpszMenuName DD      0       ; menu name
        clsLpszClassName DD     0       ; far ptr to class name
WNDCLASS ends
;---
POINT   struct
        ptX             dd      ?
        ptY             dd      ?
POINT   ends
POINTS STRUCT
  x WORD ?
  y WORD ?
POINTS ENDS
RECT STRUCT
  left    dd      ?
  top     dd      ?
  right   dd      ?
  bottom  dd      ?
RECT ENDS


;---
;  Message structure
;---
MSGSTRUCT       struct
 msHWND          DD      0
 msMESSAGE       DD      0
 msWPARAM        DD      0
 msLPARAM        DD      0
 msTIME          DD      0
 msPT           POINTS   <0,0>
MSGSTRUCT       ends
;--- funkcje API Win32 z pliku kernel32.inc -----------
ExitProcess PROTO uExitCode:DWORD
GetLastError PROTO 
GetModuleHandleA PROTO :DWORD
;--- funkcje API Win32 z pliku  user32.inc ---
CharToOemA PROTO :DWORD,:DWORD
CreateWindowExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DefWindowProcA PROTO :DWORD,:DWORD,:DWORD,:DWORD
DispatchMessageA PROTO :DWORD
GetMessageA PROTO :DWORD,:DWORD,:DWORD,:DWORD
LoadCursorA PROTO hInstance:DWORD,lpCursorName:DWORD
    ;;lpCursorName - name string or cursor resource identifier  
SetCursor PROTO :DWORD
SetCursorPos PROTO :DWORD,:DWORD
SetSystemCursor PROTO :DWORD,:DWORD
GetCursor PROTO 
GetCursorInfo PROTO :DWORD
GetCursorPos PROTO :DWORD
LoadIconA PROTO :DWORD,:DWORD
MessageBoxA PROTO :DWORD,:DWORD,:DWORD,:DWORD
PeekMessageA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PostQuitMessage PROTO :DWORD
RegisterClassA PROTO :DWORD
ShowWindow PROTO :DWORD,:DWORD
TranslateMessage PROTO :DWORD
UpdateWindow PROTO :DWORD
wsprintfA PROTO C lpOut:DWORD, lpFmt:DWORD, arg:VARARG
     ;; int wsprintf(LPTSTR lpOut,// pointer to buffer for output 
     ;; LPCTSTR lpFmt,// pointer to format-control string 
     ;;    ...	// optional arguments  );
lstrlenA PROTO lpString:DWORD
    ;;int lstrlen(
    ;;LPCTSTR lpString 	// address of string to count  );     
;--- funkcje API Win32 z pliku  gdi32.inc ---
GetStockObject PROTO :DWORD
TextOutA PROTO hdc:DWORD, nXStart:DWORD,	nYStart: DWORD, lpString:DWORD, cbString:DWORD 
    ;;BOOL TextOut(
    ;;HDC hdc,	// handle of device context 
    ;;int nXStart,	// x-coordinate of starting position  
    ;;int nYStart,	// y-coordinate of starting position  
    ;;LPCTSTR lpString,	// address of string 
    ;;int cbString 	// number of characters in string  );
GetDC PROTO hWnd:DWORD
    ;HDC GetDC(
    ;;HWND hWnd 	// handle of window  );
ReleaseDC PROTO hWnd:DWORD, hDC:DWORD	
    ;;int ReleaseDC(
    ;;HWND hWnd,	// handle of window 
    ;;HDC hDC 	// handle of device context  );	
CreatePen PROTO fnPenStyle:DWORD, nWidth:DWORD,crColor:DWORD	
      ;;HPEN CreatePen(
      ;;    int fnPenStyle,	// pen style 
      ;;    int nWidth,	// pen width  
      ;;    COLORREF crColor 	// pen color );     	
SelectObject PROTO hDC:DWORD, hgdiobj:DWORD	
      ;;HGDIOBJ SelectObject(
      ;;    HDC hdc,	// handle of device context 
      ;;    HGDIOBJ hgdiobj 	// handle of object  );
DeleteObject PROTO hgdiobj:DWORD
      ;;BOOL DeleteObject(
      ;;   HGDIOBJ hObject 	// handle to graphic object  );
Rectangle PROTO hdc:DWORD,nLeftRect:DWORD,nTopRect:DWORD,nRightRect:DWORD,nBottomRect:DWORD
      ;;BOOL Rectangle(
      ;;    HDC hdc,	// handle of device context 
      ;;    int nLeftRect,	// x-coord. of bounding rectangle's upper-left corner 
      ;;    int nTopRect,	// y-coord. of bounding rectangle's upper-left corner 
      ;;    int nRightRect,	// x-coord. of bounding rectangle's lower-right corner  
      ;;    int nBottomRect 	// y-coord. of bounding rectangle's lower-right corner  );
CreateSolidBrush PROTO crColor:DWORD
      ;;HBRUSH CreateSolidBrush(
      ;;    COLORREF crColor 	// brush color value  );
FillRect PROTO hdc:DWORD,lpRECT:DWORD,hbr:DWORD
      ;;int FillRect(
      ;;    HDC hDC,	// handle to device context 
      ;;    CONST RECT *lprc,	// pointer to structure with rectangle  
      ;;    HBRUSH hbr 	// handle to brush );      
SendMessageA PROTO hwnd:DWORD,msg:DWORD,wParam:DWORD,lParam:DWORD
      ;;LRESULT SendMessage(
      ;;    HWND hWnd,	// handle of destination window
      ;;    UINT Msg,	// message to send
      ;;    WPARAM wParam,	// first message parameter
      ;;    LPARAM lParam 	// second message parameter  );     
SetFocus PROTO hWnd:DWORD
      ;;HWND SetFocus(
      ;;    HWND hWnd 	// handle of window to receive focus );
CreateDialogIndirectParamA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateDialogIndirectParam equ <CreateDialogIndirectParamA>
CreateDialogIndirectParamW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateDialogParamA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateDialogParam equ <CreateDialogParamA>
CreateDialogParamW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD

DialogBoxIndirectParamA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DialogBoxIndirectParam equ <DialogBoxIndirectParamA>
DialogBoxIndirectParamW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DialogBoxParamA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DialogBoxParam equ <DialogBoxParamA>
DialogBoxParamW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EndDialog PROTO :DWORD,:DWORD

;---
LoadAcceleratorsA PROTO :DWORD,:DWORD
LoadAccelerators equ <LoadAcceleratorsA>

LoadAcceleratorsW PROTO :DWORD,:DWORD
LoadBitmapA PROTO :DWORD,:DWORD
LoadBitmap equ <LoadBitmapA>

LoadBitmapW PROTO :DWORD,:DWORD
LoadCursorA PROTO :DWORD,:DWORD
LoadCursor equ <LoadCursorA>

LoadCursorFromFileA PROTO :DWORD
LoadCursorFromFile equ <LoadCursorFromFileA>

LoadCursorFromFileW PROTO :DWORD
LoadCursorW PROTO :DWORD,:DWORD
LoadIconA PROTO :DWORD,:DWORD
LoadIcon equ <LoadIconA>

LoadIconW PROTO :DWORD,:DWORD
LoadImageA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LoadImage equ <LoadImageA>

LoadImageW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LoadKeyboardLayoutA PROTO :DWORD,:DWORD
LoadKeyboardLayout equ <LoadKeyboardLayoutA>

LoadKeyboardLayoutW PROTO :DWORD,:DWORD
LoadMenuA PROTO :DWORD,:DWORD
LoadMenu equ <LoadMenuA>

LoadMenuIndirectA PROTO :DWORD
LoadMenuIndirect equ <LoadMenuIndirectA>

LoadMenuIndirectW PROTO :DWORD
LoadMenuW PROTO :DWORD,:DWORD
LoadStringA PROTO :DWORD,:DWORD,:DWORD,:DWORD
LoadString equ <LoadStringA>

LoadStringW PROTO :DWORD,:DWORD,:DWORD,:DWORD
;---
SetMenu PROTO :DWORD,:DWORD
SetMenuContextHelpId PROTO :DWORD,:DWORD
SetMenuDefaultItem PROTO :DWORD,:DWORD,:DWORD
SetMenuInfo PROTO :DWORD,:DWORD
SetMenuItemBitmaps PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetMenuItemInfoA PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetMenuItemInfo equ <SetMenuItemInfoA>
SetMenuItemInfoW PROTO :DWORD,:DWORD,:DWORD,:DWORD
;---
DestroyAcceleratorTable PROTO :DWORD
DestroyCaret PROTO 
DestroyCursor PROTO :DWORD
DestroyIcon PROTO :DWORD
DestroyMenu PROTO :DWORD
DestroyWindow PROTO :DWORD
