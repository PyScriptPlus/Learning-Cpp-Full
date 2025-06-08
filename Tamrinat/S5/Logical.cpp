#include <iostream>
#include <ciso646>

int main() {

    // Logical Operator:
    // &&  AND
    // ||  OR
    // !  NOT
    
    /*
        AND &&:
        True && True --> True
        True && False --> False
        False && True --> False
        False && False --> False
    */
    /*
        OR ||:
        True || True --> True
        False || True --> True
        True || False --> True
        False || False --> False
    */

    //--------------------------------------------------------//
    // AND &&:
    if (true && true)
    {
        std::cout << "Yes" << '\n';
    }
    if (true && false)
    {
        std::cout << "No" << '\n';
    }
    else
    {
        std::cout << "Yes" << '\n';
    }
    if (false && true)
    {
        std::cout << "No" << '\n';
    }
    else 
    {
        std::cout << "Yes" << '\n';
    }
    if (false && false)
    {
        std::cout << "No" << '\n';
    }
    else
    {
        std::cout << "Yes" << '\n';
    }
    
    //--------------------------------------------------------//

    // OR ||:
    if (true || true)
    {
        std::cout << "Yes" << '\n';
    }
    if (true || false)
    {
        std::cout << "Yes" << '\n';
    }
    if (false || true)
    {
        std::cout << "Yes" << '\n';
    }
    if (false || false)
    {
        std::cout << "No" << '\n';
    }
    else
    {
        std::cout << "Yes" << '\n';
    }
    
    //--------------------------------------------------------//


    // Adad be gheyr az 0 mishe true
    int x = 0;
    int y = 0;
    if (x > 10 && y < 200)
    {
        std::cout << "Block1" << '\n';
    }
    // Inja 0 haro bar aks kardim shodan True
    // Pas Block1 ejra mishe
    if (!x && !y)
    {
        std::cout << "Block1" << '\n';
    }
    else
    {
        std::cout << "Block2" << '\n';
    }
    
    if (!x || y)
    {
        std::cout << "Block1" << '\n';
    }
    
    if (!(!x && y))
    {
        std::cout << "Block1" << '\n';
    }
    
    // Barey estefade az and ya or be jaye operator 
    // Bayad in library include konim:
    // #include <ciso646>
    if (true and !false)
    {
        std::cout << "Yes" << '\n';
    }
    if (!false or false)
    {
        std::cout << "Yes" << '\n';
    }
    
    // Toye Library <ciso646> injuri tarif shodan ina:
    /*
        #define and    &&
        #define and_eq &=
        #define bitand &
        #define bitor  |
        #define compl  ~
        #define not    !
        #define not_eq !=
        #define or     ||
        #define or_eq  |=
        #define xor    ^
        #define xor_eq ^=
    */
    


    if (true && false || true)
    {
        std::cout << "Olaviyat && balatar az ||" << '\n';
    }
    if ((!(3 == 4)) && (5 == 5))
    {
        std::cout << "Yes" << '\n';
    }
    if (((1 == 1) && (2 == 2) || (5 == 5)) && (!(45 == 45)))
    {
        std::cout << "No" << '\n';
    }
    else
    {
        std::cout << "Yes" << '\n';
    }
    
    
    

    return 0;
}