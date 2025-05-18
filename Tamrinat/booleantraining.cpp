#include <iostream>
#include <string_view>

std::string_view weatherStatus(bool isCold);

int main(){

    // std::cout << std::boolalpha;
    // bool s;
    // std::cout << !s << '\n';

    // // s = true;
    std::cout << "Enter dama: ";
    int dama;
    std::cin >> dama;
    bool isCold;
    bool weather = (dama > 15) ? isCold = false : isCold = true;

    std::cout << weatherStatus(isCold) << '\n'; 

    // std::string_view statusWeather = (isCold) ? "Hava sard hast" : "Hava garm hast";
    // std::cout << statusWeather << '\n';

    return 0;
}

std::string_view weatherStatus(bool isCold) {

    return (isCold) ? "Sard hast hava" : "Garm hast hava";

}