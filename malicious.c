#include <windows.h>

BOOL WINAPI DllMain (HANDLE dll,DWORD dwReason, LPVOID ldReserved)
{
	switch(dwReason)
	{
	case DLL_PROCESS_ATTACH:
	MessageBox(NULL, "DLL Hijakced", "Hacked", MB_ICONERROR | MB_OK);
	break;
	}
return TRUE;
}
