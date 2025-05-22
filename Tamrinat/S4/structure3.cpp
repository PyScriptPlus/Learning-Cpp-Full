#include <iostream>
#include <vector>
#include <string>
#include <string_view>

struct CarInfo
{
    std::string carName;
    int year;
    std::string carColor;
};




int main() {

    CarInfo info;
    std::cout << "Enter your car name: ";
    std::getline(std::cin >> std::ws , info.carName);
    
    std::cout << "Enter your car year: ";
    std::cin >> info.year;

    std::cout << "Enter your car color: ";
    std::getline(std::cin >> std::ws , info.carColor);

    std::vector<CarInfo> Cars;
    Cars.push_back(info);

    for(auto carsinfo : Cars)
    {
        std::cout << "Name: " << carsinfo.carName << '\n';
        std::cout << "Year: " << carsinfo.year << '\n';
        std::cout << "Color: " << carsinfo.carColor << '\n';
    }
    
    
    return 0;
}