#include <iostream>

int main() {

    // Default Initialization:
    int x;

    // Copy Initialization:
    int y = 5;

    // Direct Initialization:
    int z(5);

    // Uniform Initialization:
    int i{5};

    // Uniform joloye khata ro migire
    // Tabdil haye eshtebah jolosho migire
    // Mesal:
    // int num{1.5}; // Ejra koni Error
    double floating = 25.5;
    int number1{floating}; // Warning az tabdil Implicit
    std::cout << number1 << '\n';
    // Age khastim bedon warn anjam beshe
    // Bayad Tabdil Explicit anjam bedim
    // Toye in Season nist vali migam
    // Explicit:
    double point = 55.5;
    // int num2 = int(point);
    // OR
    int num2 = static_cast<int>(point);
    std::cout << num2 << '\n'; // Meghdar .5 az dast mire dige




    return 0;
}