#include <iostream>
#include <Windows.h>

int main() {

    // unsigned long d;
    // DWORD salam = 65;
    // std::cout << salam << '\n';
    // DWORD files = DeleteFileA("a.exe");

    SYSTEMTIME si;
    SYSTEMTIME ll;
    GetSystemTime(&si);
    GetLocalTime(&ll);
    std::cout << si.wYear << "/" << si.wMonth << "/" << si.wDay << '\n';
    std::cout << ll.wHour << ":" << ll.wMinute << '\n';

    system("pause");

    // if(files)
    // {
        // std::cout << "Deleted";
    // }
    // else
    {
        // std::cout << "Moshkel";
    }
    // std::cout << sizeof(BOOL) << '\n';

    return 0;
}