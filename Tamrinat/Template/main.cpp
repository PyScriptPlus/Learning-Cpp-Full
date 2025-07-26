#include <iostream>

template <typename T>
void print(T);

template <typename U>
U jam(U x, U y);

int main() {

    print("Mohammad");
    std::cout << "Template: " << jam(5 , 5) << '\n';
    std::cout << "Template: " << jam(2.3, 54.2) << '\n';

    return 0;
}

template <typename T>
void print(T fname) {
    std::cout << "Hello " << fname << '\n';
    return;
}

template <typename U>
U jam(U x, U y){
    return x + y;
}