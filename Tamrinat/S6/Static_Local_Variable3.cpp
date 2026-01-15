#include <iostream>

int foo() {
    static int s_value;
    return s_value++;
}

int main() {

    // Ba har function call meghdar taghir mikone !!!
    for(int i = 0; i <= 10; i++)
        std::cout << foo() << '\n';

    return 0;
}
// Vaghti yek Local Variable ro Static mikone 
// Duration mishe: Static Duration 
// Ya'ni ta akhar barname meghdar on Variable hefz mishe
// Va az beyn nemire ta on moghe!!!
// Va Static konim Local ro mesl Global Initialization avvalie 
// Default = 0 hast
// Chera s_ mizaram? Chon har moghe didam befahmam in Variable
// Ma'moli nist balke Static hast