#define UNICODE
#define _UNICODE
#include <iostream>
#include <windows.h>
#include <pdh.h> 
// #include <SFML/Graphics.hpp>
// #include <SFML/Window.hpp>
// #include <SFML/System.hpp>
#pragma comment(lib, "pdh.lib")


void setConsoleColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void getCpuUsage() {
    setConsoleColor(10); 
    PDH_HQUERY cpuQuery;
    PDH_HCOUNTER cpuTotal;

    PdhOpenQuery(nullptr, 0, &cpuQuery);
    PdhAddCounter(cpuQuery, L"\\Processor(_Total)\\% Processor Time", 0, &cpuTotal);
    PdhCollectQueryData(cpuQuery);

    Sleep(1000); 
    PdhCollectQueryData(cpuQuery);

    PDH_FMT_COUNTERVALUE counterVal;
    PdhGetFormattedCounterValue(cpuTotal, PDH_FMT_DOUBLE, nullptr, &counterVal);

    std::cout << "CPU Usage: " << counterVal.doubleValue << " %\n";

    PdhCloseQuery(cpuQuery);
}

void getMemoryUsage() {
    setConsoleColor(14); 
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfo);

    DWORDLONG totalPhysMem = memInfo.ullTotalPhys;
    DWORDLONG physMemUsed = memInfo.ullTotalPhys - memInfo.ullAvailPhys;

    std::cout << "Total Memory: " << totalPhysMem / (1024 * 1024) << " MB\n";
    std::cout << "Used Memory: " << physMemUsed / (1024 * 1024) << " MB\n";
}

void getDiskUsage() {
    setConsoleColor(11);
    ULARGE_INTEGER freeBytesAvailable, totalBytes, totalFreeBytes;

    if (GetDiskFreeSpaceEx(L"C:\\", &freeBytesAvailable, &totalBytes, &totalFreeBytes)) {
        std::cout << "Disk Total: " << totalBytes.QuadPart / (1024 * 1024 * 1024) << " GB\n";
        std::cout << "Disk Free: " << totalFreeBytes.QuadPart / (1024 * 1024 * 1024) << " GB\n";
    } else {
        std::cerr << "Failed to get disk space information.\n";
    }
}

int main() {
    setConsoleColor(13);
    std::cout << "Coded By MamaD\n" << "\n";
    setConsoleColor(7);
    std::cout << "System Monitor\n";
    std::cout << "=================\n";

    while (true) {
        getCpuUsage();
        getMemoryUsage();
        getDiskUsage();
        setConsoleColor(7); 
        std::cout << "=================\n";
        Sleep(3000); 
    }

    return 0;
}
