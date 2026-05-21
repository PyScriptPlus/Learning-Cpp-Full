#include <iostream>
#include <format>
#include <cstring>

#define RED "\033[31m"
#define DEFAULT_COLOR "\033[0m"


namespace C23 
{
    std::string compile(std::string filename, std::string name)
    {
        std::string output = std::format("g++ -std=c++23 {}.cpp -o {}.exe",filename,name);
        return output;
    };
}
namespace C20
{
    std::string compile(std::string filename, std::string name)
    {
        std::string output = std::format("g++ -std=c++20 {}.cpp -o {}.exe",filename,name);
        return output;
    };
}
namespace C17
{
    std::string compile(std::string filename, std::string name)
    {
        std::string output = std::format("g++ -std=c++17 {}.cpp -o {}.exe",filename,name);
        return output;
    };
}
namespace C14
{
    std::string compile(std::string filename, std::string name)
    {
        std::string output = std::format("g++ -std=c++14 {}.cpp -o {}.exe",filename,name);
        return output;
    };
}

namespace C11
{
    std::string compile(std::string filename, std::string name)
    {
        std::string output = std::format("g++ -std=c++11 {}.cpp -o {}.exe",filename,name);
        return output;
    };
}


std::string inputFileName() {
    std::cout << "Enter FileName example -> (main): ";
    std::string filename;
    std::cin >> filename;
    return filename;
}

std::string inputOutputName() {
    std::cout << "Enter NameProject example -> (myApp): ";
    std::string name;
    std::cin >> name;
    return name;
}

int main() {
    // C, C++
    // Add to path env
    // Exam: output main
    char buf[100];

    
    std::cout << "Enter Language: (Examle: (1: C) (2: C++)): ";
    int selectLanguage;
    std::cin >> selectLanguage;
    if(selectLanguage == 1)
    {

    }
    else if(selectLanguage == 2)
    {
        int x;
        input:
        std::cout << "\nEnter standard C++: " << '\n' <<
        "Exam: (1: C++11) (2: C++14) (3: C++17) (4: C++20) (5: C++23) (0: Exit): ";
        std::cin >> x;
        switch(x)
        {
            case 1:
                std::strcpy(buf,C11::compile(inputFileName(),inputOutputName()).c_str());
                system(buf);
            break;
            case 2:
                std::strcpy(buf,C14::compile(inputFileName(),inputOutputName()).c_str());
                system(buf);
            break;
            case 3:
                std::strcpy(buf,C17::compile(inputFileName(),inputOutputName()).c_str());
                system(buf);
            break;
            case 4:
                std::strcpy(buf,C20::compile(inputFileName(),inputOutputName()).c_str());
                system(buf);
            break;
            case 5:
                std::strcpy(buf,C23::compile(inputFileName(),inputOutputName()).c_str());
                system(buf);
            break;
            case 0: 
            break;
            default:
                std::cout << RED << "Lotfan dorust vared konid!" << DEFAULT_COLOR << '\n';
                goto input;
            break;
        }
        std::cout << DEFAULT_COLOR << '\n';
    }



    
    
    // system(buf);

   

    

    return 0;
}