#include <iostream>
// Code Season5.cpp
// Mabhas: Instruction 
// Ro ovardam inja ba yek code Assembly dar file khode Assembly neveshtam


// Baraye compile code khod assembly:
// nasm -f elf64 doSome.asm -o doSome.o

// Baraye compile code C++:
// g++ main.cpp doSome.o -o app.exe


extern "C" int doSome();

int main() {
    int result = doSome();
    std::cout << "Result = " << result << '\n';

    return 0;
}