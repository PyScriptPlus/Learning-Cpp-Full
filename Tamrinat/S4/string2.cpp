#include <iostream>


int main() {


    std::string fname = "MohammaD";
    std::cout << fname.length() << '\n';
    // std::cout << std::ssize(fname) << '\n'; // C++20 be bad.....

    // Warning: ino toye MSVC mide inja na :)
    //'initializing': conversion from
	//'size_t' to 'int', possible loss of data
    int numberCharacter = fname.length();
    std::cout << numberCharacter << '\n';
    // Rah hal: Tabdil Explicit be int Mostaghir OR Sarih
    int numChar = static_cast<int>(fname.length());
    std::cout << numChar << '\n';

    //Suffix
    using namespace std::literals;
    std::cout << typeid("Salam"s).name() << '\n';
    std::cout << typeid("Salam").name() << '\n';

    

    return 0;
}