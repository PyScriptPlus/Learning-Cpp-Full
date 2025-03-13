#include <print>
#include <iostream>
#include <string>
#include <format>

int main(){


    std::cout << "Enter your Age: ";
    int age;
    std::cin >> age;

    std::cout << "Enter your fName: ";
    std::string fName;
    std::getline(std::cin >> std::ws , fName);
    std::string res = std::format("Your age: {} \nYour name: {}" , age , fName);
    
    bool k;
    std::cout << "True OR False: ";
    std::cin >> std::boolalpha >> k;
    if (k == true)
    {
        std::cout << res;     
    }
    else
    {
        std::cout << "Not found pause" << '\n';
        system("pause");
    }
    



    // std::string num = "12";
    
    // int number = std::stoi(num);
    // int number2 = number + 5;
    // char hello[] = "12";
    // std::cout << static_cast<int>(hello);
    // std::cout << static_cast<int>(num);
    // std::cout << number2 << '\n';

    // std::cout << "Name: ";
    // int choice;
    // std::cin >> choice;

    // std::cout << "Name: ";
    // char age[50000];
    // std::string age;
    // std::getline(std::cin >> std::ws , age);
    // std::cout << choice << '\n' << age << '\n';
    // scanf("%[^\n]s" , age);
    // std::getline(std::cin >> std::ws , age);
    // scanf("%[^\n]s" , age);
    // std::print("Your name is: {}" , age); 
    // std::cout << age;  
    // std::print("Salam");

    return 0;

}