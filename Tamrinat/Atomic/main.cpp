#include <iostream>
#include <atomic>
#include <cstring>
#include <regex>

std::atomic<int> salam = 5;

int main() {
    salam.store(90);
    std::cout << salam << '\n';
    // salam.fetch_add(3);
    // std::cout << ++salam << '\n';

    // void* x = memcmp()

    // char buf[8] = "HELLO";
    // memmove(buf + 2, buf, 5);


    char x[6] = "Ali";
    char y[] = "Ali";
    // memmove(x + 2,x,3);
    
    std::string aDate = "Hi world i'am Mohammad, today 2026-04-14 and the hours 8:06";

    std::string ping = "64 bytes: time=168.70 ms";
    std::regex date("\\d{4}-\\d{2}-\\d{2}");
    std::regex timereg("\\d{1}:\\d{2}");
    std::regex myName("Mohammad");
    std::regex myPing("64 bytes: time=(\\d+\\.\\d+) ms");

    std::smatch match;
    if(std::regex_search(ping,match,myPing))
    {
        std::cout << match.str() << '\n';
    }


    // std::cout << x[3] << '\n';
    // std::cout << y[3] << '\n';
    // for(auto& names : x)
    {
        // std::cout << names;
    }
    // memmove(&y,x,sizeof(x));

    // std::cout << '\n' << memcmp(x,y,4) << '\n';
    
    return 0;
}