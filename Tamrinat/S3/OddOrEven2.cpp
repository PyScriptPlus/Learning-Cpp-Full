#include <iostream>

std::string CodedBy = "Coded By MamaD";

int user(){
    int x;
    std::cout << "Enter your Number: ";
    std::cin >> x;
    return x;
}

void OddOrEven() {

    int num = user();
    if (num % 2 == 0)
    {
        std::cout << "Zoj: " << num << '\n';
    }
    else
    {
        std::cout << "Fard: " << num << '\n';
    }

}