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



