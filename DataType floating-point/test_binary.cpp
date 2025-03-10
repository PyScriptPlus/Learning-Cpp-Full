//
// Created by Mohammad on 1/28/2025.
//

#include <iostream>
#include <bitset>
// #include <cstdint>
// extern int8_t test;
int main(){

    // std::cout << "Hello World!";
    int num = 18;
    std::bitset<5> binary(num);
    std::cout << "Binary Number: " << binary << "\n";
    std::cout << "Integer: " << num << "\n";
    std::cout << "Sizeof: " << sizeof(num) << "byte";
    return 0;


}