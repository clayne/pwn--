#pragma once

#include "common.h"


namespace pwn::process
{
	_Success_(return == ERROR_SUCCESS) PWNAPI DWORD get_integrity_level(_In_ DWORD dwProcessId, _Out_ std::wstring & IntegrityLevelName);
	_Success_(return == ERROR_SUCCESS) PWNAPI DWORD get_integrity_level(_Out_ std::wstring & IntegrityLevelName); 
	_Success_(return) PWNAPI BOOL execv(_In_ const wchar_t* lpCommandLine, _Out_opt_ LPHANDLE lpNewProcessHandle = nullptr);
	_Success_(return) PWNAPI BOOL execv(_In_ const wchar_t* lpCommandLine, _In_opt_ DWORD dwParentPid = 0, _Out_opt_ LPHANDLE lpNewProcessHandle = nullptr);
	_Success_(return) PWNAPI BOOL kill(_In_ DWORD dwProcessPid);
	_Success_(return) PWNAPI BOOL kill(_In_ HANDLE hProcess);
}
