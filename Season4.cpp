// In The Name Of God
// Season 4:


/*--------------------------------------------------------------------------------------------------------------------*/

// Moghadame:
// Dar in fasl mikhaym be 2 موضوع bepardazim
// 1-Operators 
// 2-Bit Manipulation --> دست کاری بیت

// Dar avakhare in season mipardazim be nahve zakhire sazi adad manfi dar hafeze


//-------------------//

// Khob dar riyaziyat ye mafhumi darim be name:
// Operation --> عملیات


// Mesal: 
// In 5 + 3 yek Operation hast
// Va har yek Operation mitune bishtar az 1 Operand va Operator dashte bashe

// Operand chiye? عملوند
// Hamin 5 + 3 in adad 5 va 3 Operand hesab mishan

// Har Operation ham yek Output tolid mikone 5 + 3 = 8 Result mishe 8
// Chetori in Output be dast omad hamin adad 8?
// Ba yek namad ke migim Operator --> + 
// Ba estefade az Operator ha mitunim khoruji tolid konim

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: اولویت عملگر ها

// Khob in bebin --> 2 + 4 x 3
// Be inayi bishtar az 1 Operator darand migan:
// Compound Expression

// Baraye arzyabi Compound Expression bayad avval bedunim 
// Har kodum az in Operator ha che kari anjam midahand
// Va hatman bayad bedunim اولویت kodum Operator balatar ast

// اولویت یعنی چه؟
// Yani bayad bedunim avval kodum Operator mohasebe mishe
// Be اولویت moshkhas mishe kodum Operator bayad avval arzyabi beshe
// Migan: Operators Precedence --> اولویت عملگر ها

// Be tartibi ke moshkhas mikone kodum Operator ghabl az on Operator arzyabi
// Beshe migan --> Operators Precedence

// Dar in ebarati ke neveshtim 2 + 4 x 3
// اولویت avval Operator x hast
// Vali age avval + she ba'ad x she Output fargh mikone

// Rah hal:
// Hala man barname ke neveshtam khastam olaviyat avval + bashe chetori
// Estefade az Parantez ( ) Olaviyat avval ro dare
// Mesal:
/*
#include <iostream>

int main() {

    std::cout << "Compound Expression: " << 2 + 4 * 3 << '\n';
    std::cout << "Compound Expression: " << (2 + 4) * 3 << '\n';
    std::cout << "Compound Expression: " << 2 + (4 * 3) << '\n';
    // In code akhari che parantez bezari che nazari olaviyat * hast
    // Vali tosiye mishe Parantez bezarim !!!
    // Age niyaz ham nabod baz Parantez tosiye mishe khanayi bala tar code !!

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: عملگر محاسباتی

// Ma dar in jalase mikhaym dar mored Arithmetic Operator ha sohbat konim

// Ma chand model Operator darim:
// Unary && Binary && Ternary

// Unary Operator tanha 1 Operand darad
// Binary Operator 2 ta Operand darad
// Ternary Operator 3 ta Operand darad

//--------------------------------//

// Unary Arithmetic Operator:
// 2 Ta operator darad kolan
// Minus --> -
// Plus --> +
/*
#include <iostream>

int main() {

    int x = 5;
    std::cout << "Minus: " << -x << '\n'; // -5
    int y = -5;
    std::cout << "Minus: " << -y << '\n'; // 5 معکوس میکنه 
    // Hata mitunim begim:
    // Manfi dar Manfi = Mosbat
    // Mosbat dar Mosbat = Mosbat
    // Manfi dar Mosbat = Manfi
    // Mosbat dar Manfi = Manfi
    std::cout << "Plus: " << +y << '\n'; // + nazari ham khod compiler mizare
    std::cout << "Plus: " << y << '\n'; // + nazari ham khod compiler mizare
    std::cout << "Plus: " << x << '\n';

    return 0;
}
*/

// In 2 ta operator ke neveshtim:
// Plus va Minus ino ba جمع و تفریق eshtebah nagir
// Addition in hich rabti be plus nadare
// Subtraction in hich rabti be minus nadare

// Plus va Minus tanha 1 Operand darad:
// +x && -x
// Addition va Subtraction 2 ta Operand darad:
// x + y && x - y


//--------------------------------//

// Binary Arithmetic Operator:

// In 2 ta Operand darad 
// 5 ta Operator

// Operators: 
// Addition --> +     Mesal: x + y
// Subtraction --> -    Mesal: x - y
// Multiplication --> *   Mesal: x * y
// Division --> /    Mesal: x / y
// Modulus(Remainder) --> %    Mesal: x % y

// Khob ma Addition va Subtraction va Multiplication baladim
// Division ham baladim vali niyaz be kami tozihat darad

// In Division 2 ta halat:
// Halat 1:
// Age avvali floating point ya dovvomi floating point ya har 2 ta bashe chi?
// Mesal:
/*
#include <iostream>

int main() {

    // Dar in 3 ta mesali ke zadam javab hamashon floating point hast
    // floating point ha injurie
    std::cout << "Floating point: " << 7.0 / 4.0 << '\n'; 
    std::cout << "Left int Right floating point: " << 7 / 4.0 << '\n';
    std::cout << "Left floating point Right int: " << 7.0 / 4 << '\n';


    return 0;
}
*/
// Halat 2:
// Har 2 tash int bashe chi?
// Mesal:
/*
#include <iostream>

int main() {

    std::cout << "Integer: " << 7 / 4 << '\n'; // Output = 1
    // Javab dorust in nist ke 1
    // Javab bayad 1.75 bashe
    // Dar integer injur taghsim hayi ke ashari darad be sorat sahih neshon mide

    // Hala age majbur budim 2 ta adad be sorat integer taghsim konim chi
    // Mitunim Conversion Type anjam bedim
    // Mesal:

    int x = 7;
    int y = 4;

    // Dar in 3 ta mesali ke zadam javab hamashon floating point hast
    // floating point ha injurie
    std::cout << "Conversion Type: " << static_cast<double>(x) / static_cast<double>(y) << '\n';
    std::cout << "Left integer Right floating point: " << x / static_cast<double>(y) << '\n';
    std::cout << "Left floating point Right integer: " << static_cast<double>(x) / y << '\n';

    return 0;
}
*/

// Ye mored mohem agar yek adad integer taghsim bar 0 konim chi mishe?
// Ye adad namalom be dast miad
// Ba output haye mokhtalef
// Mesal:
/*
#include <iostream>

int main() {

    // std::cout << "10 / 0 = " << 10 / 0 << '\n'; // Warning dad hich khoruji nadad
    
    // Hala age az karbar darkhast konim chetor: 
    // std::cout << "Enter your number: ";
    // int number;
    // std::cin >> number;
    // std::cout << number << " / 10 "  << " = " << 10 / number << '\n';
    // Warning nadad vali barname crash mikone

    // Nokte: Dar barname nabayad bezarim taghsim bar 0 anjam beshe mitunin jolosho ba if ina begirim:
    std::cout << "Enter your number: ";
    int num;
    std::cin >> num;
    if (num == 0)
    {
        std::cout << "Shoma 0 nemitunin vared konid." << '\n';
    }
    else
    {
        std::cout << num << " / 10 "  << " = " << 10 / num << '\n';
    }
    


    return 0;
}
*/


//-----------------------------------------//
// Ternary Operator felan neminevisim
// Mirim ye chiz dige in dar ayandeh


// Berim soragh 
// Arithmetic Assignment Operator:

/*
#include <iostream>

int main() {

    int x = 6;
    x = x + 3; // Ye moghe hayi injuri code minevisim
    // Vali biaym ino herferyi tar benevisim dige

    // Ravesh herfeyi tar
    // Baraye 5 Operator mitunim benevisim:

    // Addition:
    int num1 = 5;
    num1 = num1 += 3;

    // Subtraction:
    int num2 = 3;
    num2 = num2 -= 2;

    // Multiplication:
    int num3 = 5;
    num3 = num3 *= 2;

    // Division:
    int num4 = 15;
    num4 = num4 /= 3;

    // Modulus:
    int num5 = 5;
    num5 = num5 %= 2;

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Modulus OR (Remainder)









