// In The Name Of God
// Season 2:


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas Function:

// Toye Function statement hayi vojud darad ke ya haman code hayi vojud darad ke
// Az bala ta payin be tartib ejra mishavand ke Hadaf ( Goal ) moshakhasi darand
// Va ghabeliyat estefade mojadad darand ( Reusibility )

// Ghablan ham goftam mohemtarin function main() hast hatman bayad bashe

// Dar zaban C++ hamishe ejraye Function az main() start mishe
// Tabe' ya haman Function main() noghte shoru barname hast va avvalin tabe' ast ke ejra mishe

// Sayer Function ha dar sorati ejra mishavand ke az dakhel main() ya az Function digar farakhani (Call) shavand


// Nokte! : Agar Tabe' digari tarif shode bashe vali dar main()ya tabe' digari farakhani nashavand hargez ejra nemishe

//********************* */

// Question: Aslan chera Function haye dige dar barname ijad mikonim be che dardi mikhore ???

// Agar barname ma har cheghadr bozorg tar bozorg tar beshe  hameye code haro dar Function main()
// Gharar bedim modiriyat code hamon sakht tar mikone va khanayi code hamon payin miyavarad

// Mitunim ba Funcion barname mon ro be bakhsh haye kochektari beshkonim be in sorat sazmandegi va ya test va sayer ....
// Rahat tar mikone

//********************* */

// Ye seri Function ha az ghabl taris shode va amade estefade ast
// Va khodemun ham mitunim Function haye khodemun ro tarif vaestefade konim
// Be Function hayi ke tavasot khodemun ijad mishe migan : user-defined-function

//********************* */

// Syntax Function:

// Ebteda bayad return type moshakhas shavad va ba yek identifier() va baad ham Bracket korushe {}
// Ke daron Bracket statement hamon ya haman code hamon gharar migire

/* Type identifier()
{


}  */

// Dakhek korushe mishe: Body Function ya haman Badane Function

//********************* */

// Mabhas Void:

// void ke return-type Function hast ke hich bazgashti nadarad
// Tabe' void dar C++ be ma'naye tabeyi hast ke hich meghdari bazgasht (return) nemide

//********************* */

// Chera az Function void estefade mishavad va dar koja ha bishtar estefade mishavad:
// Baraye functioni ke hadaf anha anjam amaliyat ast (Mesl chap yek payam ya Taghir vaziyat barname)
// Va niyazi be baz gardani meghdar nist

//********************* */


// Mesal codi (Sahih va Ghalat):

/* #include <iostream>

void mamad()
{
    return; // In doruste
}

void ali()
{
    return 5; // Error mide chon void hich meghdar bazgashti nadard
} */

//******************************************************************* */

// Mesal codi:
// In code Trace kon dar Visual Stadiu bebin CPU chejuri inaro khat be khat ejra mikone mohemeee

/* #include <iostream>

void planA();
void planB();

int main()
{
    std::cout << "Start main()\n";
    planA();
    std::cout << "Ending main()";
}

void planA()
{
    std::cout << "Start A\n";
    planB();
    std::cout << "Ending A\n";

}

void planB()
{
    std::cout << "Start B\n";
} */


// Fargh code bala ba payini:

// Dar in code on Function hayi ke Farakhani (Call) shode bala tar gharar migiran ta ejra shan
// Vali dar balayi faghat balaye main() (Declare) e'lan kardam kar konan

/* #include <iostream>

void planB()
{
    std::cout << "Start B\n";
}

void planA()
{
    std::cout << "Start A\n";
    planB();
    std::cout << "Ending A\n";

}


int main()
{
    std::cout << "Start main()\n";
    planA();
    std::cout << "Ending main()";
} */


/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Bazgardandane Khoruji:

// Mikhaym ye barname benevisim ke adad az karbar begire tabdil kone be 2x kone 
// Ba estefade az function 

/* #include <iostream>


int getNumber()
{

    int x;
    std::cout << "Enter your Number: ";
    std::cin >> x;
    return x;

}

int main()
{

    int y = getNumber();
    std::cout << "Your Number is: " << y * 2;
    return 0;

}  */


// Dar in code bala ye function az returntype int ijad kardim
// ke meghdari ra be ma baz migardanad ( return x; )


// Variable hayi ke dar dakhel yek function ijad mishe faghat dar on function
// Ijad shode dast rast hast


// Kolan 2 model function darim az noe (void va int,float,string......)


// Agar dar function hayi ke meghdar ro barmigardone 
// return; injuri khali bashe moshkel (Undefined Behavior) vojud miyare (UB)




// va Agar return; dasti benevisim dar on function bad on return hich codi ejra nemishe bad on return !!!!!!!!

/* #include <iostream>
void test(int x)
{

    std::cout << "Hi";
    return;
    std::cin >> x;

} */



/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Parameter va Argument: 


// Khob mikham ye  barname benevisam ba estefade az Parameter va Argument
// Ke az karbar adad begire dar ye function va dar ye function chap anjam she on adad bayad 2x beshe 
// Ba deghat negah kon bebin mikham chika konam

/* #include <iostream>
#include <string>

int getNumber(int num) // Be ini ke toye parantez ( *** ) neveshte mishe migan parameter
// Ke chand model parameter mitunim benevisim Variable haye mokhtalef
// int , char , float , double , string
{
    
    std::cout << "Enter your Number: ";
    std::cin >> num;
    return num;

}

void printer(int y) // Inam mesl on balayi ke tozih dadam parameter hast
{

    std::cout << "Your number is: " << y * 2;
    return;

}

int main()
{

    int x = getNumber(x); // Hala toye in parantez (x) ke gharar gerfte Argument hast esmesh
    // Va kamelan ham eshtebah hast Undefined Behavior rokh mide chon malom nist x chiye ke mitunim 0 ghrar bedim
    // int x = getNumber(0);
    printer(x); // Inam argument hast ke miad meghdar getNumber mide be Function printer(x)
    return 0;


} */

/************************************************ */

/* #include <iostream>
#include <string>

int getNumber()
{
    int num;
    std::cout << "Enter your Number: ";
    std::cin >> num;
    return num;

}

void printer(int y)
{

    std::cout << "Your number is: " << y * 2;
    return;

}

int main()
{

    int x = getNumber();
    printer(x);
    return 0;


} */


/************************************************ */


// In code payini behtar az on balayi hast avvalie manzurame

/* #include <iostream>
#include <string>

int getNumber(int num)
{
    
    std::cout << "Enter your Number: ";
    std::cin >> num;
    return num;

}

void printer(int y)
{

    std::cout << "Your number is: " << y * 2;
    return;

}

int main()
{

    int x = getNumber(0);
    printer(x);
    return 0;


} */



// Chand ta so'al tozih bedim:
// Meghdar Parameter az koja miad ? 
// Tavasot Caller
// Nokte: har agar parameter ma masalan injurie (int x, float y , std::string k);
// Argument bayad be tartib in bashe mesal (5 , 2.41 , "Salam");



// Dar Argument ham mitunim Function seda bezanim mesal codi benezanm: 

/* #include <iostream>
#include <string>
using namespace std;

std::string funce(){

    std::string x;
    std::cout << "Enter your name: ";
    std::getline(std::cin , x);
    return x;

}

void bakh(string x)
{

    std::cout << "Your Name is: " << x;
    return;

}

int main()
{

    bakh(funce()); // Mesl in :)
    return 0;

} */



/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas ( Local Variables ):

// Be Variable hayi gofte mishavad ke dakhel yek function neveshte mishavad 
// Ya dakhel Parameter on Function mesal:

/* int main(int y) // Local Variables
{

    int x; // Local Variables

} */

// Tarif ( Local Variable ) ? Shamel 2 mored hast:
// Parameter yek function va Variables ke daron yek function tarif mishavad


// Yek bahs ( Life Time ) hast vojud darad: 
// Be zaban sade tol omr yek Variable

// Ke 1 Variable koja ijad mishe va ta koja edame darad va koja tamom mishe

// Mesal negah:

/* int main()
{

    int x; // Inja iajad mishe taaa...
    return 0;

} */ // In Variable inja tamom mishe dg dar hale runtime


// 2 mored  ejrayi darim:
// runTime : runtime zamani ast ke barname dar hal ejra hast
// CompileTime : Compiletime zamani ast ke code ma dar hale tabdil shodan be ejraye mashin hast

// Lifetime dar zaman runtime etefagh mioftad

// Lifetime == runtime

// Hata 1000 Line am code dar dakhel on Function ke Variables neveshtim dashte bashim 
// In Variable ta compiler be bracket akhari nareside bashe on Variable zende ast };


/*--------------------------------------------------------------------------------------------------------------------*/


// In code ye tahgig kon chera Variable kharej az function vali kar mikone toye function
// #include <iostream>


// int x = 5;
// int main()
// {
//  std::cout << x;
// }

// In int x = 5; 
// baraye global hast dar ayande bahash kar darim 

/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Scope OR Local Scope

// Scope: Yek Identifier moshakhas mikonad ke on Identifier dar koja ghabel dastras hast va gabel estefade hast

// Har vaght goftim ( Inscope ) yani felaan Variable ya felaan Identifier dar dastras hast

// Hala bar aks

// Har vaght goftim ( out of scope ) yani felaan Variable ya felaan Identifier az dastras kharej hast va ghabel estefade nist

// Hala in ( Scope ) marbod be Compiletime hast 
// Moghe Compiletime etefagh mioftad


// Age ma biaym yek Variable ya Identifier ke ( out of scope ) bashe kharej az dastras bashe 
// In Compiletime miad error mide in Variable ya Identifier ro nadarim ghabel dast ras nist



// Yek mesal bezanm az ( inscope ) va out of ( scope ) ke chejurie

/* int myfunction(int x){


// *********  inscope *********



} */ // ********* out of scope *********

// ( inscope ) faghat dakhel on on function ke tarif shode mitune estefade kon kharej az on ( out of scope ) mishe

// Ye mesal dige 



// ********* out of scope *********
/* int main() // ********* out of scope *********
{

    int x;
    // ********* Inscope *********

} */ // ********* out of scope *********



// Yek nokte mohem harjaye on function ya global mituni Variable tarif koni harja lazem shod
// Mohem nist bala bashe ya payin 

// Mesal: 

/* #include <iostream>

int main()
{

    
    std::cout << "Enter your Name: ";
    int x; // Harja lazem dashti tarif kon hatman nabayad bala ya payin tarif koni harja dos dari va lazem hast
    std::cin >> x;

    int y; // Harja lazem bod ******
    y = 5;
    std::cout << y;
    
    return 0;
}  */


/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas: Chera Function ha mofid hastan ?

// So'ali ke baraye aksare C++ kara pish miad:
// Aya mishe hameye code hamon ro toye yek function benevis hamon main() ?
// Bayad begam bale mishe vali dar project haye bozorg modiriyat code ha Sazmandehi shon 
// Doshvar mishe baraye hamin code hamon taghsim bandi mikonim be Function ha
// Modularity ماژولار taghsim bandi code ha 


//Function ha daraye ( Reusibility ) hastan yani estefade mojadad ma mitunin function mored nazar 
// Harchand bar bekhaym dar jahaye mokhtalef estefade konim chand bar estefade konim


// Mored badi ( Extensibility ) hastesh:
// Be ma emkan mide dar barname khodemun Features ezafe konim hamon taghirat ya vizhegi 
// dar yek function ijad mikonim dige lazem kol barname berizim be ham



// Ye chizi hast be name ( Abstraction ) ke ma daron function midonim maslan in code ma vorudi migire khoruji mide
// Vali az posht parde on khabar nadarim


// Ye chiz jaleb dar cout or cin az ina estefade mikonim dige >> AND << midunesti ina Operator mahsob mishan
// Stream Insertion
// Stream Extraction
// Va az posht parde ina khabar nadarim

/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Cheghone az Function ha be dorusti estefade konim?

// Yeki az mohem tarin bahs ha ine ke key va koja be dorusti az Function estefade konim 
// Khob agar dar hale code nevisi didam yeja mashghon hey copy paste hastam 
// Biaym ono dar yek Function benevisim va on Function ro Call konim harja dos darim estefade konim
// Va ya agar dar barname heyn gerftan vorudi az karbar hastim kheyli jaha darim az karbar 
// Input migirim baiym baraye on Function tarif konim Caller konim 

// Agar dar yek Function bishtar code nevestim masalan bishtar az 20Line OR  30Line 
// Baraye inke sholugh nashe ya pichide nashe va Sazmandehi rahat tari dashte bashim biaym on Function beshkonim 
// Be Function haye Kocheck tari


// Ye mesal bezanim: Ma mikhaym ye barname benevisim adad az kochektar be bozorgtar tartib kone
// Va chap koneeee

// Khob inja 2 kar shod ham tartib shod ham chap kon
// Khob mitunim dar yek function adad tartib konim
// Dar yek Function dige ham chap 
// Behtar dar har Function 1 kar anjam shavad **

/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Forward Declaration:

// Ma 2 ta mored darim be name Define va Declare 

// In Forward Declatarion man hamishe estefade mikonam ( e'lam kardane )

// Khob in Forward Decelaration chiye ke man hamishe estefade mikonam
// Hamon e'lam kardane 
// Khob ma goftim Compiler code maro az bala be payin Compile mikone dorust? Afarin
// Khob age int main() bala benevisim 
// Va ye function dakhel main caller konim 
// Ke on Function payin main gharar dare 
// Compiler Error mide
// Code payini ba deghat negah kon kar nemikone chon 
// mamad() nemishnase mige e'lam nakardin Declare nashode rah hal chiye?

/* #include <iostream>

int main()
{
    mamad();
    return 0;

}

void mamad(){

    std::cout << "Hello World";
    return;

} */

// Khob 2 ta rah hal dare :
// Avvalin rah hal ine ke mamad() bala tar az function main() benevisim 
// Yani avval Function mamad() payinesh main() 
// Compiler ke az bala be payin compile mikone beshnase 

// Vali in rah tosiye aslan nemishe va dar hameja ham nemishe estefade kard chera?
// Chon agar ma dar codemun 2 ta function dashte bashim maslan
// Function a()
// Function b()
// Toye function a() biaym function b() ro caller konim va hamintor toye 
// Function b() baiym function a() ro caller konim va har kodum balaye ham bashan error declared mide
// Aslan kar nemikone
// Pas mirim rah hal dovvom

// Rah hal dovvom chiye: 
// Bayad az Forward Declaration estefade konim
// To in code payin yek Identifier chap va getValue darim mikhaym piyade sazi in ro ghabl az Define shodan Declare konim
// code kami pichide neveshtam vali khob behtar shod

/* #include <iostream>

int getValue(); //Declare OR // Function prototype
void mamad(int x); //Declare // Function prototype
// in void mamad() chon Parameter dare bayad onam dar hale Declare kardan benevisi int x ya khod int 
// Ham benevisi mishe lazem nist Identifier sho benevisi agar 2 ta bod bayad 2 tasham benevisi
// mesal:  void mamad(int x , int y);

int main()
{

    int x = getValue();
    mamad(x);
    return 0;

}

int getValue()
{

    int age;
    std::cout << "Sen khod ra vared kon: ";
    std::cin >> age;
    return age;

}

void mamad(int x)
{

    std::cout << "Your Age is: " << x;
    return;

} */


// Be onayi ke Declare mikonim
// Migan ( Function prototype )

// In mabhas behtar ast ham inja ham Daftar negah koni toye daftar S3 hast kheyli am moheme

// Va ye chiz jaleb shayad am mohem
// ( Function prototype ) faghat dar zaban haye C , C++ vojud darad 
// Toye on yeki zaban ha aslan vojud nadarad faghat dar in 2 zaban vojud darad


// Code payin deghat kon makhsosan che errori mide:
// In error mide: 
// :Season2.cpp:(.text+0xe): undefined reference to `mamad()'
// collect2.exe: error: ld returned 1 exit status
// Khob yek nemune az error Linker hast yani Compiler be dorusti tajziye tafsir karde kar karde
// Vali man faghat Declare kardan Define nakardam in mamad() ro 
// neveshte khodesh: undefined refrence to mamad()
// Emkan hast piyade sazi function mamad() kardim define kardim 
// Vali on ghesmat code Comment kardim // OR /* */


/* #include <iostream>

void mamad(); // Function prototype

int main()
{
    mamad(); // Age caller nakonim in error nemishe
    std::cout << "Hello";
    return 0;
} */

// No definition mamad() .............................


/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas Definition VS Declaration


// Dar in jalase mikhaym amigh be in 2 ta pey bebarim va tafavot asli beyn inha ro barresi konim

// Khob...

// Definition 2 kar anjam mide نمونه سازی یا پیاده سازی =
// پیاده سازی = Implemention
// OR
// نمونه سازی = Instantiation

// Chera OR goftim?
// Chon Identifier ma ham mitune Variable , Function , Type mitune bashe

// int x; Variable
// void myFunc(){} Function
// void myFunc(int x) Type hamon parameter 

// Agar Identifier ma Function ya Type bashe kar Implementation anjam mide
// Khob vaghti Identifier ma Variable bashe kar Instantiation anjam mide

// Mesal: 


/* int myFunc(int y) // Implementation ham Function , Type shamel mishe
{
    y = 10; // None
    int x = 5; // Instantiation
    return x;
} */

// Nokte: Agar Identifier ke Define nashode biaym estefade konim Error Linker



//*******************//

// Ye chiz kheyli mohem darim toye zaban C++ be name: 

// ODR = One Definition Rule

// Kholase migam aslish toye daftar ast

// Yek Variable ya Function mitune faghat ye bar define she : Yani che? 

/* 
int x;
int x; // ODR 


int add(){


}
int add(){ // ODR: Error mide


}
*/
// Faghat 1 bar
// Manzur ODR ine

// Ye seri rah hal dare ba const va namespace ina ke toye daftar hast moheme ye negah kon


// Khob berim soragh Declaration:

// Tarif Declaration: Yek statement hast ke az vojud yek Function ya Variable Compiler ro motalee' مطلع mikone

// Mesal: 

// int add(); // Forward Declaration
// int x; // Declare in hich rabti nadare in global hast ke ayande migam

// Kholase Declaration: 
// Saket kardan Compiler az Error ha hast.



// Ye chiz mohem dar zaban C++:
// Hameye Definition ha Declaration ham hastan

// Chera ya aslan yani chi?
// Vaghti yek Variable ya Function ro define mikone khodkar bazi moghe ha ham Declaration mishe 
// Khod be khod e'lam mishe

// int x; Define and Declare
// extern int x; Just Declare
//void mamad(){} : Define and Declare

// Khob hala be Declaration hayi ke Definition nistand migan Pure Declaration ya Forward Declaration

// ODR hich rabti Declaration nadare !!!!!!!!!
// Chera? 

/*
void mamad();
void mamad();
void mamad();
void mamad();
void mamad();
void mamad();
*/

// Hezar baram benevisi Compiler be hich vajh error nemide :)

// extern baraye e'lam kardan hast ke lazem mishe makhsosan vaghti 2 ta file dari 
// Mikhay mesal az file1.cpp ke ye function ya Variable define kardi ro dar file2.cpp estefade koni
// mesal : extern int x; e'lam mikoni dar file2.cpp


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Neveshtan code dar chandin file 

// Ino anjam dadam ( file1.cpp and file2.cpp ) dar hamin folder ( C++ Full Project hast )

// Kami tozih midam chejuri 
// code hato minevisi vaghti mikhay compile koni 2 tash yeja bashe yek folder 
// dar Terminal ba cmd ( g++ file1.cpp file2.cpp -o app-name )
// -o ina nazari hamin base ( g++ file1.cpp file2.cpp )

// Goftam dige ba extern mituni dar inja mesal estefade koni

// Ye coding riz konim chejurie 
// Mikham esm karbar dar File1.cpp begiram dar File2.cpp chap kone

// File1.cpp:

/* #include <iostream>
#include <string>

std::string getName()
{

    std::string Fname;
    std::cout << "Enter your Name: ";
    std::getline(std::cin , Fname);
    return Fname;

} */

// File2.cpp:
/* #include <iostream>
#include <string>

extern std::string getName();

int main()
{

    std::string x = getName();
    std::cout << "Your Name is: " << x;
    return 0;
} */ 

// hamin test kardam kar mikone toye test1.cpp test2.cpp

// Vaghti code ro neveshti khasti Compile koni run koni ina

// Mesal: g++ test1.cpp test2.cpp
// Enter bezani ye file ijad mishe ba name default age nazari default mide a.exe
// Terminam benevis ./a.exe


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas Tadakhol Asami OR Collision:

// تداخل اسامی = Name Collision OR Name Clashing

// Khob in Collision chiye?
// vaghti 2 ta Function dar file haye jodagone mesal file1.cpp file2.cpp Identifier moshabeh dashte bashan 
// Hengam link g++ file1.cpp file2.cpp error mide linker 

// Va hamintor baraye Variable ham agar Identifier mesl ham bashe hamin etefagh miofte
// Hala Variable ye chiz khobi dare ke marbot be Scope ha mishe agar Variable be joz global
// Daron Function ina bashe error nemide 
// Hala baraye global ham rah hal dare namespace ke ayande mipardazim amigh

// Hala baraye Function ham rah hal dare ? 
// Chon dige nemishe Function toye ye Function dige benevisim dar zaban haye dige mishe vali toye
// C++ , C nemishe

// Hamon rah hal namespace baraye inam javabe vali dar ayande mipardazim 

// Khob ma in mesal Collision baraye agar chand ta file dashte bashim Identifier mesl ham bashan Error mide Linker
// Hala toye 1 file bashe chi?
// On moghe Compiler miad jelosho migire

// Error Linker: Duplicate symbol: esm on Identifier
// Error Compiler: Error redefiniton of esm on Identifier


// Mesal codi bezanim:

// Linker: 

// File1.cpp: 

/* void mamad() // Collision Linker
{
    
}
int main()
{

    int x;

}

// File2.Cpp

void mamad() // Collision Linker
{
    
    int x; // In eshkal nadare chon toye scope 

} */


// Compiler:

// main.cpp

/* int x = 10; // Error
int x = 15; // Error
int myFunc() // Collision Compiler
{

}

int myFunc() // Collision Compiler
{
    
} */



/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas: namespace 

// Dar in mabhas gharar nist be tor amigh bepardazim felan

// namespace chist ? yek nahiye ke be ma emkan mide esm haye khodemun ke nazaremun hast harchi bekhaym tosh gharar bedim
// va Hadafesham jelogiri az Collision ha hast

// namespace dar vaghe' yek scope mide be ma ke mitunim har chizi tosh gharar bedim va negaran Collision ham nabashim

// Inam begam daron namespace ha mitunim Function , Class , Variable estefade konim

// Felan dar in had bedon: ke namespace ha baraye jologiri az Collision ha hast

/*--------------------------------------------------------------------------------------------------------------------*/


// Mabhas: Global scope ya Global namespace

// Be Variable , Function ya Class va ....
// Dakhel hich chizi tarif nashode global namespace migan mesal:

// int x = 10; // Alan in Variable na dakhel main hast na function na class kaf vscode hast :D 
// Be in kaf vscode ke code minevisim migan Global namespace


// Inam begam har chizi ke bekhay nemishe toye Global namespace nevesht 
// Faghat Definition va Declaration mituni dar global benevisi

// Mesal:

// int x = 5; // Global Define
// extern int x; // Global Declare
// int myfunc(); // Global Declare
// int myfunc(){} // Global Define

// x = 5; // Dige in nemishe in Executable statement hast 
// ya in :
// x = 5 * 4;
// 2 * 3 + x; // Expression


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: std namespace

// Dar avayel zaban C++ be khosus standard C++98 ya ghabl tar 
// Niyaz nabod baraye cin , cout , cerr , clog ya ....
// avvaleshon std:: benevisi mostaghim:

#if 0

cout << "Hello World!";

#endif

// be in #if 0 va #endif tavajoh nakon dar jalase ayande migam

// Chera std ovaradan ? 

// Chon har Standard Library va Identifier ke mineveshtim hamash dakhel global namespace bod
// In dar project haye bozorg Collision be vojud miovard jolo tar ye mesal kochik mizanam

// Omadan baraye jologir az in etefagh Standard Library montaghel kardan be namespace be name ( std )

// Alan cout khali benevisim Compiler miyad dar Global namespace donbalesh migarde mibine nist Error mide
// Baraye hamin az std estefade mikonim
// std:: inayi ke joloye std hast ( :: ) esmesh ( Scope Resolution Operator ) hast
// Aslan karesh chiye? Be ma ejaze mide be object cout ya cin va ....
// dar namespace std tarif shode dast rasi peyda konim.


// Ye rah hal dare ke dige lazem nist benevisim std::cout
// Haminjuri mostaghim mishe nevesht
// Vali pishnahad nemishe !!!!!!
// Migam chera ?
// Be neveshtan using namespace std; dige lazem nist std benevisi code zir mesal: 

/*
#include <iostream>
using namespace std;

int main()
{
    cout << "Test done.";
}
*/

// Khob hala chera pishnahad nemishe ? 
// Dar project haye bozorg 100% Collision be vojud miare

// Ye mesal mizanam code zir bebin: 
/*
#include <iostream>
using namespace std;


int main()
{
    // Kamel malome dige lazem nist tozih bedam :)
    // Bejaye in ke biad chapesh kone miad Variable int estefade mikonam
    int cout = 6;
    cout << "Test"; // Error ********
    
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Preprocessor OR پیش پردازنده

// Ghabl az in ke code ma compiler she bayad az Translation ubur kone
// In Translation yek bakhsh dare be name Preprocessing ke miyad kar
// Preprocessor anjam mide ke in Preprocessor ghabl az Compiler ejra mishe
// In Preprocessor miyad az bala be payin scan mikone donbal ( Preprocessor Directive ) ha migarde
// Hala in Directive chiye? 
// Yek Instruction hayi hast ke shoruesh ba # hast va be hich vajh dar akhareshun ya harja ( ; ) Semicolon nadarand !!!
// Yek nemune #include 

// Ye chizi ke mikhaym yad begirim marbot be in bahs mishe ( Macro ) hast
// #define 
// Ke dar zaban C++ 2 noe Macro darim:
// Object-Like Macro
// Function-Like Macro

// Ke avval Object-Like migam kheyli rahate mesal
// Neveshtarish bayad injuri bashe mesl payin
// #define Identifier "String Literal"
// #define Identifier "Integer Literal"
// #define IDENTIFIER 
// Hamishe Identifier haye macro ya preprocessor ha bozorg benevis

// Yek mesal kamel az estefadash bezanim
/*
#include <iostream>
#define SEASON "Mohammad"
#define SEASON_2 52
int main()
{
    std::cout << SEASON;
    std::cout << SEASON_2;
    return 0;
}
*/

// Khob berim sorakh Function-Like Macro:

// In Function-Like Macro hamon kar Function haye mamoli mikone vali khob yad gerftanesh zarar nadare :)
// Mitunim MIN , MAX benevis bahash
// Ya mitunim bejaye std::cout << "Hello"; mesl Python konim print("salam");
// cin ham mitunim mesl input konim :D
// Mesal :

/*
#include <iostream>
#define MAX(m , s)  ((m > s) ? (m) : (s))
#define MIN(a , b) ((a < b) ? (a) : (b))
#define Printer(str) std::cout << (str) << "\n"
#define Input(str) std::cin >> (str)

int main()
{

    int x = 50;
    int y = 99;
    int a;
    Printer("Bozorg tarin va kochek tarin adad shoma: ");
    Input(a); // Input haminjuri gozashtam bebini kar mikone
    Printer(MAX(x , y));
    Printer(MIN(x , y));
    return 0;

}
*/


// Ziad mishe Function-Like Macro nevesht mohem hash ine baz lazem shod toye StackOverFlow negah kon ya har ja 

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Baghiye Directive ha

// Directive ba'adi Conditional Compilation hast hamon shart ha vali ba Preprocessor

// Nahve neveshtar Conditional Compilation :
#define HELLO
#ifdef HELLO // dar in shart migim agar shart bargarar hast ejra sho ke bale HELLO tarif kardim bala

#endif // Har Conditional Compilation bayad ba #endif baste she

/*************************************************/

#ifndef KHURUJI // Dar in shart migim agar shart bar garar nabod ejra shod (ifnotdef)

#endif // Har Conditional Compilation bayad ba #endif baste she

// Khob berim ba in shart ha ye mesal benezanim riz
/*
#include <iostream>

int main(){

    #ifndef KILO
    std::cout << "Hello bro";
    #endif
    
    return 0;

}

*/

// Khob yedune ham darim #if

// Chand ta mesal codi bezanim
/*
#include <iostream>

int main(){

    #define CHECK 58
    #if CHECK == 58 // Inja migim age in Identifier Check bara bar bod ba 58 shart edame dashte bashe
    std::cout << CHECK;
    #endif

    #if 0 
    Inja vaghti if bara bar bashe ba 0 engar comment mizari hichi kar nemikone
    mishe be onvan Comment azash estefade kard.
    #endif
    return 0;

}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Scope Directive ha

// Khob Scope Directive ha ba zaban C++ kolan fargh dare 
// Yani Preprocessor ha aslan ghanon ya gavae'd zaban C++ nemidunan

// Mesal:
/*
#include <iostream>
int foo()
{

    #define SCOPE 5 // Macro inja tarif shode bayad scope kolan inja bashe vali dar main 
    // bedon call Function foo tunestam dast rasi dashte basham behesh :) 
    // Vas hamin migam fargh mikone
    

}
int main()
{
    std::cout << SCOPE;

}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas Header file ha:

// Ke codesho neveshtam dar Folder ( Header ha )

// 2 3 ta chiz ke gofte nashode migam faghat boro code hasho negah kon

// Aslan Header File ha chiye?
// Be ma komak mikone dar project haye bozorg be jaye in ke 
// Forward Declaration ye seri Function ha class va .....
// Yeki yeki benevisim mindazim toye Header File 
// On Header File har ja niyaz bod Include mikonim estefade mikonim

// Passvand haye Header file .h va .hpp hast chera 2 tas?
// .h dar zaban C ham estefade mishe va toye C++ ham mishe estefade kard
// Vali .hpp faghat baraye zaban C++ hast

// Faghat Forward Declaration nist 
// Mishe Preprocessor nevesht ke jolo tar migam
// Definition ham mishe vali tosiye nemishe dar Header File

// Neveshtan code ziad dar Header File Barname sangin tar mishe !!!!!!!

// 2 ta chiz hast dar Header File ha bodanesh zaruriye behtare komak mikone be bug nakhorim

// Header Content // In ke goftam mitunim Declare va Define va Preprocessor benevisim
// Header Guard // In jalase ba'ad migam


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas Angle Brackets VS Double quotation

// Agar deghat dashte bashi dar Folder Header Ha 
// Baraye ( iostream Angle Brackets ) mizarim ( < > )
// Vali baraye Header file hayi ke khodemun sakhtim (Double quotation) gozashtim ( " " )

// Chera???

// Dar iostream ya algorithm ya ...
// Bayad az < > estefade konim baraye in ke ina header haye standard hastan
// Vaghti < > mizarim be Compiler migim in tavasot ma neveshte nashode
// Agar az in estefade konim < > yek list vojud dare be name ( include directories ) ke Preprocessor 
// Mire az onja donbalesh migarde

// Vazife peyda kardan file haye Header dar C++ be ohde Preprocessor hast پیش پردازنده

// Vaghti  " " estefade mikonim avval be file haye khodam negah mikone bebin Header File mitune peyda kone
// Age na bad mire soragh include directories

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: iostream.h

// Bayad dar in mabhas az tarikhche C++ kami harf bezanim

// Dar Standard Library C++98 ya gahbl tar baraye estefade az iostream ya algorithm va .....
// Bayad az passvand .h estefade mikardim mesal:
// #include <iostream.h>
// Header haye ghadimi be ketabkhane khavi mesl libstdc++ , MSVC vabaste bod
// Vali Header haye jadid bedon passvand .h ba estefade az fazaye namespace standrad mesl std tarif shode.
// Ta ba memari modern tar va gahbel haml tar sazegar shavad
// Tadakhol asami be vojud miovard omadan in standard Library haro joda kardan
// Hatman say kon az noskhe haye jadid tar bedon .h estefade kon
// #include <iostream>

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Header Guard 

// Code haye in project dar folder haye ( Header Guard ) va ( Heade Guard be sabke dige ) va (Header_Guard_Visual_Studio)

// Ma ghablan goftim har Identifier mitune yek bar define she mesal ham zadim 2 ta payin zadam
// int x;
// int x;
// void mamad(){
//};
// void mamad(){
//};

//Error mide: 2 ta mesl ham Identifier dashte bashan Error Duplicate

// Hala in Duplicate dar Header File ha ham rokh mide
// Albate vas ma niyaz ziad nist chon ma mikhaym faghat dar Header File ha 
// Forward Declaration benevisim
//  Vali hala dige code hasho nevestam on folder hayi ke bala goftam boro bebin fek konam tozihat ham dadam kami

// Dar Header File ha say kon faghat Preporcessor va Declaration estefade kon.
// ( Definition ) kolan moshkel pish miyare

// Code neveshtan ziad dar Header File ha barname ro sangin mikone 
// Vali to dar har halat az Header File ha estefade kon 
// 2 Noe hast kodum dos dashti

// Behtare esm Identifier haye Header Guard ke ba Macro va Conditional esm project bashe mesl in
// bejaye .h underscore mizarim  ADD_H 
// Va hatman Identifier ha hatman hamasho ba bozorg benevis chon male Macro ha kolan Identifier shon Bozorg minevisan aksaran

// In mabhas ziad be daftar negah kon va project ha kheyli rahate

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Pragma once

// Noe digar Header guard hast kheyli kar khasi nadare sar file ha ino minevisi
// #pragma once
// ------------
// ---------
// ------
// ----

// Mabhas behtar toye daftar

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Tarahi

// Dar in mabhas mikhaym bepardazim baraye tarahi barname bayad che marhaleyi tey konim ?

// Ma ghablan yek ایده darim mikhaym tabdil konim be barname pc
// Ghabl az inke yek kale beri code benevisi Barname ro tarahi kon
// Bepardaz be tarahi barname
// Moshkelat ina benevis har chi lazem darim tools har chi ......
// Benevis bad boro sorakh code nevisi

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Ghadam haye tarahi

// Ghadam avval: Goal
// Hamon hadaf chist az barname mikhaym chi besazi be che hadafi baramon chikara kone va .....

// Ghadam dovvom: Requirements
// 2 mored dare
// 1- Future: Ke mikhay baraye barname che vizhegi hayi ezafe koni 
// 2- Mahdodiyat : Eshare be bodje , zaman , faza, hafeze va ....

// OS: Baraye che operating system mikhay barname benevisi  
// Tools: Az che abzar hayi mikhay estefade koni
// Team OR Singel: Team dari ya na tanha mikhay barname benevisi
// Test: Etminan az sehat keyfiyat app , test vahed, test system , test karbar nahayi / Output: Gozaresh test va raf' bug
// Backup: baraye negah dari code ha ye moghe Hard az beyn bere code ha bepare kol project bepare 
// Az git dar github negah dar


// End Project Season 2.............






























