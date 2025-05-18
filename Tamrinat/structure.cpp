#include <iostream>
#include <string>
#include <string_view>
#include <vector>


struct Apple
{
    std::string color;
    double size;
    int number;

};


int main() {

    
    Apple Feature;
    
    std::cout << "Enter your color Apple: ";
    std::getline(std::cin >> std::ws, Feature.color);
    std::string_view FeatureApple = Feature.color;

    std::cout << "Enter your size Apple: ";
    std::cin >> Feature.size;

    std::cout << "Enter the number of apples: ";
    std::cin >> Feature.number;

    std::cout << "Apple color is: " << FeatureApple << '\n';
    std::cout << "Apple size is: " << Feature.size << '\n';
    std::cout << "Apple number is: " << Feature.number << '\n';

    return 0;
}