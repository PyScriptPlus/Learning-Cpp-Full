// In The Name Of God
// Season 1:


/*--------------------------------------------------------------------------------------------------------------------*/


// in include baraye Library ha hast
// va ma inja omadim library <iostream> hamun Standard library hast ovardim
// In Library in emkan mide betunim dar Console chap konim

/* #include <iostream> */

// int main() Function hast function main() ke hatman bayad bashe
// Bad ina ham mitunim bazam Function add konim vali Avvalin
// Function bayad hatman main() bad mitunim dar function haye dg
// Har esmi bezarim

/* int main(){



} */

/*--------------------------------------------------------------------------------------------------------------------*/

/* #include <iostream>

using namespace std;

int main(){

// In code baraye chap hast az
// ke kalame std yek namespace hast
// Alan mitunim ba estefade az using namespace std;
// faghat cout << "----"; injuri benevisim
// std::cout << "Hello World";

// Khob in endl ye khat miyare payin in nabashe payin in harchi chap bashe
// Mire jelosh (endl) ham mishe ba ("\n") ham mishe
// in (endle) ye fargh asasi dar Flash kardan buffer ha hast
// Ke tozihat bishtar dar mored Buffer va Flash neveshtam hatman check shavad (S2)
cout << "Hello world" << endl;
cout << "Coming to soon" << "\n";
cout << "I'am Speed";

in return 0 minevisim ke barname adad 0 be system ersal kone barname bedon moshkel hast nanevisim
khob compiler C++ miad minevise dar posht sahne
age mesal return be joz 0 ye chi dg bod mesal return 1; return -1; .....
yani barname moshkel dare error dade

return 0;
}  */

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas Variables:

/* #include <iostream>

int main()
{
    //-------------///-------------//

    // Yek motaghayer ba adad sahih ba int neveshte mishe
    int x = 5;
    // chand model mitunim Variables benevisim
    int x, y;
    x = 14;
    y = 25;

    //-------------///-------------//

    int x = 5, y = 10;

    //-------------///-------------//

    // Baraye nevshtam adad ashari ham az double estefade mikonim

    double z = 2.41;
  
    //-------------///-------------//

    // Mesal: man ye Variables int neveshtam in payin be adad 14 ke esm variables R hast
    int R = 14;
    // Mikham in 14 taghir bedam bedon inke das bezanm be codesh 
    R = 15; // injuri :D
    // dobare :)
    R = -20;

    //-------------///-------------//
    
    // Baraye double ham hamintor 
    double q = 14.1;
    q = 9.14;

    //-------------///-------------//
   
    // Ye tozihat dar baraye Variables bedam
    // Heme jurie mishe nevesht vali moheme chejuri benevisi behtarinesh injurie
    // int x = 25; baraye khanayi behtar age taghir ham niyaz bod bia x = ***; tamam;
    // Tozihat asli ke Variable chejuri zakhire mishe dar koja va chejuri dar Daftar neveshte shode
    // Mahbas asli dar daftar hast ba Mesal in code ha

    //-------------///-------------//

    int x; // Be in Variable ha migan Tarif Variable bedon meghdar dahi avvaliye

    int x = 5; // Be in Variable ha migan (Initialize) yani Tarif Variable ba Meghdar dahi avvalie 

    extern int age; // Be in Variable ha migan (Declare) Yani Vaghti yek Variable Ya Tabe' ra e'lan declare mikonid
    // Be Compiler ya Interpreter migoyim in Variable vojud darad vali momken ast Meghdar dahi nashode

    int age = 18; // Be ina migan Variable (Define) shode

    //-------------///-------------//

    // Yek model ham Variable darim ke ghabel taghir ast 
    const int x = 5; // In const nemizare int dobare taghir bedim biaym masalan payin code benevisim
    // x = 10; dige in code error mide Compiler nemizare chon const hast 

    //-------------///-------------//

    // 4 Model Variable mitunim benevisim
    int c; Default Initialization
    int d = 5; Copy Initialization
    int e ( 9 ); direct Initialization
    int f { 7 }; uniform Initialization

    // Shayad begi in copy ba direct farghi nadare 
    // direct baraye Data Type haye pichide tar javabe behtar az Copy 

    // Khob badi ke unifrom hast ba korushe {} neveshtim ye bahs mofasal dare:
    // Mabhas syntax korushe hamun {} ya uniform Initialization:
    
    // Be 3 model mitunim benevisim in uniform
    // In 2 ta code payini shabih be haman har 2 ta 1 kari anjam midan vali behtare az avvali estefade konim
    // Manzuram ine ( int x {5};  )
    int x {2};
    int y = {3};

    // Yek nokte ham dare in uniform ba copy Initialize
    int x = 2.5;
    // In code copy Initialize miyad bad noghte hazf mikone khod Compiler on 2 minevise 
    // Vali dar uniform Initialize miyad Compiler error mide
    int x {2.5};

   
   // Khob ini ke bedon meghdar dahi avvalie neveshtim khod Compiler ino 0 minevise bezani
   // Chap kone adad 0 neshun mide
   // Agar taklif mohem nist khali mizarim vali na age vaghean mikhaym Value 0 bashe 
   // Behtare gharar bedim ( int a {0}; )
    int a {};


} */ 

/*--------------------------------------------------------------------------------------------------------------------*/

/*

// Mabhas Library <iostream>:
// In (io) mokhafafesh  i:(input) o:(output) 

// In Library baraye Vorudi khoruji hast ke ba mesal kod mifahmi
#include <iostream>
// Ye Library ham darim baraye neveshtan string
#include <string>

int main(){

    // std::cout << "Hello bro"; // inja yek Value dadim be cout ke dar Console neshun bede
    // In ( cout ) mokhafafesh ( Character Output )
    
    //-------------///-------------//

    //Ke mitunim chand model chap konim az Motaghayer Value begirim mesal:
    // int age = 17;
    // std::cout << "Your Age is: " << age << " Years old";
    
    //-------------///-------------//

    // std::string name = "Mohammad";
    // std::cout << "Your Name is: " << name;

    //-------------///-------------//

    // Khob mikham alan az Karbar vorudi daryaft konam (Input):
    // Input dar C++ miad az karbar Value daryaft mikone dar Variable mored nazar gharar mide
    // Mesal: 

    int age;
    // Avval bayad ye matni bashe karbar bedune chi vared kone mesal Enter Number: mesal injuri
    std::cout << "Enter your Age: ";
    // Mokhafaf ( cin ) ham ( Character Input ) hast.
    std::cin >> age;
    std::cout << "Your Age is: " << age;
    return 0;
    

    // Ye riz project Mikhaym ye barname benevisim 
    // Ke esm va sen karbar begire az khod karbar va dar Console chap kone: 

    int age;
    std::string name;
    std::cout << "Enter your FName: ";
    std::cin >> name;
    std::cout << "Enter your Age: ";
    std::cin >> age;
    std::cout << "Your name is " << name << " and your Age is " << age;

    return 0;



    // Nokte haye in mabhas va ye seri chizaye Mohem:

    // Ma omadim baraye in small project 2 ta Library add kardim 
    // <iostream> va <string> ke malome baraye chie bala ham neveshtam
    // Va Operator haye ( << ) va ( >> ) esm daran
    // Insertion operator ( << ) ke dar cout estefade mishe
    // Extraction operator ( >> ) ke dar cin estefade mishe

    // Mitunim 2 ta vorudi dar 1 code begirim
    // mesal std::cin >> age >> name;
  
} */


/*--------------------------------------------------------------------------------------------------------------------*/

 
// Mabhas hamishe Variables haro meghdar dahi avvali konim:


// Be Variable hayi ke meghdar dahi nashode migan (Uninitialized Variable)
// Khob chera migam meghdar dahi avvalie konim zira xD:
// Dar project haye bozorg Performance barname bala mire alaki
/* #include <iostream>

int main()
{
    // Mesal dar in code faghat Identifier neveshtim meghdar dahi nashode in alan chap ke mishe adad mokhtalef mide
    int x;
    std::cout << x;
} */

// Ehtemal inke dar vasat project Bug hayi be vojud biyare Debug kardanesh sakhte 
//


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas Raftar undefined behavior:

// Dar zaban C++ yek mafhum vojud dare be name 
// undefined behavior mokhafafesh UB
// raftar codi hast ke tavvasot zaban C++ be khobi ejra nemishe ya barname error mige bug dare
// Ya hamin mesal ghabli meghdar dahi avvalie nashe Variable performance mire bala bedon in ke befahmim
// Ya aslan barname ejra shode vali on chizi ke ma mikhaym nist 
// Momkene barname be khobi ta mesal 5Min ina kar kone ya hamun avval crash bede
// Ehtemal dare dar bazi az Compiler ha kar nakone raftar code c++ be khobi kar nemikone
// Va dalayel ziyazii ..............

// Natije:
// Baraye hamin bayad dar neveshtan code deghat konim ta az ro be ro shodan ba (undefined behavior) beparhizim



/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Literal:

// Be har adad sahih ya ashari ke dar yek Variable neveshte mishavad ( Integer Literal ) ( floating point  Literal ) 
// Be Reshte hayi ke dakhel ( " " ) neveshte mishavad ( string Literal migan )


// Be True and False ha ham migan ( Boolean Literal ) 
// Be char ha ham migan ( character Literal ) 


/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Operators:


// Dar zaban C++ Operator hayi besiyar ziadi darim ke alan ye seria esm mibaram

// Amalgar haye mohasebati (Arithmetic Operators)


// Operator Jam' ( + ) : Addition
// Operator Tarfigh ( - ) : Subtraction
// Operator Zarb ( * ) : Multiplication
// Operator Taghsim ( / ) : Division
// Operator Baghimande ( % ) : Modulo

// Ye seri Operator ha ham hastan ziade albate goftam ye seria esm mibaram:

// Operator Mosavi ( = ) : Assignment
// Operator Barabari ( == ) : Equality
// Operator ( << ) : Insertion
// Operator ( >> ) : Extraction

// Ye seri Operator ha ham hastan ke ba code neveshte mishan mesal:
// new , delete , throw


// 3 Model operator darim:

// 1- Unary Operator: 

// Ina Reverse hamun معکوس Mesal: 

// Inpur ma bod 5 khoruji -5 :D mishe Reverse

/* #include <iostream>

int main()
{

    int x = 5;

    std::cout << -x;
    return 0;

}  */



/* #include <iostream>

int main()
{

    int x = 5;
    x++; // Afzayesh yek Vahed 
    x--; // Kahesh yek vahed
    std::cout << -x;
    return 0;

} */


// ++ (Increment)
// -- (Decrement)

//*******************************************/

// 2- Binary Operator:

// Inam alamgar haye Mohasebati , Moghayesei ,  Manteghi , (Biti , Takhsis) in 2 ta toye parantez 
// andakhtam daghighan nemidunam chiye

// In operator 2 ta amalvand daryaft mikone Left AND Right 
// chap va rast mesal:   2 + 4 

//*******************************************/

// 3- Ternary Operator: 

// In ham bar roye 3 Amalvand anjam mide 
// Amalvand ha mitunam bar roye ham janzir beshanavad mesal:
// x + y * k



/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Ebarat:

// Dar zaban C++ ye chizi darim be esm: 
// Expression ke tarkibi az :
// Literal , Variable , Operations , Function call

// Be proseye Ejra shodan ( Expression ) migan ( Evalutaion ) va be meghdari ke tolid mikone migan ( Result )

// Har meghdar sabeti ke dar barname gharar midim Literal hast Mesal:
// 2 yek Literal Integer hast ke hamin 2 mitunim begim yek Expression hast
// Ya ( " " ) ham mishe goft yek Expression hast chon Literal String hast 

// Goftim Tarkib haye Expression:
// Literal ha hastan , Variable ha , Operations , Function Call

//**************** */
// int x = 5; 
// 2 * x + 15; Kol in yek Expression hast
//**************** */


// Khob berim az yek goshe Function ha tarif konim badan mofasal tozih dade mishe

// Esm Funcation delkhah
// Va harja Function mamad seda bezanim code haye tosh ejra mishan Mesal:

/* #include <iostream>

int mamad()
{

    return 5;

}

int main()
{

    int x = 30;
    std::cout <<   ((1 * x) + 10) / mamad() << std::endl;
    // Har 2 ta Halat mishe : 
    // std::cout <<   (1 * x +10) / mamad() << std::endl;
    return 0;

} */


// Injurie :) Function 



/*--------------------------------------------------------------------------------------------------------------------*/

// Payan Season 1

// Mas'ale: Barnameyi benevis adadi ra az karbar daryaft kone ba 2 barabar kone va dar console chap kone


#include <iostream>

using namespace std;

int main()
{

    int x;
    cout << "Enter your Number pleas: ";
    cin >> x;
    cout << "Is your Number: " << x * 2 << endl;

    return 0;




}




