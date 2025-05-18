
// Code zir x = 0 hast ke gofte na barari bari 0 ke mishe False
// Chon 0 ba 0 bararbar hast inja != neveshte hala dige niyaz nist
// Bakhsh dovvom ejra kone va behine tar hast in kar
// Chon dar && 1 yeki false bashe bagiye false hast
// Va jolo giri az taghsim 0 jologiri ham mishe ba yek tir 2 neshon
// x ma 0 hast nabayad hich adadi be 0 taghsim beshe goftim

#if 0
int x = 0;
if (x != 0 && 10 / x > 1) {
    // کاری انجام بده
}
#endif

#include <iostream>

int main() {

    // int x = 0;
    // if (x != 0 && 10 / x > 1)
    // {
    //     std::cout << "xD" << '\n';
    // }
    // else
    // {
    //     std::cout << "Malom bod" << '\n';
    // }

    int x = 6 , y = 3;
    bool mamad = true;
    
    if (x == y || !(3 == 1 && mamad && false))
    {
        std::cout << "True";
    }else {
        std::cout << "False";
    }
    // if (!(x && y > 3)) // x || y > 3 true
    // {
    //     std::cout << "true";
    // }else{
    //     std::cout << "false";
    // }
    
    
    

    return 0;
}