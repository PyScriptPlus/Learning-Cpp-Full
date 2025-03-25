// In mabhas namespace hast ke hanoz neveshtan code sho nakhundim
// Vali be nazar man az alan kami behesh mosalat shavim behtar hast
// In namespace ham khundim tarifesho ke be che dardi mikhore
// Baraye jelo giri az ( Name Collision ) ha hamon ( Tadakhol asami )
// Vaghti 2 ta Identifier moshabeh be ham minevisim dar global namespace ya global scope
// Mesl Variable ya function 
// Makhsusan Function chon hamishe dar global namespace ya hamon global scope tarif mishe

// Mesal:
#include <iostream>
/*
Error:

void printer(){

    return;

}

void printer(){

    return;
} 
*/

// Rah hal:

namespace function1
{
    void printer() {

        std::cout << "Hello" << '\n';
        return;

    }    

}
namespace function2
{
    void printer() {

        std::cout << "Good Bye!" << '\n';
        return;

    }

}

int main() {

    // Injuri behtare dar bozorg haye bozorg az in ravesh estefade koni
    function1::printer();
    function2::printer();

    // Pishnahad nemishe vali agar az yek namespace estefade ziadi mikhay koni
    // using kon
    // Mesal:
    // Vali bazam dar project haye bozorg pishnahad nemishe
    using namespace function1;

    printer(); 
    
    return 0;
}














