#define _UNICODE
#define UNICODE

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "shlwapi.lib")

#include <windows.h>
#include <wchar.h>
#include <shlwapi.h>

INT wmain(INT argc, WCHAR *argv[])
{
    if (argc != 2)
    {
        wprintf(L"Usage: %s <PID>\n", argv[0]);
        return 0;
    }

    DWORD pid;
    pid = StrToInt(argv[1]);
    wprintf(L"PID: %d\n", pid);

    HANDLE processHandle;
    processHandle = OpenProcess(PROCESS_QUERY_INFORMATION, FALSE, pid);
    if (processHandle == NULL)
    {
        wprintf(L"Failed OpenProcess with LastError=%d\n", GetLastError());
        return 0;
    }

    DWORD handleCount;

    // GDI object
    handleCount = GetGuiResources(processHandle, GR_GDIOBJECTS);
    if (handleCount == 0)
    {
        wprintf(L"GDI Objects: LastError=%d\n", GetLastError());
    }
    else
    {
        wprintf(L"GDI Objects: %d\n", handleCount);
    }

    // USER object
    handleCount = GetGuiResources(processHandle, GR_USEROBJECTS);
    if (handleCount == 0)
    {
        wprintf(L"USER Objects: LastError=%d\n", GetLastError());
    }
    else
    {
        wprintf(L"USER Objects: %d\n", handleCount);
    }

    CloseHandle(processHandle);

    return 0;
}
