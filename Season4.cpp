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

// Dar in jalase mikhaym bepardazim be baghimande taghsim sahih ke dar zaban barnamenevisi
// Modulus OR (Remainder) ham behesh migan namadesham --> %

// Miyad ye taghsim sahih beyn 2 ta adad anjam mide baghimande taghsim be onvane khoruji 
// Barmigardune

// Mesal: 
// 10 % 2 = 0
// 10 % 4 = 2
// 6 % 4 = 2 
// 6 % 6 = 0
// 0 % 0 = Warning: division by zero

// Hala taghsim sahih chejuri daftar behtar hast bebini vali inam bebin
// Mesal:
// 10 % 2:
// 10 / 2 = 5 * 2 = 10 && 10 - 10 = 0
// OR
// 10 % 4:
// 10 / 4 = 2 * 4 = 8 && 10 - 8 = 2

// Mishe edame dad vali bayad taghsim sahih bashe va edame bedim mikeshe be اعشاری

// Nokte: Hamishe adadi ke mikhaym taghsim konim be 4 3 ina samt chap ghrar migire 
// x % 5;

// Hala age adad samt chap kochik tar az samt rast bashe mesal:
// 5 % 7 = khod adad miad nemishe taghsim sahih kard javab mishe 5

// Ye karbord khobi ke dare in Modulus ghesmat bakhsh paziri ha hast
// Bakhsh pazir ha chejurie yani age baghimande 0 bashe in 2 adad be ham bakhsh pazir hastand
// Mesal:
// 15 % 5 = 0 // 15 bar 5 bakhsh pazir hast
// Bejoz 0 dige bakhsh pazir nistand

// Khob ye rahi hast befahmim baghi mande adad % 5 beyne che adadi mitune bashe
// Mesal: x % 5 // az 0 shoru mishe ta yeki kamtar az khod adad 0 , 1 , 2 , 3 , 4
// x % 3 // 0 , 1 , 2

// Khob hala bakhsh paziri yad gerftim va fahmidim baghi mande adad felan beyn che adadi hast
// Ba inayi ke fahmidim mitunim tashkhis adad joz va fard benevisim
// chejurie 
// 0 mishe Zoj 1 mishe Fard 
// Hala baghimande adad % 2 beyn adad 0 , 1 hast dige :D
// Hala age felan adad bar 2 bakhshpazir bod Zoj age nabod fard :) EZZ

// Mini Project check even and odd:
// even = hamon zoj
// odd = hamon fard
/*
#include <iostream>

int main(){

    std::cout << "Enter your Number: ";
    int x;
    std::cin >> x;
    if (x % 2 == 0)
    {
        std::cout << x << " The number is even" << '\n';
    }
    else
    {
        std::cout << x << " The number is odd" << '\n';
    }
  

    return 0;
}
*/

// Ma goftim adad avvali ke mikhaym taghsim she hamon x % 5
// Bayad samt chap gharar begire
// Hala khoruji in ha chi mishe:
// -5 % -3 
// 5 % -3
// -5 % 3
// Coding:
/*
#include <iostream>

int main() {

    std::cout << "Modulus: " << -5 % -3  << '\n'; // -2
    std::cout << "Modulus: " << 5 % -3  << '\n'; // 2
    std::cout << "Modulus: " << -5 % 3  << '\n'; // -2

    // Hamishe samt chap moheme samt rast manfi bashe che mosbat bashe
    // Baraye khoruji farghi nemikone

    return 0; 
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: POW (توان)

// Dar zaban C++ va zaban C va ye seri zaban haye dige mesl C#, JAVA va ....
// Tavan injuri nadarand 2 ^ 3 // 2 be tavan 3 age bekhaym dar zaban C++ code sho benevisim
// Ye Library dare ( math )
// Dar zaban C #include <math.h>
// Dar zaban C++ #include <cmath>
// Mesal bezanim:
/*
#include <iostream>
#include <cmath>

int main() {

    // Neveshtan std ya naneveshtan farghi nemikone
    // Vali behtar ast benevisim
    std::cout << "2 ^ 3: " << std::pow(2 , 3) << '\n';
    std::cout << "2 ^ 3: " << pow(2 , 3) << '\n'; 
    
    // In pow mitunim berizim ye Variable az type double
    // Ta deghat bala tari dar adad bala dashte bashe
    double tavan = std::pow(2 , 11);

    // Ashari ham mishe nevesht:
    double tavan2 = std::pow(2.5 , 3); // Tavan dar double 100% neveshte shavad

    std::cout << "2 ^ 11: " << tavan << '\n';
    std::cout << "2.5 ^ 3: " << tavan2 << '\n';


    return 0;
}
*/
/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Increment & Decrement

// Ye zamani hast lazem mishe yek vahed yani adad 1 ra be ye Variable ezafe konim 
// Ya azash yek Vahed kam konim
// Baraye in kar omadan ye Operator tarif kardan 

// Esm in Operator ke 1 Vahed ezafe mikone --> Increment 
// Yani ye Variable darim meghdarash 5 hast ba estefade az in Operator mishe 6

// Esm in Operator ke 1 Vahed kam mikone --> Decrement
// Yani ye Variable darim meghdarash 10 hast ba estefade az in Operator mishe 9

// Namadeshon ya hamon Symbol in Operator ha:
// Increment --> ++
// Decrement --> --
// Ke ina 2 halat daran
// Prefix Increment Operator --> ++x
// Postfix Increment Operator --> x++
// Prefix Decrement Operator --> --x
// Postfix Decrement Operator --> x--

// Khob in Prefix va Postfix taghriban ye kari ro anjam midan
// Vali ye fargh khasi darad 

// Prefix ++x , --x : Avval meghdar taghir mide baad estefade mikone
// Postfix x++ , x-- : Avval estefade mikone baad meghdar ro taghir mide

// Ye mesal ye kamelan ja biofte:
/*
#include <iostream>

int main() {

    // Postfix: 

    // Inja x meghdar avvalie ke 5 hast mige y
    // Baad adad ro ziad mikone
    int x = 5;
    int y = x++;
    std::cout << "Postfix: " << x << " va " << y << '\n';

    int xneg = 3;
    int yneg = xneg--;
    std::cout << "Postfix: " << xneg << " va " << yneg << '\n';


    // Prefix: in behtar hast be jaye khodesh tosiye mishe

    // Inja xper avval meghdar ziad mikone baad mide be yper
    int xper = 45;
    int yper = ++xper;
    std::cout << "Prefix: " << xper << " va " << yper << '\n';

    
    int xpn = 3;
    int ypn = --xpn;
    std::cout << "Prefix: " << xpn << " va " << ypn << '\n';


    int num = 56;
    std::cout << "Behtare Prefix: " << ++num << '\n';

    return 0;
}
*/
/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Comma Operator

// Khob dar zaban C++ ye Operator be name Comma darim ke estefade azash kheyli rahate

// Operator Comma be in sorat amal mikone ke 
// Yek Ebarat samt chap darim ye Ebarat samt rast
// Ke Ebarat samt chap mohasebe mishe baad Ebarat samt rast mohasebe mishe 
// Va Ebarat samt rast be onvan natije barmigardone
// Ebarat samt chap hich tasiri roye natije nadare !!!!
// Manzur az mohasebe mishan yani ejra mishe

// (Ebarat1 , Ebarat2)  Output --> Ebarat2

// Nokte: Operator Comma dar zaban C++ payin tarin olaviyat ro darad
// In ke olaviyat payin ro darad emkan in hast ba Natayej ajibi ro be ro kone 
// Mesal mizanam jolo tar

// Ye mesal sade bezanim az in Comma Operator:
/*
#include <iostream>

int main() {

    int x = 5;
    int y = 3;
    std::cout << "Comma Operator: " << (x , y) << '\n'; // Output --> y
    std::cout << "Comma Operator: " << (++x , ++y) << '\n'; 

    return 0;
}
*/
// Khob bala goftam Comma Operator olaviyat payin tari dare nesbat be bagiye Operator ha
// Baad goftam ehtemal dare ba Natayej mokhtalefi maro ghafel gir kone

// Code bala man x , y andakhtam toye parantez (x , y)
// Age parantez nemindakhtam chi mishe
// Mesal:

// z = x , y; // Output --> x 
// Chera x ? mage nagoftim Ebarat samt rast Output barmigardune
// Baraye inke Olaviyat Comma payin tar az = hast 
// Baad = mostaghim x ro Output barmigardone nemirese be y

// Mesal codi ham bezanam: 
/*
#include <iostream>

int main() {

    int x = 55;
    int y = 44;
    std::cout << "Comma Operator" << x , y << '\n'; // Output --> x 
    // Chera x? bazam migam chon Olaviyat Comma payin tar hast olaviyat << bala tar az Comma hast
    // Rah hal chiye? Estefade az Parantez chon balatarin Olaviyat ro dare

    return 0;
}
*/
// Nokte akhar: 
// Avval in ke in Comma Operator faghat dar zaban C va C++ vojud darad
// Nokte dovvomi ke vojud darad in Comma Operator ke alan goftam ba ina fargh dare mesal:
// Yadete Paramter function minevshtim toye Declaration Comma mizashtim hello(int , int);
// Ba ina fargh dare ya masalan int x = 5, y = 3; ba ina kolan fargh dare !!!!

// Dar ayande migam in Operator Comma koja estefade konim :)

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Ternary Operator, Conditional Operator

// Dar zaban C++ yek Operator darim be name: Condition Operator
// Aksaran ham migan Ternary Operator

// In Ternary Operator 3 ta Operand dare

// Tanha Ternary hast ke dar zaban C++ vojud darad!
// Yani dar zaban C++ faghat hamin :? Operator hast ke 3tayi hesab mishe
// Baghiye Operator ha 1 ta Operand dare mesl Unary 3 ta Operator +, -, !
// Ya yeki am hast 2 ta Operand dare mesl Binary Operator ham ziad dare
// Pas tanha Ternary mitune 3tayi hesab she 

// Banabar in toye zaban C++ faghat hamin ?: hast ke 3 ta Operand dare
// Behesh migan Ternary Operator

// In Ternary-Operator chist?
// Kotah shode if hast va kheyli am behtare jolo tar mibinim
// Dar jaye khodesh va zaman khodesh behtare !!

// Syntax: 
// (Condition) ? Expression1 : Expression2;
// Expression1 = True , Expression2 = False
// Khob in Syntax chejuri kar mikone agar Condition ma true bashe
// Expression1 ejra mishe agar else msihe false bashe Expression2 kar mikone

// Mesal sade:
/*
#include <iostream>

int main() {

    int x = 5;
    int y = 2;
    int i = (x > y) ? 100 : 200;
    std::cout << i << '\n';

    return 0;
}
*/
// In code bala hamine:
/*
if(Condition)
{
    // Expression1
}
else
{
    // Expression2
}
*/


// Mitunim az in Ternary Operator estefade khob konim
// Biaym bahash MAX , MIN benevisim
// Kochik va bozorg tarin adad namayesh bede
/*
#define MAX(x , y) ((x > y) ? x : y)
#include <iostream>

// Code kami ajib gharib neveshtam xD vali khob okeye
namespace mohasebe{

    int x;
    int y;

    int max()
    {
        return ((x > y) ? x : y);
    }
    int min()
    {
       return ((x < y) ? x : y);
    }
    // int MAX = ((x > y) ? x : y);
    // int MIN = ((x < y) ? x : y);

}

int main() {

    std::cout << "Enter your Number 1: ";
    std::cin >> mohasebe::x;
    std::cout << "Enter your Number 2: ";
    std::cin >> mohasebe::y;
    std::cout << "Big Number: " << mohasebe::max() << '\n';
    std::cout << "Small Number: " << mohasebe::min() << '\n';

    return 0;
}
*/

// Hala ye seri kar ha mishe toye Ternary anjam dad ke toye if-else nemishe
// Mesal: meghdar dahi kardan meghdar avvali yek Variable sabet ya Variable mamoli
// Bekhaym ba Ternary mishe vali if-else nemishe
/*
#include <iostream>
// Mesal:
int main() {

    // In code ba if-else nemishe
    constexpr bool isCold = true;
    constexpr int status = (isCold) ? 1 : 0;
    std::cout << status << '\n';
    
    // Bia test konim chera?
    constexpr bool isHot = false;
    if (isHot)
    {
        constexpr int statusWeather = 1;
    }
    else
    {
        constexpr int statusWeather = 0;
    }
    // std::cout << statusWeather << '\n';
    // Peyda nemikone statusWeather chon dar mahdode if-else tarif shode
    // Eftezahe injuri 

    
    // Hala begi shayad injuri mishe
    // Vali kehyr:
    // In if(isHot) dar RunTime moshakhas mishe vali ma constexpr tarif kardim
    // Khob 2 ta am constexpr tarif kardim vali ta Run nashe moshkhas nemishe 
    // Kodum bayad ejra she
    // Khob vali constexpr CompileTime bayad moshkhas she vali inja dar RunTime malom mishe
    // Pas eshtebahe
    
    // Ye mesal dige am in code payini bezanm
    // In code ejra mishe vali aslan behine va dorust nist chera?
    // Goftim in if (isHot) dar RunTime ejra mishe
    // Vali on Variable ha CompileTime
    // Hala vaghti ejra shod in isHot true bod
    // Block avvali barresi mishe baad ejra mishe
    // Hala baz Block dovvomi barresi mishe vali ejra nemishe belataklif mimune
    if (isHot)
    {
        constexpr int statusWeather = 1;
        std::cout << statusWeather << '\n';
    }
    else
    {
        constexpr int statusWeather = 0;
        std::cout << statusWeather << '\n';
    }
    
    // Khob 2 ta Rah hal dare:
    // Rah hal 1:
    int x;
    if (isHot)
    {
        x = 1;
    }
    else
    {
        x = 0;
    }
    std::cout << x << '\n';

    // Khob dar ravash bala faghat Variable sade mishe 
    // const ya hamon sabet nemishe
    // Ye rah hal ham baraye sabet peyda kardam 
    // Vali dar C++17 be bala kar mikone
    // Rah hal 2:
    // In code alan dige RunTime nist 
    // Va mesal isHot ke alan false hast Block avvali dige belataklif nist
    // Behine ham hast
    // Alan faghat Block dovvomi barresi mishe va ejra
    if constexpr (isHot)
    {
        constexpr int status1 = 1;
        std::cout << status1 << '\n';
    }
    else
    {
        constexpr int status2 = 0;
        std::cout << status2 << '\n';
    }
    // Hala in if constexpr dige midune kodum bayad barresi she va ejra
    // Chon if ham CompileTime kardim va dar C++17 be baad ghabel ejra hast in

    return 0;
}
*/

// Ye mored ham begam:
// Chera az alamak Question ( ? ) estefade mikonim
// Kar bordesh chiye
// Aalamat ( ? ) dar inja mesl Aya dar farsi ma hast
// Aya in shart doruste?
// Agar bale true ejra mishe hamon Expression ghabl ( : )
// Agar kheyr false ejra mishe hamon Expression baad ( : )

// Kholase: In alamat ( ? ) moshakhas mikone kodum Expression ejra she
// Va aya shart doruste ya kheyr


// Nokte akhar
// Code zir bebin:
/*
#include <iostream>

int main() {

    std::cout << (5 > 2) ? "Salam" : "Bye"; // << '\n' inam nemishe jolosh gozasht error mide
    // Chera adad 1 mide output xD

    // 1 Yani true age false bod 0 midad
    // Chera pas "Salam" chap nakard
    // Ye nokte ke hast Olaviyat << bishtar az ?: hast
    // Hala bendazim parantez dorust mishe:
    std::cout << ((5 > 2) ? "\nSalam" : "\nBye") << '\n';

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Relational Operators

// Dar in jalase be Relational Operator ha mipardazim ya hamon Operator haye moghayese
// Relational Operator be ma in emkan mide ke 2 meghdar ro moghayese konim ke khoruji sham
// Malome Boolean hast ya True ya False hast

// Mesal 5 ba 5 barabar hast? True
// Ya 10 bozorg tar az 202 hast? False

// Dar zaban C++ 6 ta az in Operator haye moghayeseyi darim
// Hameye in Operator haye zir khorujishon Boolean hast
/*
    Greather Than: >
    Exam: x > y

    Less Than: <
    Exam: x < y

    Greather Than OR Equal to: >=
    Exam: x >= y

    Less Than OR Equal to: <=
    Exam: x <= y

    Equal to: ==
    Exam: x == y

    NOT Equal to: !=
    Exam: x != y
*/

// Mitunim az Operator haye Relational dar if, for and while estefade konim

// Ye mesal felan ba if berim:
/*
#include <iostream>

int main() {

    int x = 21;
    int y = 123;
    if (x < y)
    {
        std::cout << "x is Less Than y" << '\n';
    }
    if (x > 2)
    {
        std::cout << "x is Greather Than 2" << '\n';
    }
    if (x == y)
    {
        std::cout << "x is Equal to y" << '\n';
    }
    else
    {
        std::cout << "x is NOT Equal to y" << '\n';
    }
    // In ( <= ) ya kochiktar az ya barabar bashe true mide
    if (x <= y)
    {
        std::cout << "x is Less Than OR Equal to y" << '\n';
    }
    // In ( >= ) ya bozorgtar az ya barabar bashe true mide
    if (x >= 21)
    {
        std::cout << "x is Greather Than OR Equal to 21" << '\n';
    }
    if (x != y)
    {
        std::cout << "x is NOT Equal to y" << '\n';
    }

    // Yek nokte baraye herfeyi ha:

    bool gender;
    std::cout << "Agar 1 bashe ( Male ) va 0 bashe ( Fmale ): ";
    std::cin >> gender;
    // Dige in code behtari nist:
    // if (gender == true) // chon block avvali dige True hast
    if (gender)
    {
        std::cout << "Gender is Male" << '\n';
    }
    // else if(gender == false) // Inam code khobi nist
    // Payini behtarin has
    else if(!gender)
    {
        std::cout << "Gender is Fmale" << '\n';
    }
    
    // Mobtadi: (x == 7)
    // Herfeyi: (x)

    // Mobtadi: (x != 7) 
    // Agar midunesti barabar nist pas injuri:
    // Herfeyi: (!x)

    return 0;
}
*/


// Estefade az Relational Operator ha dar Floating-Point ha 
// Baraye test hatman lazem hast
// Ye mesal mizanm befahmi
/*
#include <iostream>
#include <iomanip>

int main() {

    double num1 = 100.0 - 99.99; // Output --> 0.01
    double num2 = 10.0 - 9.99;  // Output --> 0.01
    std::cout << "num1: " << num1 << '\n';
    std::cout << "num2: " << num2 << '\n';
    // Har 2 ta yek khoruji midan
    // Vali biaym ye test moghayeseyi konim :)
    if (num1 == num2)
    {
        std::cout << "num1 is Equal to num2" << '\n';
    }
    else
    {
        std::cout << "num1 is NOT Equal to num2" << '\n';
    }
    // Khotuji false bod xD
    // Chera? 
    // Dar season haye ghabl gofte bodim 
    // Ke dar adad ashari miad mesal hamin
    // Nazdik tarin adad ro be 0.01 zakhire mikone khodesh nist
    // Biaym baham bebinim ba estefade az std::setprecision()
    std::cout << std::setprecision(18);
    std::cout << "num1 aftar setprecision: " << num1 << '\n';
    std::cout << "num2 aftar setprecision: " << num2 << '\n';
    // Bale mibinim ke num1 bozorg tar az num2 hast xD
    if (num1 > num2)
    {
        std::cout << "num1 is Greather Than num2" << '\n';
    }
    else
    {
        std::cout << "num1 is NOT Greather Than num2" << '\n';
    }
    // Pas hatman dar Floating-Point ha baraye test
    // Dar project haye bozorg estefade kon!!!
    // Makhsosan dar Project haye Havafaza kheyli moheme inaa!!!
    

    return 0;
}
*/
/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Logical Operator

// Dar jalase ghabl Relational_Operator yad gereftim ke be ma in emkan midad
// Barresi konim aya shart bar gharar hast ya kheyr

// Hala mikhaym chand ta shart be sorat hamzaman barresi konim ke bayad az
// Logical Operator estefade konim

// Dar zaban C++ ma 3ta Logical Operator darim
// AND && --> x && y
// OR || --> x || y
// NOT ! --> !x

// Avval berim soragh Logical OR in OR be ma mige:
// x || y 
// t || t --> t
// t || f --> t
// f || t --> t
// f || f --> f

// In OR ravandesh ine yeki True ya har 2 ta True bashe natije True hast
// Va toye oni ke har 2 ta False hast output mishe False

// Berim soragh Logical AND:
// Inam mige har 2 ta True bashe Output mishe True
// Agar dar yekish False bashe natije False mishe
// Inam baz False ba False bashe natije False mishe
// Mesal:
// x && y
// t && t --> t
// t && f --> f
// f && t --> f
// f && f --> f

// Ye mafhumi ast dar zaban C++ ke kheyli karbord va mohem
// Baraye behine sazi project niyaz hast
// Short circut evaluation
// Ya hamon arzyabi madar kotah
// Ma goftim age dar Logical AND har 2 ebarat true bashe natije True
// Toye in x && y
// Hala compiler barresi mikone mibine hasel avval true hast nemitune felan javab
// Gh'ati bede ke hasel in 2 ta Operand true hast ya false bayad Operand Y ham barresi beshe
// Ta natije bede

// Vali toye mesal in x && y
// Compiler mibine Operand avval hamon x false hast dige edame nemide 
// Chon fargh nemikone y che True bashe che False
// Natije in ebarat False hast 
// In behine hesab mishe 

// Agar dar zamani khodemun midunim hasel ebarat chejurie 
// Mitunim dasti behine konim behtare !!!

// Moshabeh hamin Short Circut Evaluation baraye OR ham darim
// Mesal:
// x || y
// Age x true bashe Compiler dige y barresi nemikone hasel ebarat mishe True
// Vali age x False bashe Compiler nemitune javab gh'ati bede hasel ebarat chiye?
// In OR kamel bar aks AND hast mishe goft injurie
// Agar dar har zaman momken bashe say kon behine amal koni

// Ye mesal bezanim:
/*
#include <iostream>

int main() {
    
    int x = 0;
    // Code deghat koni ba 1 tir 2 neshon zadim
    // Ham behine shod chon x ba 0 barabar hast
    // Pas false dige edame nemide
    // Chon age edame midad 10 / 0 mishod ke error goftim
    // Hala ba 1 tir 2 neshon zadim:
    // 1- Ham behine shod hamon avval false shod baste shod
    // 2- Jologiri az taghsim bar 0 
    // :)
    if (x != 0 && 10 / x > 1)
    {
        
    }
    else
    {
        std::cout << "False" << '\n';
    }



return 0;
}
*/

// Ma mitunim Operator haye AND, OR, NOT tarkibi ham estefade konim
// Va Condition haye pichide benevisim faghat bayad be Olaviyat haye ina deghat konim
// Ya az parantez estefade konim AND az OR olaviyat balatari darad

// Mesal:
// Value1 || Value2 && Value3 && Value4
// Khob inja Value2 ba Value3 arzyabi mishe natije ba Value4 ba natije ba Value1 OR mishe

// Hala mitunim Parantez bezarim baraye khanayi ya age khastim mesal avvalin ebarat felan bashe
// Parantez mizarim avval on arz yabi beshe
// Mesal:
// (Value1 || Value2) && Value3
// Inja avval Value1 ba Value2 arz yabi mishe baad natije ba Value3


// Nokte dige: Ghanon: Demorgan's Laws
// Kamelan karbord darad
// Khob chiye? Ba estefade az Naghiz hamon ( ! , NOT ) mitunim yek ebarat tarkibi Logical
// Ra baz nevisi konim 
// Mesal:

// !(A && B) --> !A || !B
// !(A || B) --> !A && !B
/*
#include <iostream>

int main() {

    int x = 6;
    int y = 3;
    if (!(x || y > 2)) 
    {
        // x == false mishan 0
        // y == false mishan 0
        // || mishe &&
        // Hala 2 kochik tar az 0 hast kheyr inam false
    }
    else
    {
        std::cout << ":)" << '\n';
    }

    // Ye mesal dige:
    int i = 6, z = 3;
    bool value = true;
    if (i == z || !(3 == 1 && value && false))
    {
        std::cout << ":)" << '\n';
    }
    // Trace:
    // !3 == 1 --> true
    // !&& --> ||
    // !value --> false
    // !&& --> ||
    // !false --> true
    // Res = true:
    // i == z --> false
    // true || i == z --> true

    return 0;
}
*/
// Ye rah sade baraye peyda kardan javab dakhel parantez ke naghiz dare:
// Mesal in:
// !(3 == 1 && value && false)
// 3 == 1 --> false hast && value mishe false hala && false baz mishe false
// Javab mishe false hala naghiz bede be in false mishe true :D

// Nokte akhar:
// Dar zaban C++ in Logical Operator ke yad gerftim mitunim be jaye alamateshon
// Horufeshon benevisim ba estefade az Library <ciso646>
// Baraye zaban C am ine: <iso646.h>
/*
#include <iostream>
#include <ciso646>
//#include <iso646.h> // C library

int main() {

    // ! --> not
    // && --> and
    // || --> or

    int x = 0;
    int y = 1;
    if (x or y)
    {
        std::cout << "True" << '\n';
    }
    if (not(x and y))
    {
        std::cout << "True" << '\n';
    }
    
    return 0;
}
*/
/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Bit Manipulation

// Khob bahs Operator ha tamum shod az in be ba'ad faghat roye Bit Manipulation tamarkoz mikonim
// Shayad ye seria began ziad mohem nist in bahs

// Khob age mohem nist chera gozashtan?
// Dalilesh in bod ke on zaman hayi ke in zaban be vojud omade barname nevisa bayad az manabe'
// Sakht afzari be behine tarin shekl mohem estefade mikardand va migan dige alan niyazi nist
// Vali hanozam ja dare ye seri barname ha behine shavad
// Va yeki az dalayel ke omadim zaban C++ yad begirim hamin behine bodanesh va sor'atesh hast

// Ma ghablan goftim dar memari haye modern kochek tarin vahed ( Byte ) hast
// Eshtebah nagir kochek tarin vahed zakhire sazi ( Bit ) hast
// Vali Kochek tarin sakhtar dahi dar hafeze Ram ( Byte ) dar nazar gerfte mishe

// Mesal: migoftim felan Variable 4Byte hafeze ro eshghal mikone

// Mabna ro Byte gharar dadand: Yani be jaye inke tak ( Bit ) kar beshe hame chiz bar asas
// Group haye 8biti ke (8bit = 1Byte) mohasebe ya barresi mishe

// Khob mesal Boolean dar nazar begirid
// Ma midunim type Boolean tanha 2 meghdar mitune begire meghdar True = 1 ya False = 0
// Pas baraye neshan dadan yek meghdar Boolean 1bit ham kefayat mikone
// Chon dar 1bit mitunim 0 ya 1 zakhire konim
// Vali az onja ke kochek tarin vahed sakhtari dar Ram Byte hast va Boolean 1Byte hamon 8bit hast
// Khob inja alan 1Bit kefayat mikone pas 7 bit in Boolean vaghean be hadar (Waste) mishe
// Alan moshkeli ijad nemikone vali dar Project haye bozorg in hadar rafte ha baham jam beshan
// Milyard ha hadar raft darim va project ma ham mishe mesl Activision xD aslan behine nis

// Dar moghiyat khodesh behine bodan baraye ma avvalin Olaviyat khahad dasht

// Yek seri karbord ha vojud darad mesl: Bahs haye shabake, Bahs haye ramz negari,
// Algorithm haye feshorde sazi, ke aslan niyaz hast ba hamchin bahs Bit Manipulation ashna shavim
// Va yad begirim 

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Bit Flag

// Khob mesal ma ghablan be in: int foo = 5;
// Migoftim ke in Variable foo meghdar 5 ro dare va ba posht parde on kari nadashtim ke 
// Che 0 OR 1 hayi hast vali dar bahs Bit Manipulation kolan ba 0,1 ha sarkar darim 
// Mesal migim Variable foo hamchin ( 0101 ) hayi dar posht sahne zakhire karde

// Ye chizi ma ye Variable Boolean darim ke 1Byte az hafeze ro eshghal karde
// bool x; 0000'0000 har kodom az in 0 va 1 hayi ke 
// Mesal baraye 1 migan Roshan 
// Baraye 0 migan Khamosh 
// Be ina Bit Flag migim
// Ya ma midunim ke Flag ma'ni parcham mide
// 2 Halat dare ya (برافراشته است) --> Roshan ya (برافراشته نیست) --> Khamosh

// Hala baraye tarif majmoeye az Bit Flag ha che kar bayad bekonim
// Yani dar bahs Bit Manipulation az che Type Variable estefade konim
// 1- unsigned integral
// 2- bitset
// 3- dynamic_bitset

// unsigned inja bayad estefade she ghablan goftim estefade nakon 
// Vali inja ezterari hast bayad estefade she
// hala integral chiye? Goftim 1 bar on Type hayi ke dar posht sahne ye chiz dige zakhire mishan
// Mesl Boolean ke True dar hafeze 1 zakhire mishe False ham 0
// Ya khod int dar hafeze 0 OR 1 zakhire mishe 
// Khod char mesal 'a' dar hafeze 97 zakhire mishe code haye ASCII

// Mesal codi ba bitset felan bezanim
// Ghablan sar kar ba bitset dashtim 
// Library bitset bayad include beshe
/*
#include <iostream>
#include <bitset>

int main() {

    // std::bitset<tedad bit mored nazar> Identifier;

    std::bitset<4> mybit = 0b1010;

    return 0;
}
*/

// Ma 2 ta estelah darim:
// 1- Bit Sequence 101011
// 2- Bit Position 543210   
// Bit Sequence hamon 0 ya 1 hayi hast posht sar ham ke dar bitset zakhire mikonim
// Bit Position ham mogheyat on 0 ya 1 hayi hast ke ba on neshon midim va az samt 
// Rast shoru mishe ba 0 ta samt chap
// Mesal: Bit ba Position 3 ke 1 hast
// Ya Bit ba Position 4 ke 0 hast

// Khob in bitset<> 4ta Function asli dare
// Ke har kodum az ina Bit Position daryaft mikonand
// 1-test()
// 2-set()
// 3-reset()
// 4-flip()

// Toye code mesal mizanam motavajeh mishi:
/*
#include <iostream>
#include <bitset>

int main() {
    
    // Ba test() mitunim bebinim bit ba position felan 1 hast ya 0
    // Barresi mikone
    std::bitset<4> mybits = 0b1010;

    std::cout << "Bit Position 1: " << mybits.test(1) << '\n';

    // set() miad on biti ke 0 hast ro 1 mikone
    mybits.set(0);
    std::cout << "Bit Position 0: " << mybits.test(0) << '\n';

    // reset() miad on biti ke 1 hast ro 0 mikone bar aks set()
    mybits.reset(3);
    std::cout << "Bit Position 3: " << mybits.test(3) << '\n';

    // flip() miad on bit hayi ke 1 hast ro 0 mikone onayi ke 0 hast ro 1 mikone
    mybits.flip(2);
    std::cout << "Bit Position 2: " << mybits.test(2) << '\n';

    mybits.flip(2);
    std::cout << "Bit Position 2: " << mybits.test(2) << '\n';
    

    return 0;
}
*/
// Ba dynamic_bitset ham mesal zadam vali to inja nashod toye project (tester1c) toye MSVC

// Nokte ke hast:
// Ino negah kon payin:
// MSB  0101100010  LSB
// Khob in MSB va LSB chiye?
// LSB: Least Significant Bit
// MSB: Most Significant Bit
// LSB: Kam arzesh tarin bit hast va samt rast gharar darad
// MSB: Por arzesh tarin bit hast ke samt chap gharar darad

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Bitwise Operators Part1:

// Dar zaban C++ 6 ta Bitwise Operator darim:
// Left Shift  <<   x << y
// Right Shift >>   x >> y
// Bitwise NOT ~    ~x
// Bitwise AND &    x & y
// Bitwise OR  |    x | y
// Bitwise XOR ^    x ^ y

// In AND va OR ba Logical OR va AND fargh dare on 2 ta dashtam ina 1 ki hastan Operatoreshon

// Chand ta nokte: Ma baraye rahati ke mikhaym mesal bezanim az 4Bit estefade mikonim
// Mamolan dar project haye bozorg az bit haye ziadi estefade mikonand
// Mored ba'adi ineke in Bitwise Operator ha baraye maghadir Integral ya Bitset
// Faghat e'mal mishan
// Integral on hayi hastand ke toye posht sahne ye chiz dige zakhire mishan 
// Mesl boolean ke True dar hafeze 1 zakhire mishe False ham 0
// Ya char mesal 'a' 97 zakhire mishe
// Ya khod adad ha int 10; dar hafeze 1010 zakhire mishe
// Va agar khastim az Integral estefade konim hatman az noe unsigned bashe 
// Agar unsigned nabashe ba Overflow movajeh mishim 

// Berim soragh Operator Left shift:
// Left Shift miad bit haro be samt chap hol mide ya hamon Shift mide
// Left Operand << Right Operand
// Left Operand on 01 hamon hast hamon meghdar bit ke mikhaym Shift she
// Right Operand ham mikhaym mesal 1 done Shift shan hamashon ya 2 va ..
// Position tayin mikonim dige
// Mesal:
// 0011 << 1  --> 0110
// 0011 << 2 --> 1100
// 0011 << 3 --> 1000
// Dar in yeki az 1 ha oftad birun dige ja nashod baraye hamishe az beyn mire
// Magar inke tedad bit ha ziad she

// Hala Right Shift:
// Right Shift ham miad bit haro be samt rast Shift mide ya hol mide
// inam mesl Left hast 2 ta Operand daryaft mikone
// Mesal:
// 1100 >> 1 --> 0110
// 1100 >> 2 --> 0011
// 1100 >> 3 --> 0001

// Mesal codi estefade dar bitset
/*
#include <iostream>
#include <bitset>

int main() {

    std::bitset<4> mybit = 1100;
    std::cout << (mybit >> 1) << '\n'; // 0110
    std::cout << (mybit >> 2) << '\n'; // 0011
    std::cout << (mybit >> 3) << '\n'; // 0001
    // Ye nokte hast chera avval Shift dadim 0110 shod khob baadi mage nabayd 0001 mishod
    // Javab injas ke ma faghat chap kardim inaro mostaghim roye ( mybit ) taghir nadadim
    // In cout miad ye meghdar jadid tolid mikone chap mikone tamum
    // Hala jalase haye baadi migam chejuri khod mybit ro taghir bedim

    return 0;
}
*/

// Berim soragh Bitwise NOT
// Kheyli rahate miad bit hayi ke 0 hast ro 1 mide va onayi ke 1 hast ro 0 mikone
// Mesal:
// ~0110 --> 1001
// Fagaht deghat dashte bash age tedad bit ziad bashe mesal uint8 ya 16 va ..
// Age havaset nabashe hamaro 1 mikone va ye adad bozorg tolid mishe mesl:
// ~0000'1010 --> 1111'0101

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Bitwise Operators Part2:

// Khob berim be soragh baghiye Bitwise Operators
// Bitwise OR va AND kheyli moshabeh Logical hast hastand vali dar sath payin
// Berim mesal bezanim avvali baraye Bitwise OR --> |

// Meghdar avval:  0101
// Meghdar dovvom: 1101
        // Output: 1101

// Agar yeki az bit ha 1 bashe Output ham 1 mishe mesl Logical hast rahate

// Ye mesal tarkibi:
// Meghdar avval:  0101
// Meghdar dovvom: 0100
// Meghdar sevvom: 0111
        // Output: 0111

// Berim soragh Bitwise AND --> &
// Inam mesl Logical hats
// Bayad har 2 tash 1 bashe ya age tedad bit ha ziad bod hamash bayad 1 bashe ta
// Output beshe 1

// Mesal:

// Meghdar avval:  1101
// Meghdar dovvom: 1011
        // Output: 1001

// Mesal tarkibi am bezanim:

// Meghdar avval:  0101
// Meghdar dovvom: 0100
// Meghdar sevvom: 0111
        // Output: 0100

// Berim soragh akharin Bitwise Operator XOR ^ : Exclusive OR 
// Injuri ke bayad tedad 1 ha fard bashe ta kar kone 
// Mesl: 1, 3, 5, 7, 9

// Mesal bezanim:
// Meghdar avval:  1010
// Meghdar dovvom: 0011
        // Output: 1001

// Mesal tarkibi: 
// Meghdar avval:  0101
// Meghdar dovvom: 0100
// Meghdar sevvom: 0111
        // Output: 0110

// Ina Assignment ham daran
// Bitwise Assignment Operator:
// AND -->      x &= y
// OR -->       x |= y
// XOR -->      x ^= y
// Left Shift:  x <<= 1
// Right Shift: x >>= 1

// Faghat Bitwise NOT nadare bayad injuri benevisi

// NOT --> x = ~x;

// Berim baraye har kodum ye mesal codi bezanim ba bitset
/*
#include <iostream>
#include <bitset>

int main() {

    std::bitset<8> mybit = 0b0000'1010;
    std::bitset<8> mybit2 = 0b0001'1100;
    std::cout << "AND: " << (mybit & mybit2) << '\n';
    std::cout << "OR: " << (mybit | mybit2) << '\n';
    std::cout << "XOR: " << (mybit ^ mybit2) << '\n';
    std::cout << "NOT: " << ~(mybit) << '\n';
    std::cout << mybit << '\n' << mybit2 << '\n';
    mybit >>= 1;
    mybit2 <<= 2;
    std::cout << mybit << '\n' << mybit2 << '\n';

    return 0;
}
*/
/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Bit Mask

// Jalase ghabl ba Bitwise Operator haro yad gerftim vali ye chizi ke hast
// In Bitwise Operator ha vaghti mikhaym ye amaliyati anjam bedim
// Hameye bit haro mored hadaf gharar mide
// Hala mikhaym be jaye hameye bit ha on bit hayi ke faghat khodemun mikhaym mored hadaf gharar bedim
// Bayad ba mafhum Bit Mask ashna shim
// Bit Mask chikar mikone? Bit Mask miad va bit hayi ke nemikhaym توسط Bitwise Operator 
// Taht ta'sir gharar begirand ro Block mikone
// Pas ebteda bayad yad begirim Bit Mask dorust konim 
// Miaym baraye har kodum az bit ha bit mask dorust mikonim 
// Ya'ni yek bit mask baraye bit ba position 0 yedune baraye position 1 va ....
// Ba'adesh baraye har biti ke khastim dast nakhore 0 gharar midim
// Baraye bit ke mikhaym dast kari she 1 gharar midim

// In sakht Bit Mask 3 ravesh dare:
// Binary Literal C++14 ya be bala
// Shift C++98 yani dar hameye standard ha poshtibani mishe
// Mask C++98 yani dar hameye standard ha poshtibani mishe

// Sakhtan Bit Mask ba ravesh Binary Literal:
/*
#include <iostream>
#include <cstdint>

int main() {

    constexpr std::uint8_t mask0 = 0b0000'0001;
    constexpr std::uint8_t mask1 = 0b0000'0010;
    constexpr std::uint8_t mask2 = 0b0000'0100;
    constexpr std::uint8_t mask3 = 0b0000'1000;
    constexpr std::uint8_t mask4 = 0b0001'0000;
    constexpr std::uint8_t mask5 = 0b0010'0000;
    constexpr std::uint8_t mask6 = 0b0100'0000;
    constexpr std::uint8_t mask7 = 0b1000'0000;
    // Baraye har Bit Position mask sakhtim 
    // Hala chera constexpr sakhtim?
    // Yani dar zaman Compile ejra she Compile Time
    // Chon ham behine mishe miad meghdar jaygozin mikone
    // Jayi ke estefade kardim ya seda zadim
    // Injuri behine mishe va inke sor'at balatari dare injuri
    // Va sabet ham dar nazar gerfte mishe 
    
    // Hala chera 8biti? felan baraye yad giri neveshtim dar project haye vagheyi
    // Har chegadr lazem bod mituni mask besazi 16, 32, 64

    // Va chera unsigned hast? chon dar inja ba adad manfi kar nadarim
    // Va agar signed bashe ehtemal Overflow aslan kheyli moshkelat dige

    return 0;
}
*/

// Berim soragh ravesh Hexadecimal: 
/*
#include <iostream>
#include <cstdint>

int main() {

    constexpr std::uint8_t mask0 = 0x01;
    constexpr std::uint8_t mask1 = 0x02;
    constexpr std::uint8_t mask2 = 0x04;
    constexpr std::uint8_t mask3 = 0x08;
    constexpr std::uint8_t mask4 = 0x10;
    constexpr std::uint8_t mask5 = 0x20;
    constexpr std::uint8_t mask6 = 0x40;
    constexpr std::uint8_t mask7 = 0x80;
    // Chera 0x01 chera 0x08 va ... ?
    // Khob baraye peyda kardan ina 2 ravesh dare
    // Yeki in ke Decimal inaro peyda va (decimal x 2) koni
    // Mesal 0x10 Decimal = 16 khob 16 * 2 = 32 Decimal
    // Hala 32 Decimal be Hexa chi mishe? 0x20

    // Ravesh ba'adi ke kheyli khubeh
    // Agha har bit ro 4 ta hesab koni yani chi?
    // Yani 0x01 
    // in 0 ro 4 ta 0 hesab koni samt MSB chon samt rast 0000
    // In 1 ro ham Binary chi mishe baz 4 ta hesab kon mishe 0001
    // Kenar ham 0000'0001
    // Ya yeki dige mesal 0x40
    // 4 mishe 0100
    // 0 ham kolan mishe 0000
    // Kenar ham mishe 0100'0000
    // On adad hayi ke hast bayad Binary sho benevisi hamin :)

    return 0;
}
*/

// Berim soragh ravesh Shift ke vaghean rahate:
/*
#include <iostream>
#include <cstdint>

int main() {

    constexpr std::uint8_t mask0 = 1 << 0;
    constexpr std::uint8_t mask1 = 1 << 1;
    constexpr std::uint8_t mask2 = 1 << 2;
    constexpr std::uint8_t mask3 = 1 << 3;
    constexpr std::uint8_t mask4 = 1 << 4;
    constexpr std::uint8_t mask5 = 1 << 5;
    constexpr std::uint8_t mask6 = 1 << 6;
    constexpr std::uint8_t mask7 = 1 << 7;

    // Agha in mige 1 ro shift bede samt chap ba position felan
    // 1 << position
    // Kheyli rahate mesal migim 1 ro 5 ta shift bede samt chap

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Anjam amaliyat ba Bit Mask

// Hala ke yad gerftim ba 3 ravesh Bit Mask besazim 
// Hala mikhaym yad begirim az in Bit Mask ha estefade konim
// Ma 4 ta Function yad gerftim
// test()
// set()
// reset()
// flip()
// Mikhaym in 4 ta function ro ba in Bit Mask va Bitwise Operator anjam bedim
// Bebinim chejurie
// Aslish ine ke chejuri khodet set() koni ya test() ina 
// Function ke rahate hame baladan


// test(): Bitwise AND
// set(): Bitwise OR
// reset(): Tarkib Bitwise AND va Bitwise NOT
// flip(): Bitwise XOR

// Hala berim soragh sakht Bit Mask ba raveshi ke dost dari balad hasti:
/*
#include <iostream>
#include <cstdint>

int main() {

    constexpr std::uint8_t mask0 = 0x01;
    constexpr std::uint8_t mask1 = 0x02;
    constexpr std::uint8_t mask2 = 0x04;
    constexpr std::uint8_t mask3 = 0x08;
    constexpr std::uint8_t mask4 = 0x10;
    constexpr std::uint8_t mask5 = 0x20;
    constexpr std::uint8_t mask6 = 0x40;
    constexpr std::uint8_t mask7 = 0x80;

    std::uint8_t flags = 0x0A; // 0000'1010
    // Berim soragh test() va trace ham mikonim chejurie
    // Faghat inke toye uint8 neshon dada 0 ya 1 sar rast nist
    // Ya tabdil mikonim be Boolean ba static_cast
    // Ya Ternary Operator minevisim 
    std::cout << "Check bit position 1: " << static_cast<bool>(flags & mask1) << '\n';
    std::cout << "Check bit position 2: " << ((flags & mask2) ? "ON\n" : "OFF\n");
    // Trace:
    // Flags: 0000'1010 &
    // Mask1: 0000'0010
    // Output:0000'0010 --> ON 

    // Flags: 0000'1010  &
    // Mask2: 0000'0100  
    //Output: 0000'0000 -->  Baraye hamin mishe OFF
    // Ghavanin AND goftim dige

    // set()
    // in dige roye khod flags e'mal mikone ha meghdar jadid tolid nemikone
    flags |= mask2;
    // Mitunim chand ta am benevisim tarkibi
    flags |= (mask6 | mask7);
    std::cout << "Check bit position 2: " << ((flags & mask2) ? "ON\n" : "OFF\n");
    std::cout << "Check bit position 6: " << ((flags & mask6) ? "ON\n" : "OFF\n");
    std::cout << "Check bit position 7: " << ((flags & mask7) ? "ON\n" : "OFF\n");

    // Trace:
    // Flags: 0000'1010 OR
    // mask2: 0000'0100
    //Output: 0000'1110

    // Tarkibi
    // flags |= (mask6 | mask7);
    // Avval toye parantez mohasebe mishe
    // mask6: 0100'0000 OR
    // mask7: 1000'0000
    //Output: 1100'0000
    
    // flags: 0000'1110 chon output ghabli in dar omade dige mimune taghirat goftam bala meghdar jadid tolid nemikone
    // hasel: 1100'0000
    //Output: 1100'1110

    //reset():
    flags &= ~mask2;
    // Tarkibi:
    flags &= ~(mask6 | mask7);
    std::cout << "Check bit position 2: " << ((flags & mask2) ? "ON\n" : "OFF\n");
    std::cout << "Check bit position 6: " << ((flags & mask6) ? "ON\n" : "OFF\n");
    std::cout << "Check bit position 7: " << ((flags & mask7) ? "ON\n" : "OFF\n");

    // Trace:
    // Flags: 1100'1110 AND
   // ~mask2: 1111'1011  //Chon Bitwise NOT hast hameye 1 ha 0 va 0 ha ham 1
   // Output: 1100'1010

   // Tarkibi:
   // Avval toye parantez ~(mask6 | mask7)
   // Deghat kon avval dakhel parantez OR mikonim baad ~ mikonim javab ro
    // mask6: 0100'0000  OR
    // mask7: 1000'0000
   // Output: 1100'0000
   // Hala ~Output:
  // ~Output: 0011'1111

  // Hala ba flags:
  // Flags: 1100'1010 AND
  // Hasel: 0011'1111
 // Output: 0000'1010


    // Berim soragh ravesh ba'adi yani
    // flip()
    // Ke ba XOR hast
    flags ^= mask0;
    // Tarkibi:
    flags ^= (mask1 | mask4);

    std::cout << "Check bit position 0: " << ((flags & mask0) ? "ON\n" : "OFF\n");
    std::cout << "Check bit position 1: " << ((flags & mask1) ? "ON\n" : "OFF\n");
    std::cout << "Check bit position 3: " << ((flags & mask4) ? "ON\n" : "OFF\n");

    // Trace: Ma midunim in XOR agar tedad 1 ha fard bashe output 1 mide be ma
    // flags: 0000'1010
    // mask0: 0000'0001
   // Output: 0000'1011

   // Hala tarkibi flags ^= (mask1 | mask4)
   // Avval toye parantez:
   // Mask1: 0000'0010  OR
   // Mask4: 0001'0000
  // Output: 0001'0010

  // flags: 0000'1011  XOR
  // Hasel: 0001'0010
 // Output: 0001'1001

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Nam gozari Bit ha

// Khob dar jalase ghabl omadim baraye yad giri esm Bit haro:
// Mask0, Mask1, Mask2, Mask3 va flags ....
// Mizashtim vali bayad bar asas hadafemun namgozari konim mesal:
// Baraye Sensor mikhaym barname benevisim ba Bit Manipulation:
// Mesal Sensor:
/*
#include <iostream>
#include <cstdint>
namespace SENSOR {
    constexpr std::uint8_t SENSOR_Active = 0x01;
    constexpr std::uint8_t SENSOR_Error = 0x02;
    constexpr std::uint8_t SENSOR_OVRTEMP = 0x04;
}
// Injuri moshakhase bit 0 baraye Fa'al bodan Sensor
// Ya Bit 1 Baraye Error hast ya 2 Baraye Damaye Bala
std::uint8_t SENSOR_Status = 0b0000'1010;

// Baraye test() gereftan mitunim az tabdil be Boolean ham estefade konim
// Mesal:
int main() {

    std::cout << static_cast<bool>(SENSOR::SENSOR_Error & SENSOR_Status)
                            << '\n';
    std::cout << static_cast<bool>(SENSOR::SENSOR_Active & SENSOR_Status)
                            << '\n';

    return 0; 
}
*/

// Khob ma kar ba Bit ha ro yad gerftim vali ta be alan
// Behinegi nadidim

// Ye mesal bezanim ke Behinegi kamel bebinim
// Biaym 8 ta Vaziyat baraye mesal 2 nafar Dar nazar begirim
// Mesal:
/*
#include <iostream>
#include <cstdint>
namespace Status {
    // In 8 ta Vaziyat mishe baraye har chand nafar estefade kard
    constexpr std::uint8_t Happy = 0x01;
    constexpr std::uint8_t Hungry = 0x02;
    constexpr std::uint8_t Sleeping = 0x04;
    constexpr std::uint8_t Crying = 0x08;
    constexpr std::uint8_t full = 0x10;
    constexpr std::uint8_t tired = 0x20;
    constexpr std::uint8_t angry = 0x40;
    constexpr std::uint8_t excited = 0x80;
}
int main() {

    std::uint8_t ali = 0b0000'0000;
    ali |= Status::full;
    std::uint8_t mamad = 0b0000'0000;
    mamad ^= Status::Happy;
    if (mamad & Status::Happy)
    {
        std::cout << "Mamad is Happy :)" << '\n';
    }
    else
    {
        std::cout << "Mamad is not Happy :(" << '\n';
    }
    

    // Failed Code:
    // Khob berim hamin mesal ro ba Boolean bezanim chon onam 8Bit 
    // Hamon 1Byte hast:
    bool Happy = false;
    bool Hungry = true;
    bool Sleeping = false;
    bool Crying = true;
    bool full = true;
    bool tired = false;
    bool angry = true;
    bool excited = false;
    // Khob to code moshkel hast shayad begi na mishe mesal:
    bool reza;
    if (reza == full); // In nemishe
    // Chon alan faghat 0 darim ya 1 
    // Toye Bit Manipulation 0 ta 7 darim
    // Bala goftim reza == full 
    // full true yani 1 ma true ziad darim kodum true xD? 
    // Pas in code moshkel dare berim ravesh ba'adi

    // Ravesh 2: 
    // Rahesh faghat bayad baraye har kodom NameGozari konim
    // Mesal:
    bool Reza_Happy = false;
    bool Reza_Hungry = true;
    bool Reza_Sleeping = false;
    bool Reza_Crying = true;
    bool Reza_full = true;
    bool Reza_tired = false;
    bool Reza_angry = true;
    bool Reza_excited = false;

    bool Ali_Happy = false;
    bool Ali_Hungry = true;
    bool Ali_Sleeping = false;
    bool Ali_Crying = true;
    bool Ali_full = true;
    bool Ali_tired = false;
    bool Ali_angry = true;
    bool Ali_excited = false;

    // 16 ta 8 bit toye Boolean darim:
    // 16 * 8 = 128Bit mishe 16Byte Yani code eftezah :|

    // Hala Toye Bit Manipulation:
    // 8 Ta vaziyat ke dar namespace Status gozashtam
    // Ona CompileTime hastan constexpr neveshtam va sabet hast
    // Chon CompileTime hast meghdaresh toye code jaygozin mishe
    // Yani harvaght mesal full ro seda bezanim faghat meghdaresh jaygozin mishe 
    // Hazine bar dar nist aslan
    // Va ona hich Hafeze baraye khodeshon eshghal nemikonand
    // Faghat ali va mamad faza eshghal mikonanad
    // ali: 8bit
    // mamad: 8bit
    // Ke mishe 16Bit 

    // Hala 16Bit koja 128 Bit koja :D

    return 0;
}
*/
//---------------------------------------------------------------------//
/*
#include <iostream>
#include <cstdint>
    // Berim ye mesal dige dar mored behinegi bezanim

    // Farz kon ye function darim mesal 16 ta Parameter dare
    // Boolean
bool foo(bool opt1, bool opt2, bool opt3, bool opt4, bool opt5,
    bool opt6, bool opt7, bool opt8, bool opt9, bool opt10,
    bool opt11, bool opt12, bool opt13, bool opt14, bool opt15,
    bool opt16) {
        return opt1;
}
    // 16 * 8 = 128Bit = 16Byte :| aslan behine nist
    // Va toye Argument dadan bayad bebinim kodum true kodum false
    // Shayad eshtebahati rokh bede 

    // Vali ba Bit Manipulation mitunim in karo behine va raht konim
namespace Options {
    constexpr std::uint16_t opt1 = 0x01;
    constexpr std::uint16_t opt2 = 0x02;
    constexpr std::uint16_t opt3 = 0x04;
    constexpr std::uint16_t opt4 = 0x08;
    constexpr std::uint16_t opt5 = 0x10;
    constexpr std::uint16_t opt6 = 0x20;
    constexpr std::uint16_t opt7 = 0x40;
    constexpr std::uint16_t opt8 = 0x80;
    constexpr std::uint16_t opt9 = 0x100;
    constexpr std::uint16_t opt10 = 0x200;
    constexpr std::uint16_t opt11 = 0x400;
    constexpr std::uint16_t opt12 = 0x800;
    constexpr std::uint16_t opt13 = 0x1000;
    constexpr std::uint16_t opt14 = 0x2000;
    constexpr std::uint16_t opt15 = 0x4000;
    constexpr std::uint16_t opt16 = 0x8000;

}    
void fooo(std::uint16_t opts) {
    std::cout << "Opt5: " << static_cast<bool>(opts & Options::opt5) << '\n';
    std::cout << "Opt6: " << static_cast<bool>(opts & Options::opt6) << '\n';
    std::cout << "Opt9: " << static_cast<bool>(opts & Options::opt9) << '\n';
    std::cout << "Opt10: " << static_cast<bool>(opts & Options::opt10) << '\n';
    std::cout << "Opt10: " << static_cast<bool>(opts & Options::opt14) << '\n';
    return;
}

int main() {

    // Boolean:
    foo(true, false , true, true, true, false, true, false, false, false,
        true, false, true, false, false, true);


    // Mesal mikhaym opt haye 5 , 6 , 9 , 10 true bashan baghiye false
    std::uint16_t opts = (Options::opt5 | Options::opt6 | Options::opt9 |
        Options::opt10);
    fooo(opts);
    // Ina mostaghim toye Argument ham mishe nevesht mesal:
    // fooo(Options::opt5 | Options::opt6 | Options::opt9 |
    //     Options::opt1);


    // Onayi ke toye namespace Options hastan goftam dige faghat meghdar
    // Jaygozin mishe va faza eshghal nemikone
    // Faghat onjayi ke parameter va Arguman dadim eshghal shode
    // Yeki parameter 16Bit: void fooo(std::uint16_t opts)
    // Va yeki am Arguman 16Bit: 
    // va std::uint16_t opts = (Options::opt5 | Options::opt6 | Options::opt9 |
    // Options::opt10);
    // Ke jamesh mishe 32Bit: 4Byte
    
    // Hala Boolean shode 128Bit = 16Byte 
    // Vali Bit Manipulation shode 32Bit = 4Byte
    
    // Ez Behinegi :D
    return 0;
}
*/
/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Estefade az BitMask baraye chand Bit

// Khob ta alan bitmask hayi ke ma ta'rif mikardim
// Faghat 1 bit ro target migereft mesal:
// Mask0 faghat bit shomare 0 ro target migereft ya Mask1 faghat bit shomare 1 target migerefet

// Vali ma mitunim ba yek Mask chand bit ro Target konim
// Va karbord khobi dare in bahs jolo tar migam
// Khob ma baraye sakht Mask 3 ta ravesh darim: 1-Binary Literal 2-Shift 3-Hexadecimal
// Ba har 3 ravesh yad midam chejuri chand bit ro target konim 

// Berim soragh ravesh avval yani: Binary Literal
// Mikhaym az bit 0 ta 3 ro 1 konim toye 1 mask (Kheyli rahate)
/*
#include <cstdint>
constexpr std::uint8_t maskBinaryLiteral = 0b0000'0111;
// Kheyli rahate har kodom mikhay bayad 1 koni 

// Berim soragh ravesh Hexadecimal ke kheyli rahate
// Faghat bayad dar nazar begiri har Hexadecimal 4 ta bir dar nezar migire
// Mesal: 0x1 --> 0001
// 0x2 --> 0010
// 0xA --> 1010
// Bayad har adadi ke vared mishe be binary tabdil koni
// Mesal: 
constexpr std::uint8_t maskHexadecimal = 0xAF;
// A = 10; 1010
// F = 15; 1111
// Mishe: 1010'1111
// Az samt LSB minevisim

// Mesal dige:
constexpr std::uint8_t maskHexadecimal2 = 0x0C;
// 0 = 0; 0000
// C = 12; 1100
// Mishe az samt LSB: 0000'1100

// Mesal digee: 
constexpr std::uint8_t maskHexadecimal3 = 0x33;
// 3 = 3; 0011
// 3 = 3; 0011
// Mishe: 0011'0011
// Test ham konim bebeinim vaghean injuri hast ya na:
#include <iostream>
int main() {
    std::cout << ((maskHexadecimal3 == 0b0011'0011) ? "Doruste" : "Eshtebahe") << '\n';
    // Ye taghir bedim bebin:
    std::cout << ((maskHexadecimal3 == 0b0001'0010) ? "Doruste" : "Eshtebahe") << '\n';
    return 0;
}
*/
// Berim soragh ravesh Shift inam rahate:
// In yek formul dare ke ba formulesh mirim jolo: 
// Formul: ((1 << Length) -1) << Position
// Khob in formul chejurie?
// Mesal ma mikhaym 4 ta bit ro 1 konim az samt MSB
// Miaym migim (1 << 4) Length mizari 4 in miad 1 ro 4 ta Hol mide samt MSB 
// Mishe: 0001'0000
// Hala in -1 chikar mikone mesal: ((1 << 4) -1)
// Miad in 1 ro 0 Mikone poshtesh harchi 0 hast ro 1 mikone
// Injuri mishe: 0000'1111
// Hala Position migim 4 ta hol bede hamashon jolo mesal:
// ((1 << 4) -1) << 4
// Mishe: 1111'0000
/*
#include <cstdint>
#include <iostream>
// Anonymous Namespace
namespace {
    constexpr std::uint8_t maskShift = ((1 << 4) -1) << 4;
}
int main() {
    
    std::cout << ((maskShift == 0b1111'0000) ? "Doruste" : "Eshtebahe") << '\n';

    return 0;
}
*/

// Hala ba inayi ke yad gereftim biaym yek senario vagheyi bebinim
// Namayeshgar haye emruzi mesl: Phone, TV, Monitor va ....
// Az yek seri Pixel tashkil shode ast
// Bastegi be ab'ad dare ziyad bozorg bashe ehtemalan Milion ha Pixel dare , Begzarim

// Har Pixel az 3 ta Light Color tashkil shode
// Light Red, Green, Blue
// Hamon RGB ma'rof khodemun 
// Mitunim ba tarkib in 3 Color color haye mokhtalefi besazim
// In Color ha ro miyan 8bit dar nazar migiran 
// R --> 8Bit, G --> 8Bit, B --> 8Bit
// Bedon alamat hastand mishe 0 ta 255 nomayesh dad
// Mesal:
// Agar Red har che be 255 nazdik bashe yani be Color Red nazdik hast mishe did
// Age 0 bashe in Color Red estefade nashode
// Red: R:255/G:0/B:0
// Green: R:0/G:255/B:0
// Blue: R:0/G:0/B:255

// Mesal baraye Color خاکستری
// R:127/G:127/B:127

// Hala be joz in 3 ta RGB
// Yedone am ( A ) hast yani Alpha
// Ke in Shafafiyat Color neshon mide
// Age be 0 nazdik bashe yani on Color shafafe mesl shishe chizi dide nemishe
// Age be 255 nazdik bashe yani ghabel did hast
// Mesal: 127 nime Shafaf
// Alpha ham 8Bit dar nazar migirand

// Khob alan in 4ta ro kamel fahmidim: RGBA
// Ke harkodum 8Bit hast
// Vali dar in senario nemikham berizam toye 8bit mitunim berizim 32Bit miduni chera?
// Chon 4 ta hast 4 * 8 = 32Bit
// Mitunim in 32Bit baraye har kodum taghsim bandi konim mesal:
// Red[31 , 24] Green[23 , 16] Blue[15 , 8] Alpha[7 , 0]

// Berim code nevisi daghigh negah kon baraye har kodum Mask misazim:
/*
#include <cstdint>
#include <iostream>

namespace RGBA {
    constexpr std::uint32_t redMask = 0xFF000000;
    constexpr std::uint32_t greenMask = 0x00FF0000;
    constexpr std::uint32_t blueMask = 0x0000FF00;
    constexpr std::uint32_t alphaMask = 0x000000FF;
    // Goftam in F ha chiye Hexa chejurie
    // F = 15 --> 1111
    // Mesal: redMask alan ine: 1111'1111'0000'0000'0000'0000'0000'0000
                                // Red    // Green  // Blue   // Alpha
}
int main() {

    std::cout << "Enter hexa 32bit Color: ";
    std::uint32_t pixel;
    std::cin >> std::hex;
    std::cin >> pixel;
    // Alan barey har kodum az in Color ha 8Bit variable misazim
    // Va tabdil Explicit anjam midim be uint8_t 0-255
    // Va har kodum bayad hol bedim be samt rast chon mesal
    // [FF][00][00][8it] bayad hol bedim biad ta beshine 8bit 
    // Age hol nadim 8Bit red ma mishe --> 0000'0000
    // Va hatman vaghti Shift midi be samt rast ya chap Parantez bezar 
    // Be khater Olaviyat Operator
    // Ba Pixel & mikonim bebini karbar chi vared kard
    // Mesal: Karbar zade : FF0000FF:
    // Be binary mishe: 1111'1111'0000'0000'0000'0000'1111'1111
    // Miad ba red AND mishe: 
    // RedMask: 1111'1111'0000'0000'0000'0000'0000'0000
    // Pixel:   1111'1111'0000'0000'0000'0000'1111'1111
    // Out:     1111'1111'0000'0000'0000'0000'0000'0000
    std::uint8_t red = static_cast<std::uint8_t>((pixel & RGBA::redMask) >> 24);
    std::uint8_t green = static_cast<std::uint8_t>((pixel & RGBA::greenMask) >> 16);
    std::uint8_t blue = static_cast<std::uint8_t>((pixel & RGBA::blueMask) >> 8);
    // Alpha niyaz nist Shift bedi chon khodesh samt LSB gharar darad Maskesh
    std::uint8_t alpha = static_cast<std::uint8_t>(pixel & RGBA::alphaMask);

    // Hala miaym inaro chap konim 
    // Tabdil mikonim be int dar chap kon goftim uint8 ehtemal dare raftar ajibi
    // Mesl char ro bede
    std::cout << "Decimal: " << '\n';
    std::cout << "Red: " << static_cast<int>(red) << '\n';
    std::cout << "Green: " << static_cast<int>(green) << '\n';
    std::cout << "Blue: " << static_cast<int>(blue) << '\n';
    std::cout << "Alpha: " << static_cast<int>(alpha) << '\n';

    std::cout << "\nHexadecimal: \n";
    std::cout << std::hex;
    std::cout << "Red: " << static_cast<int>(red) << '\n';
    std::cout << "Green: " << static_cast<int>(green) << '\n';
    std::cout << "Blue: " << static_cast<int>(blue) << '\n';
    std::cout << "Alpha: " << static_cast<int>(alpha) << '\n';

    // Alan vaghti karbar vared mikone Coloresho be Hexa neshon mide:
    // Red dare ya na mesal Green dare che meghdar

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: System haye adadi

// Khob dar Season haye ghabl ba in Mabhas Numeral System ashna hastim
// Vali mikhaym dar in bahs chizaye jadidi yad begirim ghablia nist
// Jadid hastand
// Chejuri mishe yek adad Decimal ro be Binary tabdil kard
// Va Taklif manfi ya mosbat bodan A'shar dar form Binary chi mishe?
// Gharar inaro be morur zaman yad begirim

// Ma az bachegi onghadr ba mabnaye ده دهی kar kardim dige to zehnemun hast
// Mesal adad: 7543 dar nazar begir
// Ma midunim arzesh adad 3 ba arzesh adad 7 to in adad 7543 baham kamelan motafavet hast
// Ya'ni 3 avval be ma'ni 3 vahed hast
// 4 Ba'adi be ma'ni 40 Vahed
// 5 be ma'ni 500 Vahed va 7 be ma'ni 7000 vahed ast

// Ina ye formul darand ke ma بعید میدونیم azash estefade konim
// Chon in mabnaye Dah dahi toye zemhneum ye jurayi Hack shode
// 7 x 1000 + 5 x 100 + 4 x 10 + 3 x 1 = 7543
// Dalil inke behesh migan dah dahi ya Decimal
// Hamin ast chon Arzesh argham ba tavani az 10 be bala mire

// Ye mesal dige: 2894
// 2 x 10^3 + 8 x 10^2 + 9 x 10^1 + 4 x 10^0 = 2894
// Mesl balayi hast farghi nadare ina

// Hala adad Binary chiz ajibi nist dar on ham Arzesh argham
// Ba tavani az2 be bala mire va argham in Mabna ham beyn 0 , 1 hast

// Mabnaye 8 Hamon Octal ham hamintor 
// Arzesh argham ba tavani az 8 be bala mire va argham mabnaye 8 ham 0 ta 7 hast

// Mabnaye 16 Hamon Hexadecimal mesl ina
// Arzesh agham ba tavani az 16 be bala mire va argham mabnaye 16 ham 0 ta 15 hast

// Khob berim tabdil Binary be Decimal ba ravesh asli va osuli:
// Mesal in adad: 0101110
                //6543210
// Har kodum ke ziresh neveshtam be tavan on zarb 2 mishe mesal:
// (0 x 2^6) + (1 x 2^5) + (0 x 2^4) + (1 x 2^3) + (1 x 2^2) + (1 x 2^1) + (0 x 2^0)
//    0      +   32      +    0      +    8      +    4      +    2      +    0  = 
// Mishe = 46 Decimal

// Behtare az adad 0 ta 15 be Binary sho hezf bashi payin neveshtam hezf kon:
// 0000 = 0    :    0110 = 6    :    1100 = 12
// 0001 = 1    :    0111 = 7    :    1101 = 13
// 0010 = 2    :    1000 = 8    :    1110 = 14
// 0011 = 3    :    1001 = 9    :    1111 = 15
// 0100 = 4    :    1010 = 10
// 0101 = 5    :    1011 = 11

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Tabdil Decimal be Binary

// Khob dar in jalase yad migirim chejuri yek Decimal be Binary tabdil konim

// 2 Ta ravesh asli dare ke har 2 ta ro yad midam
// Ravesh avval: Taghsim bar 2 taghsim sahih anjam mide va baghimande ro ba ( r )
// Neshon midiam
// Mesal: 148
// 148 / 2 = 74 r0
// 74 / 2  = 37 r0
// 37 / 2  = 18 r1
// 18 / 2  = 9  r0
// 9 /  2  = 4  r1
// 4 /  2  = 2  r0
// 2 /  2  = 1  r0
// 1 /  2  = 0  r1
// Ino az payin be bala minevisim az samt chap baghimande hasho
// be tartib minevisim
// 10010100 --> 148



// Berim soragh ravesh Dovvom:
// Bozorg tarin tavan nam darad

// Tavan 2 haro minevisim va on adad mored nazar ke mikhaym tabdil konim
// Beyn on adad haye tavan 2 hamon 1 , 2 , 4 , 8 , 16 vaaa
// Ye juri peyda mikonim ke bozorg tarin bashe beyn adad haye khodesh 
// Va kocheck tar az bozorg tarin adad
// Hamon 148 berim:
// 1, 2, 4, 8, 16, 32, 64, 128, 256, 512
// Khob in adad 148 bozorg tar az 128 hast va kochecktar az 256
// Pas adad ma 128 shod va chera 256 na? chon 256 bozorg hast dige ono vel mikonim
// Injuri minevisim va be aghab bar migardim deghat negah kon:
// Age bozorg tar mosavi bod 1 midim va az ham dige kam mikonim
// Age nabod 0 mizarim mirim ba'adi dige kam nemikonim be in sorat:
// 148 >= 128 --> 1   148 - 128 = 20
// 20 >= 64   --> 0
// 20 >= 32   --> 0
// 20 >= 16   --> 1   20 - 16 = 4
// 4  >= 8    --> 0
// 4  >= 4    --> 1   4 - 4 = 0
// 0  >= 2    --> 0
// 0  >= 1    --> 0

// Inam az bala be payin az samt chap be tartib minevisim:
// 10010100 --> 148

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Jam adad Binary

// Khob dar in jalase mikhaym jam' adad Binary ro yad begirim
// In mabhas kheyli por karbord hast ke dar jalase haye ba'adi mibinim karbordesho
// Mesal:
// Mikhaym Binary haye 6 ba 7 ro jam konim avval Binary sho minevisim:
// 6 = 0110
// 7 = 0111

// Bayad Digit be digit zir ham benevisim mesl Column
// Dar jam adad Binary kolan 5 Halat darad ke minevisam ziresh
// 0 + 0 = 0
// 1 + 0 = 1
// 0 + 1 = 1
// 1 + 1 = 0 yedone 1 midim be sotun baghalish yani samt chap
// 1 + 1 + 1 = 1 dar inam yedone 1 midim be sotun baghalish yani samt chap
// Yani 1 ragham midim be Column samt chap

// Mesal: 6 + 7
//Inayi ke in zire ragham hayi ke dadi:
//     11    
// 6 = 0110
// 7 = 0111
//Out: 1101 --> 13 Decimal

// Hala mikhaym 10 + 1 berim jolo
// In 1 ragham ezafe kardan dar jalase haye ba'adi kheyli be dard mikhore

// 10 = 1010
// 1  = 0001
//Out:  1011 --> 11 Decimal

// Yeki dige 10 + 2
// 10 = 1010
// 2  = 0010
//Out:  1100 --> 12 Decimal

// Yeki dige sakht: 17 + 1
// 17 = 10001
// 1  = 00001
//Out:  10010


// Yeki dige adad bozorg: 179 + 1
// 179 = 10110011
//  1  = 00000001
// Out:  10110100 --> 180

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Adad Manfi

// Dar in jalase mikhaym adad Manfi ro dar Form Binary zakhire sazi konim

// Adad manfi ba estefade az ravesh (Two's Complement)
// فارسی شم میشه مکمل دو
// Ba in ravesh adad manfi zakhire sazi mishand

// Dar in ravesh ma miaym samt chap tarin Bit ro ya'ni samt MSB be onvan Bit alamat dar 
// Nazar migirim 
// Hala age Bit signed bod samt chap tarin bit ham 0 bod ya'ni 
// On adad adadi mosbat hast
// Agar Bit samt chap 1 bod ya'ni on adad adadi manfi hast
// Mesal:
// Signed: 0|00001010
// Samt chap yani samt MSB 0 hast pas adad Mosbat hast
// Be in rahati ha ham nist ha jolo tar kamel migam

// Nokte: Vaghti migim bit Signed pas midunim ke nemishe tosh 0 ta 255 zakhire kard
// Bayad hatman -128 ta 127 zakhire she pas ino ma midunim

// Mesal alan ye Binary be ma dadan 
// Ine: 1000101 --> 69
// Alan az koja bedunim in alamat dar hast ya na?
// Be type mored nazar negah mindazim agar Unsigned bod
// Adad kolan mosbate lazem nist
// Agar Signed bod miaym samt MSB negah mindazim chap tarin bit 1 hast pas manfi hast
// In: 1000101 --> -69
// Hala ino injuri biaym bedim be RAM hamon mosbat mide 69 
// Pas chejurie? 3 ta marahel dare kheyli rahate bayad tey she

// Ye adad rahat tar mesal 6 biaym bebarim be manfi:
// Marhale avval:
// Avval Binary shod minevisim: 0000'0110
// Marhale dovvom:
// Miaym ma'kos mikonim ~0000'0110
// Ke mishe --> 1111'1001
// Marhale sevvom:
// Hala ma'kos shode inro 1 vahed behesh ezafe mikonim:
//          1111'1001
//          0000'0001
// Signed:  1111'1010 --> -6

// Mesal codi bezanam bebin chejuri mishe:
#include <iostream>
#include <cstdint>

int main() {

    std::int8_t numSix = 0b0000'0110; // 6
    numSix = ~numSix; // 0b1111'1001
    std::int8_t addOne = (numSix + 0b0000'0001); // 1111'1010
    // Tabdil kardam khob chap she ma midunim 8bit moshkel dare toye chap ina !!!
    std::cout << static_cast<int>(addOne) << '\n'; // -6

    return 0;
}


// Khob ma yad gerftim dar in Season adad unsigned Binary ro be Decimal tabdil konim
// Hala signed ha chejuri hastan manfi haro chejuri be Decimal tabdil konim?
// Avval mibinim Type mored nazar signed hast ba'ad Samt MSB mibinim
// Age 0 bod hamon tori tabdil mikonim mire yad dadam 
// Age 1 bod samt MSB ghazie fargh mikone
// Avval Ma'kos mikonim ba'ad 1 vahed ezafe mikonim ba'ad tabdil mikonim
// Mesal: Signed: 1111'1010
// ~1111'1010 --> 0000'0101
// Hala 1 vahed: 
//     0000'0101
//     0000'0001
//Out: 0000'0110

// Hala javab shod in: 0000'0110 --> 6
// Chon signed hast va 1 dasht pas migim --> -6
// Javab akhar --> -6


// Hala Compiler az koja mifahme in Signed hast ya unsigned ?
// 1000 Bar goftam harvaght didi Type mesal: int
// Age int bod ya'ni signed age uint bod ya'ni unsigned hast
// Compiler negah be Type mikone va motavajeh mishe ke adad ro
// Chetori bayad incode va decode bekone 
// Ya'ni chejuri bayad incode kone bezare toye hafeze RAM 
// Va chejuri bayad decode kone zamani ke az hafeze RAM mikhune va meghdaresh
// Ro baraye ma neshon mide



// End Project Season 5 .........................