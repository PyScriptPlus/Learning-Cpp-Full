#include <iostream>

int main() {

    // Chon adad ke mikhad taghsim bar on she bozorge
    // Adad khodesh miad ( 5 )
    int x = 5 % 6;
    std::cout << x << '\n';
    std::cout << 6 % 2 << '\n';
    
    // %2 = 0 , 1
    std::cout << "Enter your Number: ";
    int y;
    std::cin >> y;
    std::string_view Odding = (y % 2 == 0) ? "Zoj" : "Fard";
    std::cout << Odding << '\n';

    int modulus1 = 5;
    int modulus2 = 4;
    // Samt rastie moheme chi bashe 
    // Age manfi bod res mishe manfi age mosbat res mishe mosbat!
    int res = modulus1 % modulus2; // Output --> 1
    int res2 = -modulus1 % -modulus2; // Output --> -1
    int res3 = -modulus1 % modulus2; // Output --> -1
    int res4 = modulus1 % -modulus2; // Output --> 1
    std::cout << res << '\n' << res2 << '\n' << res3 << '\n' << res4 << '\n';

    return 0;
}