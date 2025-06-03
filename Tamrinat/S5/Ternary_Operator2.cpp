#include <iostream>
#include <string_view>

int main() {

    // kami sade mikham ba Ternary_Operator chand ta code benevisim
    std::cout << "Enter your Temperature: ";
    int Temperature;
    std::cin >> Temperature;
    // if (!std::cin >> Temperature)
    if (!std::cin)
    {
        std::cout << "Invalid intput!!" << '\n';
    }
    else
    {
        std::string_view statusWeather = (Temperature <= 4) ? "The Weather is Hot" : "The Weather is Cold";
        std::cout << statusWeather << '\n';
    }
    
    int x = 50;
    int y = 2;
    std::cout << ((x > y) ? x : y);
    
    return 0;
}