// In The Name Of God
// Season 3:


/*--------------------------------------------------------------------------------------------------------------------*/

// Season: DataType

// Dar in fasl gharare amigh be DataType ha bepardazim

// Dar fasl haye ghabl yad gerftim ba estefade az Variable ha mitunim 
// Ye seri etelat dar RAM zakhire konim : RAM = Random Access Memory
// Dar daftar kheyli tozihat hast hatman negah kon


// Ma midunim kochek tarin vahed zakhire sazi ( bit ) hast ke dar khodesh 0 OR 1 mitune zakhire sazi kone
// Bishtar nemitune

// Dar RAM khone hayi vojud darad ke esmeshon ( Memory Address ) hast 
// Har khone shamel ( 8 Bit = 1Byte ) hast 


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: DataType ha

// Ino midunim ke Computer be joz 0 1 hichi nemifahme 
// Khob mesal ma ye codi neveshtim Compiler miyad ono tabdil mikone be 0 1 doruste
// Khob Compiler az koja mifahme on داده adad sahih hast ya reshte ya harchi .........
// Khob malome az DataType ha mifahme 
// Ma miaym minevisim int x = 5; Compiler int mibine pas mifahme adad sahih hast

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: DataType haye avvalie

// Dar zaban C++ 2noe DataType darim : 1-fundamental(primitive) 2-Compound
// DataType fundamental ba chand esm mishe shenakht ya goft:
// 1-Primitive 2-Built-in 3-Basic 4-Scalar 5-fundamental

// Gharare DataType haye fundamental yad begirim datatype haye avvalie va sade hastand
// DataType haye Compound kami pichide has

// DataType string dar zaban C++ toye Compound gharar dare 
// Vali dar aksar zaban ha mesl C# , Python , Java dar fundamental gharar darad

// Shakhe haye fundamental 18 ta hast ma felan kami az on gharare yad begirim
// -integer
// -floating point
// -boolen
// -Character
// -void
// -Null pointer //ino badan yad migirim yek meghdar khas hast

// Bazi DataType ha ham hastan dar C++ version jadid 
// yek pasvand _t ezafe shode mesl: //char16_t //char8_t //wchar_t //char32_t
// _t bayangar type hast

// In season felan fundamental gharar yad begirim

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Void

// void kamel baladi mikham faghat yek nokte begam 
// void no Type hast 
// yani nemishe dige void x; nevesht
// Fagaht function 
// Ye chizi ke hast mitunim parameter ham void gharar bedim
// Yani in function dige parameter nemigire

/* void salam(void){

}*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Size ha

// Ye chizi ke goftim har Variable ke tarif mikonim dar hafeze RAM miad 1Byte zakhire mikone
// Eshtebahe shayad 2Byte bashe ya .... Bastegi be noe Type ham dare 

// Goftim ham bit mitune 0 OR 1 ro zakhire kone faghat yekisho
// Hala 2bit chegadr mitune zakhire ? 4 ta 0 1
// Khob chejurie 4 ta 0 1 be tartib alan minevisam negah kon
// 0 0
// 0 1
// 1 0
// 1 1

// Hala dar 3bit chghadre? 8 ta 0 1
// 0 0 0
// 0 0 1
// 0 1 0
// 0 1 1
// 1 0 0
// 1 0 1
// 1 1 0
// 1 1 1

// Khob in 0 1 nemiam ke benvisam yek yeki bebinam chand ta hast
// Ye formul dare ( n bit | pow(2 , n)  ) 2 be tavan on ghadr bit

// Khob hala mikhaym adad haye binary be mabnaye Decimal bebarim
// Ye ravesh dare ke tarahi mikonam link mizaram
// In Link payin tarahi kamel chejurie
// https://github.com/PyScriptPlus/C--Full-Project/blob/main/Untitled%20Diagram.drawio
// Inam yeki az link payini mostaghim aks hast
// https://github.com/PyScriptPlus/C--Full-Project/issues/1

// So'al: 8 Bit che meghdari mitune zakhire kone? 0 ta 255 chera 256 na chon khod 0 ham hast mishe 256 dige

// Age 1 Variable darim ke faghat 1Byte hafeze estefade mikone dige nemitunam 300 tosh zakhire sazi konim

// Nokte: Hazefe RAM bi nahayat nist !!!!!!!!!

// Age biaym mesal Variable tarif konim meghdar dahi nakonim mesal int x;
// Bazam miad kami az hazefe estefade mikone !!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Size anvae fundamental ha

// Dar in bahs mikham bedunim har DataType az fundamental ha dar hafeze che meghdar az RAM ra eshghal mikonand

// Kheyli daghigh nist va hich vaght nemitunim daghigh daghigh begim vali halaaaa
// Bastegi be memariye va compiler dare chegadr az hafeze RAM eshghal mikonand in Type ha

// Integer ha: 1-sort ( 2byte ) 2-int( Ghadim: 2byte Jadid: 4byte ) 3-long( 4byte ) 4-long long( 8byte )
// floating point: 1-float ( 4byte ) 2-double( 8byte ) 3-long double ( Mamolan 8 ta 16 byte )
// boolean: 1-bool ( 1byte )
// character: 1-char ( 1byte ) 2-wchar_t ( 1byte ) 3-char16_t ( 2byte ) 4-char32_t ( 4byte )


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: sizeof

// Khob in sizeof yek operator mahsob mishe doruste yek alamat nist ya harchi 
// Neveshte hast dar fasl haye ghabl goftim operator ha mitunan neveshte ham bashan 
// Yekish hamin sizeof ke miad , mesal bala ke neveshtim masalan float miad 4byte dar khodesh zakhire mikone
// Ba in operator mitunim sabet konim ke float 4byte dar khodesh mitune zakhire sazi kone
// Shayad dar har pc bastegi be compiler ba CPU dare mesal int shayad 2byte neshun bede dar man 4byte
// Dar CPU haye modern 4byte hast

// Mesal:

/*
#include <iostream>

int main() {

    std::cout << sizeof(float) << "byte"; // 4byte
    return 0;

}
*/

// Nokte: mesal yek CPU darim memarish 32بیتی hast ye DataType darim 32bit hast ke hatman behtarin amalkard khahad dasht
// Chon ba memari CPU hamahang hast
// dige dar 16bit mesl 32bit nemitune amalkard behtari dashte bashe 

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Adad sahih alamat dar ( Signed integers )

// In Variable haye payin hamashon mitunan adad sahih alamat dar zakhire konand
// int; short; long; long long;

// Aslan alamat dar ya hamon Signed chiye?
// Yani ham + va - mitunan dar khodeshon zakhire konand
// Mesal:
// int x = -5;
// short y = 6;

// Agar jayi didi Variable haye integer injuri tarif kardan ta'job nakon:

// short int x;
// int y; khod int dige nemishe
// long int s;
// long long int a;
// Hich farghi nakardan hamon mesl short x; hast faghat tolani shode ast

// Ya mesl in 
// signed short a;
// signed int s;
// signed long i;
// signed long long y;
// Inam yani ina Integer haye alamat dar hastand che benvisi che nanevisi alamat dar hastan mesl: int s;

// Ma yad gerftim = n bit >>> 2^n << pow(2 , n);
// Khob alan pow(2 , 8); out put dar unsigned mishe 0 - 255
// Vali dar signed ke manfi hast chi mishe bayad kami az adad ye samt manfi ye samt mosbat bashe 
// Formul aslish
// -2^-n vaysa ye mesal codi bezanm javabesho bebin
// Mishe -128 ta +127:

/*
#include <iostream>
// #include <math.h> // In baraye pow hast az zaban C baraye C++ bagi monde standard nist
#include <cmath> // Inam baraye pow hast vali in makhsos C++ az fazaye namespace std hast standard hast
// Behtare az cmath estefade shavad harkodum dos dari vali khob 
// Shayad dar math.h khast std:: bezarim ta kar kone momken hast

int main(){

    std::cout << pow(-2 , 8 - 1) << "\n"; // output -128
    std::cout << pow(2 , 8 - 1) - 1; // output + 127
    return 0;
}
*/

// Ye nokte dare chera dar ghesmat mosbat bad pow (- 1) neveshtam zira khod 0 ham hesab mishe!!

// Ino baraye 2Byte hamon 16bit ham test kardam mishe 
// -32768 ta +32767

// In code balayi baraye signed bod ke dar signed mitunim mesal toye 8bit ya hamon 1Byte
// Meghdar beyn -128 ta 127 zakhire konim !!!!!!!!


// Khob goftim dar 8bit signed mishe -128 ta beyn 127 zakhire kard 
// Vali agar biaym adad mesal 200 tosh zakhire konim natije ash chi mishe?
// Malome nemishe error mide talash konim 
// Natije aslish mishe Overflow yani engar 1 Livan darim ba 1 parch ub mikhaym berizim livan hamasho
// Ja nemigire be in migan Overflow
// Ye moshkeli ham be vojud miyare ( UB ) hast hamon ( Undefined Behavior )

/*
#include <iostream>

int main()
{
    
    std::cout << 5 / 2; // In dar vagheyat ya kolan mishe javabesh 2.5
    return 0; 
    // Vali shod 2 chera ? ino jelo tar yad migirim man baladam ye test karde bodam vali hala bebinimm

}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Adad sahih bedon alamat ( unsigned integers )

// Zaban C++ az adad unsigned ham support mikone
// Aslan adad unsigned yani chi? Adad haye faghat mosbat hastand manfi nemishe nevesht tosh!

// Mesal:

/*
#include <iostream>

int main() {

    unsigned int x = 50;
    unsigned short a = 25;
    unsigned long y = 55;
    unsigned long long p = 2500;

    unsigned int i = -50; //Error ye adad ajib gharib mide ke barresi mishe jelo tar
    std::cout << i;
    return 0;
}
*/

// Khob adad unsigned manfi nemishe pas alan 8bit ya hamon 1Byte chegadr mishe? 0 - 255 mishe tosh zakhire sazi kard
// Mesal formul be dast ovardan che meghdar mitunim dar hafeze RAM unsigned integers zakhire konim?

/*
#include <iostream>
#include <cmath>

int main() {
    // n bit == 2^n - 1
    // Khob in formul chera - 1 mishe? 
    // Zira khod 0 am hesab mishe !!!
    std::cout << pow(2 , 8) - 1 << "\n";
    std::cout << pow(2 , 16) - 1 << "\n";
    std::cout << pow(2 , 32) - 1 << "\n";
    std::cout << pow(2 , 64) - 1;
    return 0;

}
*/

// Khob che moghe hayi lazeme az adad faghat mosbat estefade konim ye mesal riz bezanm masalan sen hich vaght nemitune
// Manfi bashe vali ziad estefade nakon az unsigned
// Ya mikhay mesal dar 1Byte adad 200 zakhire koni az unsigned estefade kon 

// Ye codi test konim ye natije mide ke barresi mikhaym konim
// short 2 byte hast ke age bekhaym unsigned zakhire sazi konim mishe 0 - 65535 mishe zakhire sazi kard

/*
#include <iostream>

int main(){

    unsigned short x = 65535;
    std::cout << x << "\n"; // Output = 65535
    x = 65536;
    std::cout << x << "\n"; // Output = 0
    x = 65537;
    std::cout << x << "\n"; // Output = 1
    x = 65538;
    std::cout << x; // Output = 2
    return 0;


}
*/

// Chera in khoruji ha 0 1 2 dad doruste bishtar az on chizi bod ke zakhire sazi mikhad kone vali hala chera 0 1 2 ?
// Biaym tahlil konim :)

// Ye forumul dare mesal ( 65536 / 65535 +1 ) taghsim riyazi nist sahih hast baghimande moheme % 
// Mesal codi bezanm behtar motavajeh mishi

/*
#include <iostream>

int main() {

    std::cout << 65536 % (65535 + 1) << "\n"; // 65535 + 1 hamon mishe = 65536
    std::cout << 65537 % (65535 + 1) << "\n"; // Toye parantez andakhtam javab dorust biad chon javab miomad 3 olaviyat bayad bashe
    std::cout << 65538 % 65536; // dige ino + 1 nakardam mostaghim zadamm 65536

}
*/

// Khob az unsigned ha harvaght herfeyi shode estefade kon chon moheme moshkel za ham hastand.

// Ye mesal codi digar ham bezanim ke moshkel UB bevojud miyare

/*
#include <iostream>

int main() {

    unsigned int i = 3;
    unsigned int y = 5;
    std::cout << i - y; // Adad naaaa ma'lom !!!!
    // Moshkel Undefined Behavior
    return 0;

}

*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Anvae tul sabet انواع طول ثابت

// Khob ma midunim ke zaban C++ dar DataType ha (Garanti گارانتی) moshakhasi nadare braye size ha
// Bale hadghal Garanti mikone va bastegi be Compiler va memariye computer dare

// So'ali ke pish miyad chera size ha ya andaze ha sabet nistand?
// Pasokh ba zaban C barmigarde ke on zaman performance rotbe avval hamechiz bod yani performance on zaman (Kheyli mohem bod)
// Zaban C omad size type haye integer baraye piyade sazi azad gozasht 
// Ke age performance bsihtar bpd mitunestand size bala tari ham estefade konand 

// Khob ma midunim hadaghal size int 2byte hast va dar computer haye modern 4byte hast
// Khob ma biaym farz bar roye 2byte bezarim ke okeye amalkard khobi dare 
// Vali biaym 4byte dar nazar begirim va computeri ke 2byte faghat support mikone (Albate alan hameye computer ha modern hastand 4byte rahat support mikonanad)
// Khob natije overflow mishe dar barname UB be vojud miare 
// Nokte dare: Doruste ma 4byte estefade kardim vali toye on 4byte kamtar az 2byte estefade shode bashe are okeye moshkeli pish nemiyad
// Vali agar az 2Byte bishtar bashe 100% on moshkel hayi ke goftam pish miad

// Khob dar zaban C99 (Zaban C hast) 1999 ke arze shod omadan yek seri tul sabet baraye anvae integer ha erae' dadan
// Ke in type ha dar header file  zbana C , C++ (stdint.h) makhsus zaban C++ (cstdint) ke behtare az in estefade konam 

// Nahve neveshtaneshun 

/*
#include <iostream>
#include <cstdint>

int main()
{
    // 1byte / -128 ta 127
    std::int8_t;
    //  1byte / 0 ta 255
    std::uint8_t;

    // 2byte / -32768 ta 32767
    std::int16_t;
    // 2byte / 0 ta 65535
    std::uint16_t;

    // 4byte / -2147483648.000000 ta 2147483647.000000 // in adad ziade
    std::int32_t;
    // 4byte / 0 ta 4294967295.000000
    std::uint32_t;

    // 8byte / -9223372036854775808.000000 ta 9223372036854775808.000000
    std::int64_t;
    // 8byte / 0 ta 18446744073709551616.000000
    std::uint64_t;

    // Mitunim in DataType ha ro ta in adade ke neveshte meghdar dahi konim ya hamun zakhire sazi

}
*/

// Khob moshkelat in anvae tul sabet:
// Tazmin nemikonanad dar hameye Computer ha kar konanad poshtibani nemishavand

// Mored ba'adi dar ba'azi az computer ha amalkard kond tari mitunanad dashte bashand
// Chejuri mishe in mesal: man miam tul 32بیتی estefade mikonam hala yek computer hast dar 
// 64 بیتی amal kard behtari darad


// Khob zaban C++ omad 2 daste dige am erae' kard ke tahala engar kasi azash estefade nakarde
// 1-fast سریع
// 2-Least حداقل

// Yekam in mabhas گنگه
// Mesal ma int_fast16_t tarif kardim
// Miyad dar computer ke masalan az 64بیتی ya 32بیتی amalkard behtari darad miyad sari tarin andaze ra barmigardanad
// Masalan miad 32 barmigardune dar hali 16 tarif kardim
// Mesal codi ham mizanm kamel motavajeh shi
// In anvae be goneyi tarif shode and ke hadaghal tedad bit mored nazar ra dashte bashand ama mitavanand
// Bozorg tar bashand agar ke baes behbud amalkard shavad
// Toye daftar behtar tozih dadam!

// In code dar Visual Studio test kardam onja test kon ya codesh hast folder (DataType C++, C# Visual Studio 2022)
// Dar compiler Visual Studio 2022 ke ( MSVC ) hast javab mide

/*
#include <iostream>
#include <cstdint>

int main(){

    std::cout << sizeof(std::int_fast8_t) * 8 << "\n";
    std::cout << sizeof(std::int_fast16_t) * 8 << "\n";
    std::cout << sizeof(std::int_fast32_t) * 8 << "\n";
    std::cout << sizeof(std::int_fast64_t) * 8 << "\n";
}
*/


// Khob least ham mesl ine vali ye tafavot dare mesal miaym least16 tarif mikonim
// Ke hadaghal 16 hast vali computer ke memari on 32بیتی behtar amalkard dare
// Mesl fast miad 32بیتی jaygozin mishe vali nokte ke dare fargh dare on hadaghal 
// 16 بیتی ro ham negah midare


// Khob in fast va least az unsigned ham poshtibani mikonanad

/*
#include <iostream>
#include <cstdint>

int main(){

    
    std::uint_fast16_t;
    std::uint_least16_t;


}
*/


// Nokte!: Vared joziyatesh nemisham pichide nashe dar anvae tul sabet 8بیتی moshkel darad:
// Dar int8_t , uint8_t , int_fast8_t , uint_fast8_t , int_least8_t , uint8_t
// Ye nokte riz eshare mikonam az hameye anvae 1Byte ke hamon 8bit hast estefade nakon chon
// Type char barkhod mikonand khod char 1byte estefade mikone va dar anvae tul sabet az 8bit estefade mikonim
// Dar ba'azi az system ha raftar dorusti neshun nemide // Dar hamin had bedon!!!!

// Akharin harfam ham bazam pishnahad mishe az int khali estefade kon anvae tul sabet ziad dargir nasho moshkel za hastan
// Moshak dar faza crash mide miofte zamin dalilesh haminas dige ba least fast va inayi ke goftam ziad dargir nasho
// Ba ina dargir nasho ta majbur beshi ta barname at bekhubi compile va ejra shavad.





// In code payin ziad deghat nakon omadan az tul sabet ha ye function zadam test kardam
// Ke hichkas ba tul sabet function nemisaze vagarne majbur bashe be in kar
/*
#include <iostream>
#include <cstdint>
#include <cmath>

std::uint16_t salam();

int main(){

    // std::cout << pow(2 , 16) - 1;
    // 65535
    std::cout << salam();
    return 0;

}
std::uint16_t salam(){

    return 65535;

}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Scientific Notation (نماد علمی)

// Khob in ( Scientific Notation ) yani che? Baraye namayesh adad ashari kheyli bozorg ya kochak be kar miravad.
// Kolan zamani ke ba adad besiyar bozorg ya besiyar kochak sar kar dashte bashim in Scientific Notation karbord ziadi darad

// In Scientific Notation besiyar rahat hastand:
// Formul: Siynificant x 10^exponent
// 12000 = 1.2 x 10000
// OR 
// 5.9736 x 10^24

// Faghat dar posht ragham ashar yek ragham bayad bashe
// Dige in ghalat mishe 59.736 !!!!!!!!

// So'al asli injas ke chejuri az namad elmi dar C++ estefade konim ??

/*
#include <iostream>

int main()
{
    // e hamon zarb hast 4 ham hamon exponent
    // Va dar ghabl az ashar faghat 1 ragham darad
    double s = 1.2000e4;
    std::cout << s << "\n";
    return 0;

}
*/

// Khob chera double vali float na? deghat double bishtar az float hast
// float daraye deghat 32بیتی ast mamolan ta hodud 7 ragham ashar ra poshtibani mikonad
// double daraye deghat 64بیتی ast mamolan ta hodud 15 ragham ashar ra poshtibani mikonad


//Mesal migan 42030 biya ba format namad elmi benevis:

/*
#include <iostream>

int main()
{
    // Daghighan hamun ghavanin rayat shod
    // posht ashar 1 ragham hast va ......
    double salam = 4.2030e4;
    std::cout << salam << "\n";
    return 0;

}
*/

// Mesal dige: Hala mikhaym adad kochik bebinim chejurie masalan 0.0078900 in bad az 9 dota 00 hast ona dige hesab nemishan khone nemishe

/*
#include <iostream>

int main()
{
    // Daghighan hamun ghavanin rayat shod
    // posht ashar 1 ragham hast va chon adad kochik hast manfi shode -3
    // Harchi ghabl az 7 hast on 0 ha mishmari manfi mikoni minevisi
    double salam = 7.89e-3;
    std::cout << salam << "\n";
    return 0;

}
*/

// Mesal dige: 600.410
/*
#include <iostream>

int main()
{
    // Daghighan hamun ghavanin rayat shod
    // posht ashar 1 ragham hast va bad az 6 harchi darad ta noghte minevisim ke bazam 2ta 00 hast khod 6 hesab nemishe
    double salam = 6.00410e2;
    std::cout << salam << "\n";
    return 0;

}
*/

// Toye daftar behtar tozih dade shode

// Khob hala ma agar natunestim biaym hamin adad 600.410 namad elmisho benevisim ba ye library mitunim komak begirim
/*
#include <iostream>
#include <iomanip>

int main()
{

    double selam = 600.410;
    std::cout << std::scientific << selam; // OutPut 6.004100e+02
    // On bad az 1 dota 00 hast ke kolan hesab nisan ba ghabl az 02 ham on 0 e hesab nis 
    // kamelan dorust javab dad
    return 0;

}
*/

// Mabhas: Adad ashari (floating point number)

// Ino midunim ke toye type haye integer nemishe adad ashari zakhire sazi kard
// Baraye zakhire sazi adad ashari bayad az floating point estefade konim 
// Ke mitunim chenin adadi zakhire sazi konim:
// 4.224 , 58.5469 , -3.54 , 0.0 , 0.00005485414 va ..................
// Kolan ba yek alamat momayez ya hamun noghte neveshte mishe ( ****.**** )


// Ye gaziye vojud dasht ke dar integer ha size daghigh garanti nemikone balke yek minimum size garanti mikone
// Va in dar floating point ha ham vojud darad 
// Yani zaban C++ andaze daghigh anvae dade (داده) ra tazmin nemikonad balke faghat yek hadaghal andaze ra moshkhas
// Ya haman dar nazar migirad

// Anvae floating point:
// 1-float 
// 2-double 
// 3-long double



// Hamin avval begam dar floating point bishtarin karbord double darad hala migid chera? 
// Zira deghat bishtari darad

// Minimum size ke baraye anvae floating size c++ dar nazar gerfte:
// float ===== 4byte
// double ===== 8byte
// long double ===== 8 byte

// Dar memari haye modern hadaghal size mamolan injurie: 
// float ===== 4byte
// double ===== 8byte
// long double ===== 8 byte , 12 byte , 16 byte


// Mesal: Ma mikhaym mostaghim adad 5 ro toye floating point ha zakhire sazi konim
// vali injuri benevisim eshtebahe double i = 5; kamelan eshtebahe !!!!

// float i = 5.0f; // float akhar adad yedune f dare migam hala chera 
// Chon age gharar nadim compiler in 5.0 miad double mishnase 
// double w = 5.0;
// long double s = 5.0;

// Sabet konim chera 5.0 injuri compiler double mishnase bedon gozashtan f
/*
#include <iostream>

int main()
{

    std::cout << typeid(5.0f).name() << "\n"; // float
    std::cout << typeid(5.0).name() << "\n"; // double
    std::cout << typeid(5).name() << "\n"; // int
    // Dar inja esm avval harfeshon miyare dar compiler MSVC ke male Visual studio 2022 hast esm kamel minevise
    return 0;

}
*/


// Khob ye mesal bezanim ma yek adad mikhaym ke ye ragham ziadi darad vali kamel chap nemikone
// Va rahhalesham begim chejurie
/*
#include <iostream>
#include <iomanip> // Baraye in setprecision in library <iomanip> lazem hast

int main()
{

    std::cout << 65594752454.01 << "\n"; // in miad 6 raghamesho chap mikone deghat cout 6 ragham hast 
    // Hala rah hal chiye kamel chap kone
    std::cout << std::setprecision(13); // toye parantez deghat ragham moshakhas mikonim
    std::cout << 65594752454.01; // Hala output ino negah kon 
    return 0;


}
*/

// Inam begam:
// Deghat float : 6 - 9 ragham hast
// Deghat double : 15-19 ragham hast


// Nokte akhar: Kheyli moghe ha float ro be double tarjih bede 
// Elat 10000 bar goftam bazam migam: deghat double behtar hast bishtar hast .........

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Moshkelat kar ba adad ashari 

// Khob in adad ashari kamel daghigh zakhire sazi nemikonanad ye mesal bezanim
// Kamel bebin

/*
#include <iostream>
#include <iomanip>

int main()
{

    double x = 0.1;
    std::cout << x << "\n"; // inja doruste 
    std::cout << std::setprecision(17); // vali biaym deghat 17 konim
    std::cout << x; // Output negah koni on akhar akhar yedune 1 hast doruste kheyli be chesh nemiad
    // Vali injuri zakhire sazi ina bazi vaghta kami bishtar ya kami ziad hast az adadi ke ma mikhaym zakhire sazi konim
    return 0;

}
*/


// 0.1 dar mabnaye 2 yek meghdar tekrar shavande bi payan darad baraye hamin
// double nemitune be tor daghigh zakhire konad dar double
// (64 بیت دارد)
// In miad adad nazdik tarin be 0.1 zakhire sazi mikone
// In tafavot dar deghat bala neshun dade mishe !!!!

// Vaghti ba adad ashar sarkar darim  momkene yek zare az adad had vagheyatash bishtar ya kamtar bashad


// Ye mesal: 
/*
#include <iostream>
#include <iomanip>

int main()
{

    double i = 1.0;
    std::cout << i << "\n";
    double y = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1; // Ina az lahaz riyazi mishe 1.0
    // Vali biaym ino chap konim
    std::cout << y << "\n"; // Inja moshkeli pish nemiyad
    std::cout << std::setprecision(17);
    std::cout << y << "\n"; // Vali inja yekam fargh mikone 
    
    // Hala biaym az moghayeseyi estefade konim boolean ke nakhundim ta hala vali
    std::cout << (i == y) << "\n"; // Adad 0 yani false adad 1 mishe true
    
    // Ba Boolalpha mishe kamel neshun dad mesal: ke 0 1 neshun nade
    std::cout << std::boolalpha;
    std::cout << (i == y) << "\n"; // False mishe 

    return 0;
}
*/


// 3 Mored ham dar daste bandi floating point hast:
// 1-inf(infinity - مثبت بینهایت)
// 2- -inf(Negative infinity - منفی بینهایت)
// 3- nan(Not a Number - یک عدد نامعتر)

// In mored ha faghat dar compiler hayi vojud darad ke az IEEE 754 estefade karde bashand

/*
#include <iostream>

int main() {
    // Har adad mosbati taghsim bar 0 beshe mishe inf
    double zero = 0.0;
    double inf = 2.1 / zero;
    std::cout << inf << "\n";
    // Har adad manfi taghsim bar 0 beshe mishe inf
    double neginf= -9.4 / zero;
    std::cout << neginf << "\n";
    // 0 taghsim bar 0 beshe mishe nan
    double nan = zero / zero;
    std::cout << nan << "\n";
    return 0;

}
*/

// Age compiler IEEE 754 nadashte bashe nemitunim taghsim bar sefr konim

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Boolean

// Boolean chist? Javab ye seri so'al ha ya mas'ale hast ke mishe: Bale OR Khyer
// Bale == True
// Kheyr == False
// 0 == False
// Be joz 0 harchi bashe True aksar 1 minevisan chon khod Compiler 1 mide
// 1 == True

// Nahve neveshtan Boolean:

/*
#include <iostream>

int main(){

    bool i;
    i = false;
    bool y = true;
    bool x = false;
    bool xy = !x;
    bool iy = !true;
    std::cout << i << '\n' << y << '\n' << x << '\n' << xy << '\n' << iy << '\n';
    return 0;

} 
*/

// Nokte: So'al chejuri in true , false dar hazefe zakhire mishan?
// Adad 0 be onvane false zakhire mishe
// Adad be joz 0 ke mishe true 1 , -2 , 3 , -5 
// Vali dar hazefe 1 be onvane true zakhire mishe


// Khob dar code bala be sorat 0 va 1 chap mikone
// Age bekhym matni chap kone true va false ro 
// Estefade az:
// std::boolalpha;
// Mesal:

/*
#include <iostream>

int main(){

    std::cout << std::boolalpha;
    bool x = false;
    bool y = -0;
    bool w = !false;
    bool med = -10;
    std::cout << x << '\n' << y << '\n' << w << '\n' << med << '\n';

    std::cout << "|********************************************|" << '\n';
    // Ba estefade az noboolalpha barmigarde be halat avval 0 1;
    std::cout << std::noboolalpha;
    bool re = false;
    std::cout << re << '\n'; 

    return 0;

}
*/


// Nokte:

// Agar bool az cin bekhaym karbar vared kone 
// Kar bar biad be jaye 0 1 ye matni ajib gharibi vared kon 
// Natije: std::cin ono fail mikone va mishe false

// Ye rah ham dare ke karbar betune toye matn vared kon false

// Mesal har do nokte:


/*
#include <iostream>

int main() {

    std::cout << "Enter your Number: ";
    bool x;
    std::cin >> x;

    if (x == true)
    {
        std::cout << "Your Number is true:" << x << std::endl;

    }
    else
    {
        std::cout << "Your Number is fail: " << x << std::endl;

    }

    std::cout << "|************************************************************************|" << '\n';

    bool y;
    std::cout << std::boolalpha; 
    std::cout << "Write text: ";
    std::cin >> std::boolalpha >> y; 
    std::cout << "Your input is: " << y << '\n';

    return 0;

}   
*/


// Khob ba bool mishe function ham nevesht
// Va asami ke ziad barash mizaran tebgh kari ke on code mikone:
// isEqual , isValid , canMove , hasData , isConnected va ........

// Mesal: 

/*
#include <iostream>

bool isEqual(int x , int y);


int main(){

    std::cout << std::boolalpha;
    std::cout << "Adad avval vared kon: ";
    int x;
    std::cin >> x;
    std::cout << "Adad dovvom vared kon: ";
    int y;
    std::cin >> y;
    std::cout << isEqual(x , y) << '\n';

    return 0;

}

bool isEqual(int x , int y){

    return x == y;

}
*/

/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas: if-statement


// In if ya if-statement chist?
// Yek ebarate sharti hast 
// Ye shart mizanim age in shart dorust bod bia felan karo bekon age eshtebah bod felan karo bekon

// Dar programming migim age shart bargharar bod felan karo bekon dar gheyr in sorat ya else in karo bekon

// Ye chizi darim dar zaban C++ if statement ke migim zamani ke shart ma True bod in shart ma bargharar bashad

/*
if(condition)

    statement;

*/

// Agar bish az yek statement dashte bashin Bracket mizarim { }
/*
if (condition)
{

    statement;
    statement;
    statemetn;

}
*/

// Toye (condition) ha chi mishe nevesht?
// Expression mishe nevesht
// Ke in Expression ha tarkibi az Literal integer , operator عملگر عملوند , Variable 

// Dar condition codi bayad benevisim ke natije Boolean bashe True ya false bayad bashe tebgh shart in statement
// Ejra mishe

// Mesal:
/*
#include <iostream>

int main()
{
            
    int x = 5;
    if(x == 5)
    {
    std::cout << "True" << '\n';  
    }

    if(x != 5)
    {
    std::cout << "Hello" << '\n'; // Chap nemishe zira shart ma false hast 
    }
    return 0;

}
*/

// Ye rah baraye neveshtan ebarate sharti if - else
/*
if (condition)
{
        // True bod in statement ejra mishe
    statement;
}
else{
        // False bod in statement payini ejra mishe
    statement;

}
*/

// Mesal:

/*
#include <iostream>

int main()
{
    double test = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    if (test == 1.0)
    {
        std::cout << "Yes" << '\n';
    }
    else
    {
        std::cout << "No" << '\n';
    }
    
    return 0;
}
*/


// Ye done ham mitunim chand ta shart mokhtalef tayin konim
// Ba else if
/*
if (condition)
{
    // statement; 
}
else if (condition)
{
    // statement; 
}
else
{
    // statement; 
}
*/


// Vali agar bish az 3 4 ta beshe code tamizi nemishe behtare az Switch estefade shavad 
// Dar ayande yad migirid

// Khob condition ma be joz boolean ye chiz dige bod:

/*
#include <iostream>

int main()
{

    if (4)
    {
        std::cout << "True be joz 0 OR -0 hame chiz trueee" << '\n';
    }
    
    if (0)
    {
        std::cout << "True be joz 0 OR -0 hame chiz trueee" << '\n';
    }else
    {
        std::cout << "false" << '\n';
    }
    
    

}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Character ya hamun char

// Char ham yek DataType az noe fundamental hast 
// Ke mishe tosh tak character zakhire kard mesal:
// 'a' , '2' , '$' , '@' , ' ' va ......

// in DataType char yek integral hast:
// Yani che? 
// Yani vaghti 'a' y 'M' toye char zakhire mikoni dar posht sahne integral zakhire sazi mishand
// mesl inke boolean True dar posht sahne 1 bod va False dar posht sahne 0 bod

// Khob char 'a' in dar posht sahne 97 zakhire mishe 
// Khob tebgh che osuli in 97 zakhire sazi mishe???
// Har az in adad ya reshte ya .. yek code ASCII darand
// ASCII = American Standard code for Information Interchange

// Nahve tabdil ina be code ASCII ham dar akhar migam

// Nahve neveshtan characters: 

/*
#include <iostream>

int main()
{

    char character = 'a';
    std::cout << character << '\n';

    // Az code ASCII sham estefade konam a chap mikone
    char ASCII_Code = 97;
    std::cout << ASCII_Code << '\n';
    return 0;
}
*/

// Ye seri character ha hastan ke yekish hamishe estefade mishe vali shayad fek nakoni az noe char has
// Escape Sequence

/*
 \n // baraye omadan yek khat be payin
// \t // baraye jolo raftan khat
// \\ // baraye chap \ toye cout
// \" // baraye chap " toye cout
*/
// Mesal:

/*
#include <iostream>

int main()
{
    std::cout << "Hello" << '\n';
    std::cout << "\t" << "Iam MohammaD";
    std::cout << "\nHey\\" << '\n';
    std::cout << "\" test" << '\n';

    return 0;
}
*/

// Nahve bedast ovardan code haye ASCII
// In rah tolani dar mabhas haye baadi ye rah khob midam
// Felan ino yad begir
/*
#include <iostream>

int main(){
    // Chand ta mesal: 

    char asciiCode1 = 'a';
    char asciiCode2 = 'A';
    char asciiCode3 = 'b';
    char asciiCode4 = '$';
    char asciiCode5 = '.';
    char asciiCode6 = ' ';
    int code1 = asciiCode1;
    int code2 = asciiCode2;
    int code3 = asciiCode3;
    int code4 = asciiCode4;
    int code5 = asciiCode5;
    int code6 = asciiCode6;
    std::cout << code1 << '\n';
    std::cout << code2 << '\n';
    std::cout << code3 << '\n';
    std::cout << code4 << '\n';
    std::cout << code5 << '\n';
    std::cout << code6 << '\n';
    // In code kamelan kasif hast ghabel ghaboli niss!!!!!!!!!!!!!!!!
    // Migam behtaring rahesho

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas: Type Conversion تبدیل تایپ

// Bahs mohem!!!!

// Zaban C++ kheyli moghe ha be ma in emkan mide 
// Yek fundamental type ro be fundamental type dige tabdil konim

// Mesal:

/*
#include <iostream>

void print(double x)
{
    std::cout << x;
    return;
}
int main()
{

    print(6); // Tabdil int be double 

    return 0;

}
// Be in prose ke int tabdil be double shode migan Type Conversion
*/

// 2 نوع Type Conversion darim:
// Implicit Type conversion
// Explicit Type conversion

// Implicit ضمنی
// Explicit مستقیم یا صریح

// Dar zaban C++ bedon in ke be sorat mostaghim begim compiler biyad tabdil type anjam bede migim Implicit
// Zamani ke mostaghim khodemun begim in type tabdil kon be felaan type mishe explicit

// In jalase bahs Implicit mikonim ke ye mesal dar code bala zadim 
// Dar daftar vazeh tar yad migiri

// Khob in tabdil Implicit ta jayi okeye vali ye jaha be moshkel bar mikhorim
// Mesal:

/*
#include <iostream>

void print(int x)
{

    std::cout << x << '\n';

}

int main()
{

    print(5.6); 
    return 0;

}

// Warning mide faghat dar compiler clang++ 
*/


// In tabdil balayi yek unsafe hast goftam cherasho: warning mide 
// Warning mide ke Season3.cpp:1231:11: warning:
// implicit conversion from 'double' to 'int' changes value from 5.6 to 5 [-Wliteral-conversion]
// 1231 |     print(5.6);
// |     ~~~~~ ^~~
// 1 warning generated.


// Code avvali vali tabdil safe bod
// Hala ye ravesh dare vali toye explicit
// Az uniform Initialization estefade konim error mide nemizare { };
// Mesal: 
/*
#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int main()
{

    double x {5.6};
    print(x);

    return 0;

}
    In code dar compiler MSVC test kon Visual Studio 2022 onja error mide

*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: تبدیل تایپ صریح (Explicit)

// Khob in explicit be ma in emkan mide be tor mostaghim tabdil type anjam bedim
// Ke ye keyword hast be ma emkan mide be tor mostaghim tabdil type anjam bedim

// static_cast<type>(expression)

// Chand model tabdil type be sorat Explicit darim:
/* C-style cast:
 double y = 5.6;
 int x = (int)y;
*/
// dynamic_cast
// const_cast
// reinterpret_cast


// Har kodum az in model ha jahaye mokhtalef estefade mishe
// Behtarineshon static_cast hast

// Ye mesal az static_cast berim:
/*
#include <iostream>

void print(int x);

int main() {

    double test = 4.6;
    print(static_cast<int>(test));
    // In faghat mituni dar Linux clang++ test koni ke bebini warning nemide
    // Va toye Visual Studio 2022 ( MSVC )

    return 0;

}

void print(int x) {

    std::cout << x << '\n';
    return;

}
*/

// Khob yadet bashe baraye bedast ovardan code haye ASCII character ye code نامنظم
// Neveshtim khob hala mitunim ba static_cast behtarin halat benevisim
// Mesal:
/*
#include <iostream>

int main() {


    char esm = 'a';
    std::cout << static_cast<int>(esm) << '\n';
    // Behtarin rahesh inee!!!!!!!!!!!!!!!

    return 0;
}
*/

// Hala ye chizi mitunim toye char adad 97 chap konim be jaye inke biyad ( a )
// Neshun bede Tabdil mikonim be int ke biyad 97 chap kone
// Mesal:
/*
#include <iostream>

int main() {

    char num = 97;
    std::cout << static_cast<int>(num); // OutPut 97 :)

    return 0;
}
*/

// Ba in static_cast kheyli kara mishe kard mesal
// ye unsigned be signed tabdil konim :)
// Tosiye nemishe UB be vojud miyare !!!!!!!!!!!!!!!!!!!!!!!!

/*
#include <iostream>
#include <cstdint>

int main() {

    std::uint16_t x = 65535;
    std::cout << static_cast<std::int16_t>(x) << '\n';

    std::uint16_t y = 65534;
    std::cout << static_cast<std::int16_t>(y) << '\n';

    std::cout << "\nDalilesh: " << '\n';

    std::cout << -65536 % -65535 << '\n';
    std::cout << -65536 % -65534 << '\n';
    return 0;
    
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas: Const

// Zaban C++ az chandin noe Const Variable poshtibani mikone ke gharare yad begirim

// Const chist ? Mafhum sabet ast vaghti yek Const Variable tarif mikonim yani dige nemishe meghdar on ro taghir dad
/*
int x  = 4;
x = 3;
dige toye const emkan taghir meghdar injuri nadarim
*/


// Nokte: Const Variable hamishe bayad meghdar dahi avvalie shavad vagarne Error mide!!!!!!!!!!!!!!!!!!!!!

// Ye so'ali ke pish miad ma koja lazem mishe az ye Const Variable estefade konim ke meghdar on taghir nakone?
// Mesal: Tarif kardan adad PI ke hamishe 3.14 hast ino mishe const dar nazar gerft ke dar barname taghir nakone
// Ya zajebe zamin hamon ( Gravity ) mitunim const dar nazar begirim dar game ina ke ( Gravity ) bazi be ham nakhore avaz nashe
// Meghdaresh
// Chon ehtemal in hast be tor سهوی biyad jazebe taghir kone yani az roye عمد ya be tor eshtebah ke fizik game beham mikhore

// Nahve neveshtan const:

/*
#include <iostream>

int main() {

    // 2 model mishe const nevesht 
    // Avvali tarjih midam chon kheyli az source code ha
    // Hamin ravesh minevisan

    const double gravity = 9.6;
    const int PI = 3.14;
    // PI = 6; //Error

    // OR 

    float const math = 5.6f; 
    int const sidesInSquare = 4;

    // const int numberPlayer; // Error meghdar dahi avvali bayad shavad

}
*/

/*
#include <iostream>

void gravity(const double x){

    std::cout << x << '\n';
    // x = 6; // Error chon const payin tozih dadam
    return;

}

int main() {


    gravity(3.6);

    gravity(5.9);

    // Khob chera 2 ta Argument mishe nevesht mage const sabet nabod ?
    // Doruste chon Argument hich rabti be const nadare
    // Khob pas chera const gozashtim? Toye khod function inScope khodesh taghir nashe dad toye function
    // Bebinid mifahmi

}
*/

// Nokte: mishe function ham sabet ( const ) dar nazar gerft vali
// Ino behtare dar class ha estefade konim ke dar ayande yad khahim gerft 
// Baraye amniyat va ..... behatare


// Ye kholase konim kol mabhas ro: 
// Har ja function faghat dade ra mikhanad va taghiri nemidahad behtare const dar nazar gerfte shavad

// Ma goftim yedune Const Variable va yedone Const Value darim khob ghabl ina
// Symbolic constant chiye? Har Const Variable yek name dare hamon Identifier dare 
// Mesal const int x = 5;
// In x ke toye const int tarif shode migan Symbolic Constant
// Ye eshare riz ya hamon مصادق dige ash be Object-Like Macro dare 
/*
#define identifier Substitution text
////
#define SEASON_3 2
*/
// Khob in meghdar SEASON_3 ghabel taghir nist mishe be onvane const estefade kard?
// Kheyr malume Const Variable behater
// In Object-Like Macro ya Function-Like Macro jahaye mokhtalef bayad estefade she Esmeshon roshe Macro

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Constant Expressions

// Khob dar Season 1 goftim Compiler ha rafte rafte behine tar mishan ta jayi ke mitunand
// Code hayi ke ma minevisim Taghirat ijad konand ke monjar beshe barname dar zaman Kamtari
// Be sarfe Compile she.

// Code zir negah kon:

/*
#include <iostream>

int main() {
    
    // Mouse ro in Expression negah dar 
    // Compile bedon inke enjra konam khodesh hesab karde javab ino
    // 18 neshon mide
    int x = 15 + 3;
    std::cout << x;

    return 0;

}
*/

// Ino man har bari ke ejra mikonam dige nemiad 15 + 3 dobare dar ( Run Time ) hesab kone
// Hala posht sahne in 
// Compile hoshmandane amal mikone chikar mikone? Miad be jaye 15 + 3 
// Adad 18 az ghabl jay gozin mikone 
// Vaghti Ejra mikonim dige nemiad 15 + 3 hesab kone hamon adad 18 sari neshon mide
// In adad 18 az ghabl da faz Compile hesab shode

// Ye mafhomi darim: Constant Expression
// In Expression midunim dige daraye Literal va amalgarha 
// 3 + 5 Yek Expression hast

// Constant chiye?
// Bala toye code tarif kardim dige 15 + 3 ke meghdar on dar Compile-Time
// Moshakhas mishe Yani ghabl az RunTime meghdar on moshkhas ast ke migim Compile-Time

// Ye so'al x + 4 yek Constant Expression hast?
// Ham bale ham kheyr 
// Age ghablan gofte bashim x = 5;
// Bale x malome dige javabesh dar Compile-Time moshkhas mishe

/*
#include <iostream>

int main() {

    int x = 6;
    std::cout << 10 + x;
    // In 16 jaygozin ke 10 + x karde
    return 0;

}
*/

// Vali agar x bedim dar std::cin karbar vared kone
// Constant Expression hesab nemishe chera?
// Malome chon adad x dar Run-Time moshakhas mishe

// Compile-Time amalkard Sorat behtari dare 
// Chon dige CPU niyaz nist talaf nemidunam 3 + 6 she

// std::cout khodesh yek Expression hast
// Hala in Constant Expression hast?
// Kheyr chon chap ya hamon ouput in dar Run-Time moshkhas mishe

// Compile-Time behtar hast ya Run-Time? 
// Agar momken dashte bashe rahi bashe Compile-Time 100%

// Baraye dark behtar in mabhas Daftar negah kon 1 dor

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Compile-Time Constant

// Compile-Time Constant zamani hast ke meghdaresh dar zaman Compile Moshakhas bashe mesl:
// "Hello" / 1 / 5 va .....
// Khob Constant Variable ha chetor: Ham mitune Compile-Time Constant bashe ham na
// Constant Variable dar sorati mitune Compile-Time Constant bashe ke Initialization (Meghdar)
// Yek Constant Expression bashe
// Hameye Literal ha Compile-Time Constant hastand

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Constexpr keyword

// Yek Keyword darim be name Constexpr yad gerftanesh zarar nemikoni!!!

// Zamani ke Constant Variable tarif mikonim mesal:
// const int x = 4;
// Compiler dar posht parde rahgiri mikone aya in:
// Compile-Time Constant hast ya
// Run-Time Constant hast

// Hadaf az in chiye? Malome dige Compile-Time behine mishe
// Ye ja hayi hast dar C++ bayad Compile-Time Constant bashe na Run-Time chera?
// Goftim chon Compile-Time dast compiler dar behine sazi baz mikone 

// Khob vaghti ma miaym const int x = 5; tarif mikonim
// In ham mitune Compil-Time bashe ham Run-Time
// Goftim dige bastegi be Initialization on darad 
// Khob ye Keyword hast ke ham tazmin mikonad sabet hast mesl const
// Ham tazmin mikonad ke in Compile-Time hast 
// Vali Deghat dashte bash dar Initialization tanha mitune Constant Expression gharar begire
// Be joz in error mide chon dige tazmin mikone Compile-Time hast
// Mesal:
/*
#include <iostream>

int main() {

    constexpr int i = 5;
    constexpr double x = 6.5;
    constexpr int y = i; // i khodesh Constexpr hast moshkeli pish nemiad
    constexpr int z = y + i; // Javab in alan 10 hast jaygozin shode mouse negah dari mituni bebini



    // int age;
    // std::cin >> age;
    //constexpr int salam = age; // Error mide 
}
*/

/*
#include <iostream>

int five() {

    return 5;

}

int main() {
    

    constexpr int salam = five(); // Error mide 
    // Chon ta Function five seda zade nashe meghdar malom nis
    // Khob key seda zade mishe dar Run-Time

}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Literals

// Tarif Literal: Literal ha maghadir bi nami hastand ke be sorat mostaghim
// Dar codemun azashon estefade mikonim

// Mesal:
// return 0; hamin 0 return yek Literal hast int literal
// bool lite = true; hamin true yek literal hast ghabel taghir nistand
// std::cout << 3.16; hamin 3.16 yek literal hast inam ghabel taghir nist
// Literals: 
// integer value ==> 6 / -7 / 0 va ... --> int
// boolean ==> true / false --> bool
// floating point ==> 1.2 / -5.12 va ... --> double
// character ==> 'a' / '\n' / '&' va .. --> char
// c-style string ==> "MamaD" --> const char[4]
// In string vali char ba arraye dar nazar gerfte mishe



// Khob Literal ha ham mesl Variable ye Type daran
// Esmeshun Suffix hast
// Suffix yani che? 
// Yani ye passvandi ke be Literal ezafe koni ta noe daghigh taresh ro be compiler begi

// Mesal vaghti minevisim 42 in compiler int dar nazar gerfte mishe mesal ma ba ye passvandi
// Mitunim begim in long int hast ya ....
// Mesal:

/*
#include <iostream>
int main() {

    // Integer Literal: 

    // Dar suffix ha bozorg kochak farghi nemikone vali bozorg behtar khanayi dare
    std::cout << "Int: " << 52 << '\n'; // Mouse rosh negah dari minevise ( int )
    std::cout << "Long: " << 56L << '\n'; // Ba ezafe kardan L jeloye adad hala negahdari
    // Minevise Long hameye passvand haro posht sar ham minevisam
    std::cout << "Long Long: " << 56LL << '\n'; 
    std::cout << "Unsigned: " << 54U << '\n'; // Inam Unsigned hast
    // Hala mitunim tarkib ham konim:
    std::cout << "Unsigned Long: " << 54UL << '\n';
    std::cout << "Unsigned Long Long: " << 54ULL << '\n';

    //--------------------------------------------------------------------------//

    // Floating-point Literal: 

    std::cout << "Double: " << 3.1 << '\n'; // Defaultesh ine
    std::cout << "Float: " << 2.6f << '\n'; // Ba ezafe kardan f joloye adad mishe float
    std::cout << "Long Double: " << 3.5L << '\n'; // Ba ezafe kardan L be adad ashari mishe long double
     
    //--------------------------------------------------------------------------//

    // Character: 
    // Male string neveshtam vali ba char toye daftar ono inja neminevisam 
    // Dar mabhas string male khode string migam
    // Deghat dashte bash suffix ha posht تک کدیشن hastand !!!!!
    std::cout << "Char: " << 'a' << '\n';
    std::cout << "char16_t: " << u'a' << '\n';
    std::cout << "char32_t: " << U'a' << '\n';
    std::cout << "wchar_t: " << L'a' << '\n';
    
    // Yek eshare am konam baraye string char suffix ha xD:
    const char* chr = "Salam"; // Mesl suffix haye bala mitunim baraye inam bezarim
    // Tosiye nemikonam ino chon khod string ye suffix makhsos dare
    // Vali man codesho minevisam
    const char16_t* chr1 = u"Salam"; 
    // doruste type daghigh minevisam vali suffix eshon nazarim error mide
    const char32_t* chr2 = U"Salam";
    const wchar_t* chr3 = L"Salam";
    std::cout << "Char-string: " << chr << '\n';
    std::cout << "Char16_t-string: " << chr1 << '\n';
    std::cout << "Char32_t-string: " << chr2 << '\n';
    std::cout << "wchar_t-string: " << chr3 << '\n';

    // Yeki am hast male UTF8 == UTF-8 encoded
    // In shayad be dard bekhore
    const char* utf_8 = u8"Salam";
    std::cout << "UTF-8: " << utf_8 << '\n';

    // in char* az zaban C be ers reside chon dar zaban C string nadarim
    // char* yani darim az esharegar ha estefade mikonim
    // Ke reshte ra be sorat arraye dar char negah midare

    // Ye seri tozihat ham dar daftar hast negah koni behtare

    // 2 Model ham mitunim double benevisim: 
    // 1- Ashari
    // 2- Scientific Notation
    // Ye yad avari az Scientific Notation:
    // Mesal in: 200.35
    double size = 2.0035e2;
    std::cout << "Scientific Notation: " << size << '\n';


    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Magic Number: 












































