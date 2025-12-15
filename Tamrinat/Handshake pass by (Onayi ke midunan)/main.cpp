#include <iostream>
#include <string>

// Pass By Value
void printValue(std::string fname) {
    std::cout << "Your name is: " << fname << '\n';
    return;
}

// Pass By Reference
void printRefrence(const std::string& fname) {
    std::cout << "Your name is: " << fname << '\n';
    return;
}

// Pass by Address
void printAddress(const std::string* ptr) {
    // ptr --> (ptr != nullptr)
    // !ptr --> (ptr == nullptr)
    if(ptr)
    {
        std::cout << "Your name is: " << *(ptr) << '\n'; // Derefrence
    }
    else
    {
        std::cout << "Nullptr nemitune bashe!!!\n";
    }
    return;
}



int main() {

    std::string fname = "Mohammad";
    printValue(fname);
    printRefrence(fname);

    // Darim alan ba address argument midim behesh
    printAddress(&fname);
    printAddress(nullptr);

    // Yek ravesh herfeyi ke bedon refrence behesh argument bedim va kar kone
    std::string* ptr = &fname;
    printAddress(ptr);


    return 0;
}