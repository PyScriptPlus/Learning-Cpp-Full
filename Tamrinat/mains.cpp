#include <windows.h>

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")

const int BALL_SIZE = 30;
int x = 50, y = 50;
int dx = 5, dy = 5;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1));

            HBRUSH hBrush = CreateSolidBrush(RGB(255, 0, 0));
            SelectObject(hdc, hBrush);
            Ellipse(hdc, x, y, x + BALL_SIZE, y + BALL_SIZE);
            DeleteObject(hBrush);

            EndPaint(hwnd, &ps);
        } break;

        case WM_TIMER: {
            RECT rect;
            GetClientRect(hwnd, &rect);
            x += dx;
            y += dy;

            if (x <= 0 || x + BALL_SIZE >= rect.right) dx = -dx;
            if (y <= 0 || y + BALL_SIZE >= rect.bottom) dy = -dy;

            InvalidateRect(hwnd, NULL, TRUE);
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
    const wchar_t CLASS_NAME[] = L"SimpleGameWindow";

    WNDCLASSW wc = { };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    RegisterClassW(&wc);

    // HWND hwnd = CreateWindowExW(0, CLASS_NAME, "Football", WS_OVERLAPPEDWINDOW,
    //     CW_USEDEFAULT, CW_USEDEFAULT, 500, 500, NULL, NULL, hInstance, NULL);

    HWND hwnd = CreateWindowEx(0, CLASS_NAME, L"Game", WS_OVERLAPPEDWINDOW, 
        CW_USEDEFAULT, CW_USEDEFAULT, 500, 400, NULL, NULL, hInstance, NULL);
    

    ShowWindow(hwnd, nCmdShow);
    SetTimer(hwnd, 1, 30, NULL);

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
