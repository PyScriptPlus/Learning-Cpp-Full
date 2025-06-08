#include <iostream>

void tedad(){

    // Ba static meghdaresh hefz mishe az beyn nemire ta barname kamel baste she
    // Vali dar int i = 0; sade hey meghdar az beyn mire va dobare 1 , 1 , 1
    // Vali dar static in juri nist
    static int i = 0;
    i++;
    std::cout << i << '\n';
    return;
}

int main() {

    tedad();
    tedad();
    tedad();
    tedad();

    return 0;
}