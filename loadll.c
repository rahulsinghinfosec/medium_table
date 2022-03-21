#include <windows.h>
#include <stdio.h>

int main(void)
{
	HINSTANCE dll;
	
	//LoadLibrary helps to load a librarby
	dll = LoadLibrary(TEXT("malicious.dll"));
	
	if(dll != NULL)
	{
		printf("DLL Found & Executing");
	}
	else
	{
		printf("Error");
	}
	return 0;
}
