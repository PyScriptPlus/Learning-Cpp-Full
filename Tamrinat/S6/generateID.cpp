#include <iostream>

int generateID();

int main() {

    while(true)
    {
        std::cout << "ID: " << generateID() << '\n';
    }
    
    return 0;
}

int generateID() {
    static int s_ID;
    return s_ID++;
}