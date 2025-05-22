#include <windows.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

#define ID_CPU_USAGE_TEXT 101

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static HWND hTextBox;
    switch (uMsg) {
        case WM_CREATE: {
            // ایجاد یک TextBox برای نمایش درصد استفاده از CPU
            hTextBox = CreateWindowEx(0, L"سی", L"درصد: 0%",
                WS_CHILD | WS_VISIBLE | SS_CENTER, 10, 10, 300, 40, hwnd, (HMENU)ID_CPU_USAGE_TEXT, GetModuleHandle(NULL), NULL);
        } break;

        case WM_TIMER: {
            // دریافت زمان‌های مربوط به CPU
            FILETIME idleTime, kernelTime, userTime;
            static ULARGE_INTEGER lastIdleTime = {0}, lastKernelTime = {0}, lastUserTime = {0};

            if (GetSystemTimes(&idleTime, &kernelTime, &userTime)) {
                ULARGE_INTEGER currentIdleTime, currentKernelTime, currentUserTime;
                currentIdleTime.LowPart = idleTime.dwLowDateTime;
                currentIdleTime.HighPart = idleTime.dwHighDateTime;

                currentKernelTime.LowPart = kernelTime.dwLowDateTime;
                currentKernelTime.HighPart = kernelTime.dwHighDateTime;

                currentUserTime.LowPart = userTime.dwLowDateTime;
                currentUserTime.HighPart = userTime.dwHighDateTime;

                // محاسبه درصد استفاده از CPU
                ULONGLONG idleDelta = currentIdleTime.QuadPart - lastIdleTime.QuadPart;
                ULONGLONG kernelDelta = currentKernelTime.QuadPart - lastKernelTime.QuadPart;
                ULONGLONG userDelta = currentUserTime.QuadPart - lastUserTime.QuadPart;

                ULONGLONG totalDelta = kernelDelta + userDelta;
                if (totalDelta != 0) {
                    double cpuUsage = (1.0 - (double)idleDelta / totalDelta) * 100.0;

                    // تبدیل درصد استفاده از CPU به رشته
                    std::wstring usageText = L"یوس" + std::to_wstring(cpuUsage) + L"%";
                    SetWindowText(hTextBox, usageText.c_str());
                }

                // به‌روزرسانی مقادیر قبلی
                lastIdleTime = currentIdleTime;
                lastKernelTime = currentKernelTime;
                lastUserTime = currentUserTime;
            }
        } break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const wchar_t CLASS_NAME[] = L"ویندوز";

    WNDCLASS wc = { };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(0, CLASS_NAME, L"مانیتور", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 200, NULL, NULL, hInstance, NULL);

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    SetTimer(hwnd, 1, 1000, NULL);  // هر 1 ثانیه یکبار بررسی می‌شود

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
