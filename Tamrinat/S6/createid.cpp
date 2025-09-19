#include <iostream>

int generateID() {
    static int s_id = 0;
    return s_id++;
}

int main() {

    for (int i = 0; i <= 258; i++)
    {
        std::cout << "ID: " << generateID() << '\n';
    }
    

    return 0;
}