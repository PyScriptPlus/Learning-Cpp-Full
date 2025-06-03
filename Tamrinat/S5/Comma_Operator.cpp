#include <iostream>

int main() {
    
    // Olaviyat Comma payin tarin olaviyat beyn hame Operator ha dare !!
    // Ebarat1 , Ebarat2 = Output --> Ebarat2
    int x = 5;
    int y = 3;
    std::cout << x, y << '\n'; 
    // Olaviyat payin tari dare nesbat be Insertion Operator pas 
    // Output --> 5
    // Rah hal:
    std::cout << '\n' << (x, y) << '\n'; 
    // Alan avval dakhel parantez mohasebe shod va Ebarat samt rast 
    // Shod khoruji

    // Ye mesal codi dige:
    int i = 5;
    std::cout << (i++ , ++i) << '\n';
    // Trace in code:
    // Ebarat avvali ye meghdar ezafe mikone
    // Ebarat dovvom yek meghdar ezafe mikone baad chap mikone
    // Mishe 7


    return 0;
}   