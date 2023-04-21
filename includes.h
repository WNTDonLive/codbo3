#pragma once

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif



#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include "kiero/kiero.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_internal.h"
#include "json.hpp"

#include <d3d9.h>
#include <dxgi.h>
#include <windows.h>
#include <stdio.h>
#include <type_traits>
#include <string>
#include <tchar.h>
#include <iostream>
#include <vector>
#include <memory>
#include <intrin.h>
#include <algorithm>
#include <time.h>
#include <cmath>
#include <random>
#include <numeric>
#include <TlHelp32.h>
#include <future>
#include <mutex>
#include <regex>
#include <cmath>
#include <conio.h>
#include <fstream>
#include <iterator>
#include <tchar.h>
#include <type_traits>
#include <array>
#include <codecvt>
#include <filesystem>
#include <shellapi.h>
#include <cctype>
#include <csetjmp>
#include <sstream>
#include <filesystem>
#include <stdarg.h>
#include <wchar.h>
#include <map>
#include <iomanip>
#include <conio.h>
#include <thread>
#include <direct.h>


#include "io.hpp"
#include "nt.hpp"
#include "imgui_notify.h"
#include "structs.h"

#define msg_begin_read(msg) { auto over_flowed = msg.overflowed; auto read_count = msg.readcount;
#define msg_end_read(msg) msg.overflowed = over_flowed; msg.readcount = read_count; }

using namespace std::literals;
#include "kiero/minhook/include/MinHook.h"
#include "detours.h"


using json = nlohmann::json;
#define FRIENDS_LIST "friends.json"
#define RECENT_PLAYERS "recents.json"
#define min12(a,b)            (((a) < (b)) ? (a) : (b))

#define WIN32_LEAN_AND_MEAN
typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

#if defined(__GNUC__)
typedef          long long ll;
typedef unsigned long long ull;
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8  char
#define MAKELL(num) num ## LL
#define FMT_64 "ll"
#elif defined(_MSC_VER)
typedef          __int64 ll;
typedef unsigned __int64 ull;
#define MAKELL(num) num ## i64
#define FMT_64 "I64"
#elif defined (__BORLANDC__)
typedef          __int64 ll;
typedef unsigned __int64 ull;
#define MAKELL(num) num ## i64
#define FMT_64 "L"
#else
#error "unknown compiler"
#endif
typedef unsigned int uint;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned long ulong;

typedef          char   int8;
typedef   signed char   sint8;
typedef unsigned char   uint8;
typedef          short  int16;
typedef   signed short  sint16;
typedef unsigned short  uint16;
typedef          int    int32;
typedef   signed int    sint32;
typedef unsigned int    uint32;
typedef ll              int64;
typedef ll              sint64;
typedef ull             uint64;

#define _BYTE  unsigned char
#define _WORD  uint16
#define _DWORD uint32
#define _QWORD uint64
