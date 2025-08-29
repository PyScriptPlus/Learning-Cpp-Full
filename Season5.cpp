// In The Name Of God
// Season 4:

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Compound Statement

// Dar in season gharare bishtar be mas'ale ya Mabhas Scope bepardazim
// Va ye seri topic haye dige sohbat konim

// Berim soragh estelah ( Compound Statement ) ke ba chand estelah
// Dige am nam mibarand:
// -Compound Statement
// -Block Statement
// -Block 
// In 3 tayi ke name bordam hamashon be yek ma'ni hastand

// Hala mafhumesh chiye?
// Be ma'ni 0 ya 1 ya bishtar az yek Statement hastesh ke Compiler
// Hamaro be cheshm yek Statement Vahed dar nazar migire.

// Be zaban sade: Pas yek Block majmoei az Statement ha hastesh
// Manzur az majmoei az Statament ha hatman in nist 100 ta Statement dare
// Ehtemal dare 2 ta ya 1 va hata 0 ta Statement bashe
// Statement: دستور

// Hala ba che Symbol ma Block ro moshakhas konim? 
// Bracket baz va baste
// {

//  Statement
//  Statement
//  Statement

// }


// So'al? Block haro dar koja mitunim estefade konim?
// Har jayi ke betunim Statement gharar bedim pas Block ham mitunim
// Gharar bedim

// Nokte: Dar payan Block lazem nist Simi colon ( ; ) gharar bedim
// Mesal: {    }; Niyazi nist!!!

// Ma ta injaye Season in Block haro ziad didim va estefade kardim
// Be onvan mesal: Ma vaghti miyaym yek Function tarif konim 
// Body Functionemun yek Block hast 
// Mesal:
// void kill() 
// {


// }

// Ya zamani ke az if estefade mikonim bishtar az 1 Statement
// Dar if bayad Block bezarim

// Nokte: Ma mitunim Block to dar to ham benevisim
// Mesal:
/* 
int main()
{ //Outer Block
    { // Nested Block OR Inner Block
        int x;
    } // Nested Block OR Inner Block
} //Outer Block
*/

// Dar mesal bala didim ke daron yek Block mishe yek Block dige gozasht
// Va baz mishe toye onam yek Block dige gozasht
// Mesal:
/*
#include <iostream>

int main() {

    std::cout << "Enter Number: ";
    int x;
    std::cin >> x;
    if(x >= 0)
    {
        if (x % 2 == 0)
        {
            std::cout << "Number is zoj" << '\n';
        }
        else
        {
            std::cout << "Number is Fard" << '\n';
        }
        
    }
    return 0;
}

Tozihat in code balayi:
Dar code balayi 3 ta To raftegi dashtim ya migan behesh 
Sath to dar to 
Esm haye English: Nesting Level OR Nesting Depth

Mesal: dar code balayi migim Nesting Level mon 3 hastesh

Nokte: Dar Standard C++ ovarde shode ke Compiler ha bayesti be sorati
Piyade sazi beshan betonan ta omgh 256 ra Support konanad
Farz kon 256 ta to dar to darim vali na ma bayad dar barname khodemun
Ta omgh 3 ela 4 ta to dar to dashte bashim bayad ta jaye ke momken 
Barname mon ro kam omgh negah darim chon agar omgh to raftegi ha 
Ziyad shavad khanayi ya sazmandehi code ha sakht mishe
Agar didim az omgh 4 ziyad shod behtare codemun ro (Refactor) konim
Refactor = بازسازی
Ta sazmandehi code ha rahat she!!!

*/

// Mesal dar code balayi alaki Nesting Level rafte balad
// Mishe be rahati Refactor kard
// Mesal Refactor code balayi:
/*
#include <iostream>

int main() {

    std::cout << "Enter your Number: ";
    int num;
    std::cin >> num;
    if(num >= 0 && num % 2 == 0){
        std::cout << "Number is zoj" << '\n';
    }
    else if(num >= 0)
    {
        std::cout << "Number is fard" << '\n';
    }

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Namespace (Part 1)

// Agar yadet bashe dar Season2 dar bare Collision Name ha sohbat kardim
// Va rah halesho ham goftam bayad baraye jolo giri az Collision Name az Namespace estefade
// Konim.

// Yadavari: Collision Name zamani etefagh miofte ke 2 ta Identifier yeksan
// Dar scope yeksani tarif beshan be in sorat Compiler gij mishe va error mide
// Inam begam momken hast Error Linker ham rokh bede

// Mesal Real: Man ba 1 nafar toye yek khone hastim
// Be man mige Control bede be man man vaghti bar migardam
// Mibinam 2 ta Control hast 1ki male TV yeki male Coller
// Hala man gij misham mesl Compiler 
// Bayad behesh Error bedam kodum Controll mikhay?


// Har cheghadr barname ma bozorg bozorg tar mishe ehtemal Collision Name ham mire bala

// Ye mesal bezanim kamel ja biofte:
// Farz kon 2 ta file .cpp darim dar har file yek Function darim ba asami yeksan
// Vali mantegheshon fargh dare
// Yani Implementation shon fargh dare kar haye mokhtalef anjam midan:

// Mesal:
/*
// foo.cpp:
int doSomething(int x, int y)
{
    return x + y;
}

// goo.cpp:
int doSomething(int x, int y)
{
    return x - y;
}

// main.cpp:
#include <iostream>
int doSomething(int x, int y); // Declare

int main() 
{
    std::cout << doSomething(4, 3);

    return 0;
}
*/
// Command: g++ main.cpp foo.cpp goo.cpp -o file.exe
// Nokte age bekhaym faghat main ba foo ro ejra konim moshkeli pish nemiyad
// Vali ma mikhaym 3 tashon ejra konim main, foo, goo
// Natije error mide: duplicate symbol'doSomething(int, int)'
// Compiler gij mishe dar in halat

// Khob 2 ta rah hal:
// Rah hal avval:
// Biaym esm yeki az Function haro taghir bedim
// Vali dar project bozorg tar dard sar hast

// Rah hal dovvom va monaseb:
// Biaym az namespace ha estefade konim
// Dalil in ke Standard Library omad be namespace std montaghel shod jolo giri az hamchin
// Collision Name hayi bod

// Syntax namespace:
// namespace NamespaceIdentifier
// {

    // Content of namespace here

// }

// Be hamchin namespace hayi ke khodemun ijad mikonim migan
// user-defined-namespace 
// Esmesh roshe dige: namespace hayi ke tavasot user ijad shode

// Nokte: In kalame namespace yek Keyword hast

// Hala berim baraye har kodum namespace ijad konim
// Faghat man dige to yek file hamaro ijad mikonam
// Nemitunam project asli Season5.cpp 3 4 ta konam
// Haminja minevisim ino mitunim dar file haye mokhtalef benevisim:
/*
#include <iostream>
// Ghaede name gozari ham har jur dos dari vali behtare hamashon kochik benevisi
// foo.cpp:
namespace foo {

    int doSomething(int x, int y) 
    {
        return x + y;
    }
}
namespace goo {

    int doSomething(int x, int y)
    {
        return x - y;
    }

}

int doSomething(int x, int y){
    return x * y;
}

int main() {

    //std::cout << doSomething(4, 3) << '\n';
    // Error mide baz chon ma yeki toye namespace foo va goo doSomething ro darim 
    // In dare toye Global donbalesh migarde
    // 2 ta Rah hal:
    // 1- Estefade az Scope Resolution Operator
    // 2- Estefade az using statements (Ino toye entehaye in Season migam)
    // Berim soragh rah hal Scope Resolution Operator
    // namespace::Identifier
    // Samt chap Operator esm namespace samt rastesh ham esm Function ya harchi ke mikhay

    // Mesal:
    std::cout << foo::doSomething(4, 3) << '\n';
    std::cout << goo::doSomething(4, 3) << '\n';
    // Hala payini ro negah kon bedon namespace minevisim
    std::cout << ::doSomething(4, 3) << '\n';
    // In mire mostaghim toye Global donbalesh migarde
    // Khob age Operator gharar nadam baz mire Global donbalesh migarde
    std::cout << doSomething(4, 3) << '\n';

    // Hal farghesh ine ke
    // Age Operator gharar nadim avval toye namespace khodesh ke tarif shode donbalesh migarde
    // Age peyda nakard mire bala bala age bazam peyda nakard mire Global

    // Vali age Operator gharar bedim :: mostaghim mire Global donbalesh migarde

    return 0;
}
*/
// Ye mesal codi baraye Gharar dadan Operator :: va gharar nadadan hich chiz:
/*
#include <iostream>

void print(){
    std::cout << "World!" << '\n';
    return;
}
namespace foo {
    void print(){
        std::cout << "Hello ";
    }

    namespace printAll
    {
        void printAll()
        {
            print(); // Miad toye foo ejra mikone
            ::print(); // Mostaghim mire Global
        }
    }
}

int main() {

    foo::printAll::printAll();

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Namespace (Part 2)

// Khob ma majbur nistim mavaredi ke marbot be yek Namespace mishe ro hamasho
// Biaym dar yekja ta'rif konim balke mitunim dar chandin file ya dar chandin
// jaye yek file ta'rif konim

// Mesal:
/*
#include <iostream>
// 2 Ta namespace ba Identifier yeksan darim
// Ba in code zir khastam begam
// Majbur nistim harchi darim bayad berizim yek namespace moshakhas
// Mitunim toye 1 namespace moshkhas harja dos darim Variable, Function va ..
// Ta'rif konim barash!!!
namespace basicMath {
    int x = 50;
}

void ali() {
    std::cout << basicMath::x << '\n';
    return;
}

namespace basicMath {
    double y = 43.0;
}

int main() {
    ali();
    std::cout << basicMath::y << '\n';

    return 0;
}
*/

// Yek mesal dige dar mored in dar Folder: namespace_Season6
// Hast hatman onja ham negah kon ba Header File ha in karo anjam dadam
// Ta kamel ja biofte ba mesal


// Mored ba'adi: zamani ke miaym codemun be chand file .cpp mishkonim
// Va toye on file hamon age namespace bashe majburim on namespace ro
// Ham dar Source file va ham dar Header File ya jayi ke mikhaym 
// Forward Declaration konim bayad on namespace ham bashe
// Mesal in tozihat balayi dar Folder: namespace_Season6(P2)

// Agar ma namespace ro dar Source File gharar nadim Linker nemitune 
// Function ke ta'rif kardim be esm add() ro peyda kone
// Chera nemitune peyda kone? Chon ta'rif add() mire toye Global Namespace
// Va ba'es mishe Linker natune peyda kone
// Va toye source Main.cpp goftim boro az namespace
// basicMath::add() peydash kon va age nabashe nemitune peyda kone!!!

// Hala age namespace dar Header File gharar nadim chi?
// Nemitune on moghe khod namespace peyda kone
// Declare function dar Global etefagh miofte

// Pas: Namespace bayad ham dar source file bashe ham jayi ke mikhaym
// Forward Declaration konim Header_File ya khod main


// Mored ba'adi: Namespace ha mitunan to dar to bashan
// Ya'ni dar yek namespace yek namespace dige mishe nevesht

// Mesal:
/*
#include <iostream>

namespace foo{
    namespace goo{
        int mines(int x, int y){
            return x - y;
        }
    }
}

// Ba'ad Standard C++17 be ba'ad injuri ham mishe:
namespace foo::goo{
    int add(int x, int y){
        return x + y;
    }
}
// Ye tozihat hala age khastim dakhel foo ham chizi benevisim dar in ke nemishe
// In faghat dakhel goo hast zir majmoye foo
// Baraye foo mitunim ye namespace baz konim benevisim mesal:
namespace foo{
    int multiphication(int x, int y){
        return x * y;
    }
}

int main() {

    std::cout << foo::goo::mines(4, 4) << '\n'; 
    std::cout << foo::goo::add(4, 0) << '\n';
    std::cout << foo::multiphication(2, 2) << '\n';
    
    // Baraye rahati mitunim yek Alias ta'rif konim
    // Dige nanevisim foo::goo::Identfier in tolanie
    // Mesal:

    namespace active = foo::goo; // Injuri behtare
    std::cout << active::add(99, 1) << '\n';


    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Local Variable

// Dar Season haye ghabl dar mored Local Variable sohbat karde budim
// Local Variabe chi bod?
// Be Parameter haye yek Function va hamchenin Variable hayi ke daron yek Function
// Ta'rif mishan migan Local Variable

// Dar zaban C++ intori nist ke yek Vizhegi moshakhasi vojud dashte bashe ke begim 
// In tafavot Local Variable ha ba Variable haye gheyr mahali ya'ni
// Tafavot beyn Local Variable ha ba Global Variable hast bayad begam yek vizhegi haye
// Mokhtalefi vojud dare ke Local Variable ha ro az Gheyr Local Variable ha 
// Motamayez mikone

// Jolo tar ha Property haro migam daghighan che vizhegi darand
// Property = ویژگی

// Dar season haye ghabli dar mored Scope ha ham sohbat kardim
// Scope yek Identifier ro moshakhas mikone ke on Identifier dar koja mitune
// Dar dast ras bashe va ghabel estefade bashe
// Agar on Identifier dast ras bod migoftim: In-Scope
// Age az dast ras kharej bashe va gheyr ghabel estefade bashe migoftim: Out of Scope
// Nokte: Age be Identifier ke Out Of Scope bashe say konim dast rasi peyda konim behesh
// Va Error Compiler movajeh mishim

// Nokte: Local Variable ha az manzar vizhegi Scope Block-Scope hastand
// Hala in daghighan ya'ni chi? Ya'ni inke Variable ha az noghteyi ke ta'rif shodan
// Ta payan on Block ke darunesh ta'rif shode dar dast ras hast ya'ni In-Scope

// Mesal:
/*
int main() {


    int x = 5; // x enters scope here 
    double y = 4.0; // y enters scope here


    return 0;
} // x and y go Out Of Scope here
*/

// Va goftim Parameter ham Local Variable mahsob mishe mesal:
/*
int max(int x, int y) { // x and y enters scope here
    int max = ((x > y) ? x : y); // max enters scope here
    return max;
} // max, x and y leave scope here
*/
// Nokte: Shayad begi x, y ke ghabl az Block ta'rif shodan
// Bale be nazar yek Ensan doruste vali ghavaedesh mige dakhel Block be hesab miad

// Nokte: Asami Variable ha ke dar yek Block ta'rif mishan bayad (Unik) bashe
// Dar gheyr in sorat Error 
// Mesal:
/*
void someFunction(int x) {
    int x;
    return;
}
// In code be ma error mide chon 2 ta Identifier yeksan dar yek Block ta'rif shode
// Doruste yeki Parameter hast yeki Variable ma'moli vali ba har 2 ta 
// Yeksan raftar mishe!!!
*/


// Mored ba'adi:
// Yek mafhumi vojud dare be esm: Variable Storage Duration
// Khob in Duration chiye?
// Ghavaedi hast ke ta'yin mikone ke yek Variable che zamani va chetor ijad mishe
// Va az beyn mire
// Dar bishtar hala Duration yek Variable be sorat mostaghim Life-Time sho ta'yin mikone
// Life-Time yek bar goftim: Yek Variable che noghteyi ijad mishe va koja az donya mire

// Local Variable ha az manzar Duration daraye Automatic Duration hastand 
// Ya'ni chi? Be in ma'ni ke dar noghteyi ke ta'rif mishan sakhte mishan
// Va dar payan Block az beyn mirand
// Mesal:
/*
int main() {

    int x = 5; // Variable x dar inja be vojud miyad va meghdar dahi mishe
    double y = 4.0; // Variable y dar inja be vojud miyad va meghdar dahi mishe

    return 0;
} // Variable haye x va y har 2 ta inja az beyn mirand
*/
// So'al: Shayad begi shabih Scope nist?
// Na bebin Scope dar dast ras budan va dar dast ras nabudan moshakhas mikone
// In Duration be vojud omadan va az beyn raftan mige

// Yekja goftam Automatic Duration:
// Ya'ni khodeshon khodkar be donya miyan va khodkar ham az beyn mirand

// Local Variable ha mitunan toye Block haye to dar to ham ta'rif beshan
// Vali ghavaed hamune ham baraye Scope ham Duration
// Mesal:
/*
int main() {

    int x = 5; // x enters scope and is created Or (Duration) here
    { // Nested Block
    int y = 7; // y enters scope and is created Or (Duration) here
    } // y goes out of scope and is destroyed here

    // y can not be used here because it is out of scope in this block
    // Mesal:
    //y = 5; // Error


    return 0;
} // x goes out of scope and is destroyed here
*/


// Mored ba'adi:
// Ma ta inja 2 ta Property goftim: Scope va Variable Storage Duration
// Yeki am hast
// Be esm Linkage
// In Linkage chiye hala?
// Aya sayer Identifier hayi ke ba hamon esm ta'rif shodan be hamon Identifier ke 
// Ghablan ta'rif shodan eshare darand ya kheyr?
// Mesal: Yek Identifier x darim va dar jaye dige am yek Identifier x darim
// Hala in 2 ta daran be yek Object moshakhasi dar hafeze RAM eshare mikonand?
// x , x --> Object
// Vali yek mogheyi hast in 2 ta x har chand esmeshon yeki hast
// Vali be Object haye mokhtalefi dar hafeze RAM eshare daran
// x --> Object
// x --> Object

// Khob Local Variable ha az manzar Linkage: Aslan Linkage nadarand xD
// Ya'ni har Declaration (Ham define va ham declare be hesab miad)
// Tanha marbot be yek Object mishe baraye Local Variable 
// Joda joda Object darand
// Mesal:
/*
int main() {

    int x = 5;
    {
        int x = 3;
    }

    return 0;
}
*/
// Dar code balayi 2 ta x darim
// Har 2 tashonam Local Variable hastand
// Vali Linkage nadarand
// Ya'ni x ke dar Outer Block hast
// Ba x ke daron Nested Block hast
// Hich rabti be ham dige nadarand
// 2 ta shon object haye mokhtalefi dar hafeze RAM darand

// Bazam shayad begi in Linkage moshabeh Scope ya Duration hast?
// Vali kheyrrrrr
// In 3 ta Property har kodum yek tafavot khasi darand
// 1-Scope: Dast ras bodan Local Variable In-Scope va
// Dast ras nabodan Local Variable Out Of Scope be ma mige
// 2-Duration: Be vojud omadan va az beyn raftan Local Variable ro be ma mige
// 3-Linkage: Aya 2 ta ya chand ta Variable ke ba Identifier yeksan mesal x
// Daran be yek Object moshkhasi dar hafeze RAM eshare mikonanad
// Ya joda joda hastand

// Mored ba'adi:
// Nokte: Deghat kon Variable hato koja ta'rif kardi
// Ya'ni jayi ke niyaz dari ta'rif kon

// Mesal:
/*
#include <iostream>

int main() {

    int x = 0;
    // x dar inja dast ras hast
    {
        // x dar inja dast ras hast
        // Mesal age y faghat dakhel yek Block niyaz dari
        // Haminja ta'rif kon nayad birun ta'rif kon
        int y = 5;
        // y dar inja dast ras hast
        std::cout << y << '\n';
    } // Inja y az beyn mire
    // x dar inja dast ras hast

    return 0;
} // Inja x az beyn mire
*/
// Harja lazem dari biyaresh ta'rif kon!!!!

// Ye mesali bezanim ke mikhaym
// Yek variable har dar Scope khodesh ham dar yek Block dige estefade konim
// Faghat ye mesale negah kon:
/*
#include <iostream>

int main() {

    int x = 5;
    {
        int y;
        std::cin >> y;
        if (y == 4)
        x = 0;
    }
    std::cout << x << '\n';

    return 0;
}
*/
// Mesl in kar haro bar hasb niyazet ta'rif kon!!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Global Variable

// Khob dar jalase ghabl Local Variable haro yad gereftim 
// Hala mikhaym Global Variable haro yad begirim

// Dar zaban C++ Variable ha mitunan kharej az Function ta'rif beshan
// Be Variable hayi ke kharej az Function ta'rif mishan migan Global Variable
// Mesal:
/*
#include <iostream>

int g_x{}; // Global Variable

int main() {

    std::cout << g_x << '\n';

    return 0;
}
*/
// Aksar C++ kar ha Global Variable ha ro ba'ad az #include ha gharar midan
// Va in behtare be nazar man!!!

// C++ haye ghadimi kar vaghti Global Variable ta'rif mikonan dar
// Identifier ghabl esm asli yek g_ mizaran
// Mesal: g_number, g_x, g_age, g_subtraction, g_division
// Vaghti har jaye code didim yek Identifier estefade shode ke
// Avvalesh ba g_ shoru mishe mifahmim Global Variable hast!!!

// Nokte: Dar har Functioni mitunim be in Global Variable ha dast rasi peyda konim
// Mesal:
/*
#include <iostream>

int g_x = 50;
int g_y = 0;
void doSomething() {
    std::cout << g_x << '\n';
    return;
}

int main(){

    doSomething();
    std::cout << ++g_y << '\n';

    return 0;
}
*/

// Dar jalase ghabli 2 ta mafhum yad gerftim 
// Hamon Property haye Variable
// 1- Scope
// 2- Duration
// Ke goftim in Local Variable daraye Block Scope va Automatic duration hast

// Khob taklif Global Variable ha chi?
// Global Variable az manzar vizhegi Scope daraye ( Global namespace scope )
// ya ( Global Scope ) va ye seria am migan ( File Scope ) hast
// Va az manzar Vizhegi Duration daraye ( Static Duration ) hastand

// Khob hala in ya'ni chi ke daraye ( Global Scope ) hast?
// Ya'ni az noghteyi ke ta'rif shodan ta payan on file ke tosh ta'rif shodan 
// Dar dast ras hast !!!

// Va ( Static Duration ) chiye?
// Zamani ke barname shoru mishe be vojud miyad zamani ke barname be payan berese
// Az beyn mirand !!!
// Pas vaghti barname ro ejra mikonim be vojud miyan va baghi mimanand ta payan
// Barname be hamin dalil migan Static Duration

// Mored ba'adi: Global Variable ha bar khalaf Local Variable ha be sorat Automatic
// Ya default daraye Zero-Initialized hastand
// Ya'ni age meghdar dahi avvalie nakonim be sorat default 
// 0 hastand
// Mesal:
/*
#include <iostream>

int g_x; // Zero-Initialized

int main() {

    std::cout << g_x << '\n';
    return 0;
}
*/

// Variable hayi ke daraye Static Duration hastand defaulteshon 0 hast !!!


// Mored ba'adi: Global Variable ha ham mitunan Constant bashan
// Ya'ni sabet vali meghdar dahi avvalie mikhad vagarne error
// Mesal:
/*
// const int g_x; // Error
// constexpr int g_y; // Error
const int g_x{}; // Out --> 0
constexpr int g_y{}; // Out --> 0
const int g_xz = 5; // Out --> 5
constexpr int g_yz = 10; // Out --> 10
*/
// Nokte: Global Variable dar fili ke ta'rif mishe hame jash dar dast ras ast
// Va niyaz nist az yek function be function dige pass bedim
// Vali in kar eshtebahe
// Baraye rahati naya az Global estefade kon ke hame ja dar dast ras bashe
// Rahat bashe in eshtebahe dar jaye khodesh dar ayande az in Global estefade mikonim.

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Variable Shadowing