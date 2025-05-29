#include <iostream>

// Adat kon bishtar be Prefix chon behtar hast
// Copy nemigire va mostaghim meghdar afzayesh mishe
// Va herfeyi tar ham hast!!!

int main()
{
    // Postfix Increment
    int x = 5;
    int y = x++;
    std::cout << "Postfix Increment: " << y << '\n';
    std::cout << "Postfix Increment: " << x << '\n';

    // Prefix Increment
    int i = 5;
    int z = ++i;
    std::cout << "Prefix Increment: " << z << '\n';
    std::cout << "Prefix Increment: " << i << '\n';

    // Postfix Decrement
    int min1 = 4;
    int min2 = min1--;
    std::cout << "Postfix Decrement: " << min2 << '\n';
    std::cout << "Postfix Decrement: " << min1 << '\n';

    // Prefix Decrement
    int pre = 10;
    int mpre = --pre;
    std::cout << "Prefix Decrement: " << mpre << '\n';
    std::cout << "Prefix Decrement: " << pre << '\n';


    return 0;
}