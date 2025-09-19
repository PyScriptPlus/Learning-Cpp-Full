#include <iostream>

void incrementAndPrint() {
    static int count = 0;
    int firstNumber = 0;
    std::cout << "Number: " << (firstNumber++) << "\t"
     << "Count: " << (count++) << '\n';
    return;
}

int main() {

    for (int i = 0; i <= 10; i++)
    {
        incrementAndPrint();
    }
    

    return 0;
}