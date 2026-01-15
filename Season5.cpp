// In The Name Of God
// Season 5:

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

// Dar in jalase gharare dar mored mafhum Shadowing sohbat konim
// Ma ino midunim ke har Block Scope marbut khodesh ro dare
// Mesal:
/*
Alan in Block 1 va 2 Scope marbut khodeshon ro darand 
// Age dar har 2 ta in int x; bashe Collision Name sorat nemigire
// Kamelan az ham jodan!!!
{
    {
        1
    }

    {
        2
    }

}
*/

// Age hala in Block ha to dar to bashe chi?
// Mesal:
/*
Agar dar har 2 ta Block int x; ta'rif konim
Che etefaghi miofte? Dar in halat Shadowing pish miyad
On x ke dar Block 1 ta'rif shode az did Block 2 makhfi mishe
Be in makhfi shodan migan Shadowing
{
    1
    {
        2
    }
}
*/

// Mesal:
/*
#include <iostream>

int main() {

    int apples = 9;
    {// Nested Block
        std::cout << ++apples << '\n';

        int apples;
        apples = 6;
        std::cout << --apples << '\n';
    }
    std::cout << apples << '\n';

    return 0;
}
*/
// Tozihat code balayi: Man omadam toye Block 1 ya Block biruni 
// Ye Variable apples ta'rif kardam in Variable Block biruni
// Ham dar Block khodesh ya'ni biruni dar dast ras hast ham dar
// Nested Block
// Hala dar Nested Block ba hamon esm apples ye Variable ta'rif kardam
// Dar Nested Block Variable ke ta'rif kardam ta payan Block daruni
// Har vaght begim apples be hamon Variable eshare darim ke dar Nested Block
// Ta'rif kardim
// Hanoz on Block biruni ro darim vali ba'ad az tamum shodan Block daruni
// Mishe estefade kard mesal code balayi bebini motavajeh mishi
// Inayi ke goftam faghat baraye Local Variable ha bod


// Berim soragh Global Variable ha bebinim ona chejuri an
// Dar mesal ghabli yek Local Variable omad yek Local Variable dige ro 
// Shadow kard
// Hala yek Local Variable mitune yek Global Variable az ghabl ta'rif shode
// Ro Shadow bekone
// Mesal:
/*
#include <iostream>

int value = 5;
void foo() {
    std::cout << value << '\n';
    return;
}

int main() {

    int value = 21;
    value = 11;
    std::cout << value << '\n';

    foo();

    return 0;
}
*/
// Tozihat code balayi: 
// Daron function main ebteda yek Local Variable be esm Value ta'rif kardim
// Va on Local Variable omad on Global Variable ke kharej function main
// Ta'rif shode ro Shadow kard
// Dar mesal codi bala: Local Variable omad Global Variable ro Shadow kard

// Mesal codi dige:
/*
#include <iostream>

int value = 5;

int main() {

    std::cout << --value << '\n';
    int value = 9;
    ++value;
    std::cout << value << '\n';
    
    // Baraye dast rasi be Global Variable mitunim az
    // Scope Resolution Operator estefade konim:
    ++(::value);
    std::cout << ::value << '\n';


    return 0;
}
*/
// Nokte akhar: Ta jaye momken az Shadowing parhiz kon
// Khanayi code ro miyare payin va dar project haye bozorg 
// Ehtemal be vojud omadan Bug hast !!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Internal Linkage

// Dar jalase ghabl dar mored Linkage sohbat kardim ke goftim
// Linkage yek Identifier moshakhas mikone ke aya sayer
// Declaration hayi ke hamnam on Identifier hastand on ha ham be yek Object 
// Yeksani eshare mikonand ya na
// Va goftim Local Variable ha faghed Linkage hastand ya'ni Linkage nadarand
// Identifier hayi ke daraye Linkage hastand mitunan
// Yeki az in 2 noe Linkage bashan:
// 1- Internal Linkage
// 2- External Linkage

// Dar in jalase be Internal mipardazim jalase ba'ad be External !

// Internal Linkage chist? Yek Identifier ke Internal Linkage bashe 
// Tanha dakhel hamon file ke ta'rif shode dar dast ras va ghabel estefade hast
// Ya'ni dige nemishe dar file haye dige behesh dast rasi peyda kard

// Mesal: Agar dar 2 file motafavet 2 ta Identifier ba esm yeksan dar har file
// Dashte bashim va daraye Internal Linkage bashan az hamdigar mostagham
// Va joda hastand hich rabti be ham nadarand

// Hala berim soragh Global Variable ha ke daraye Linkage hastand ham:
// Internal Linkage ham External Linkage

// Agar yek Global Variable daraye Internal Linkage bashe behesh
// Internal Variable ham migan
// Mohem: Yek Global Variable gheyr Constant bekhaym Internal konim kafiye
// Az keyword ( static ) ghablesh estefade konim 
// Chera goftam gheyr Constant? chon age age Global Variable Constant bashe
// Be sorat Default Internal hastand
// Che static estefade koni barash che nakoni farghi nemikone

// Mesal:
// Internal Linkage
// static int g_x;
// External Linkage
// int g_y;

// Age na Constant na Static bashe Global Variable daraye External mishe
// Ke jalase ba'adi kamel dar moredesh migam

// Mesal Constant:
// Internal Linkage:
// const int g_x;
// Internal Linkage:
// constexpr int g_y;

// Mesal codi:
/*
    Main.cpp:
    static int g_x;
*/
/*
    a.cpp:
    constexpr int g_x;
*/
// In 2 ta kamelan az ham mostaghel hastand g_x ke dar file main.cpp hast
// Faghat dar on file main ghabel estefade va dar dast ras hast
// g_x dar a.cpp ham hamintor faghat dar file khodesh dar dast ras hast

// Nokte: Dar Season haye ghabl yek gha'ede goftim dar zaban C++ vojud dare
// Be esm ODR : One Definition Rule
// Ke migoft yek Object ya yek function va ....
// Nemitune bish az yek bar Definition dashte bashe
// Che dar kol barname che dar file
// Bala yek code neveshtam main.cpp va a.cpp
// Shayad begi in ghavanin man zir pa daram migozaram
// Vali na Object hayi ke Internal hastand hich rabti be ham nadarand
// Kamelan az ham mostaghel hastand

// Mored ba'adi:
// Vizheghi Linkage tanha marbut be Variable ha nemishe 
// Balke marbot be Identifier ha mishe ya'ni Function ha ham in Vizheghi
// Linkage ro darand

// Function ke ma ta'rif mikonim be sorat Default External hastand
// Function have external Linkage by default
// Hala age khastin function daraye Internal bashe
// Az keyword Static estefade mikonim
// Mesal:
/*
    add.cpp:
    static int add(int x, int y)
    {
        return x + y;
    }
*/
/*
    main.cpp:
    #include <iostream>

    int add(int x, int y); // Forward Declaration
    
    int main()
    {
        std::cout << add(2, 5) << '\n';
        return 0;
    }
*/
// Code safhe bala ba khataye Linker movajeh mishe
// Chon Functioni ke estefade kardim toye add.cpp 
// Faghat ghabel estefade hast
// Chon ma ba Static on ro Internal kardim

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: External Linkage

// Jalase ghabl Internal yad gereftim ke estefade az yek Identifier tanha
// Be yek file mahdud mikone

// Hala External Linkage: Identifier ke daraye External bashe ham mitune
// Dar file ke ta'rif shode mored estefade gharar begire
// Va ham kharej az on file mored estefade gharar migirad:
// (Ama be shart gharar dadan Forward Declaration)
// Dar avayel in dore yad gerftim ke chejuri yek Function dar file dige estefade konim
// Chon Functioni ke ta'rif mishe be sorat Default External hast

// Mored ba'adi: Dar jalase ghabl goftim Global Variable ke daraye 
// Internal Linkage bashan beheshon migan ( Internal Variable )
// Hala be Global Variable ke daraye External Linkage bashe
// Behesh migan ( External Variable )

// Hala age bekhaym yek Global Variable daraye External konim bayad az 
// Keyword ( extern ) estefade konim
// Goftim dar Global Variable haye gheyr Constant daraye External ast
// Be sorat Default
// Mesal:
// extern int g_x; // External Linkage
// int g_y; // External Linkage
// 2 ta shon yekie farghi nadarand

// Hala constant ha be sorat Default daraye Internal hastand 
// Baraye External kardan az keyword extern bayad gharar bedim:

// const int g_y; // Internal Linkage
// extern const int g_x; // External Linkage

// Mored mohem: Baraye estefade az External Variable dar file dige 
// Mesl function bayad Forward Declaration gharar bedim !!!
// Hala Variable haro chejuri Foward Declaration konim?
// Bazam ba estefade az keyword ( extern )
// Pas in extern 2 ta karbord dare:
// 1- Baraye External kardan
// 2- Baraye Declare kardan

// Mesal:
/*
    a.cpp:
    extern int g_x = 2;
    extern const int g_y = 3;
*/
/*
    main.cpp:
    #include <iostream>

    extern int g_x;
    extern const int g_y;

    int main()
    {
        std::cout << g_x << '\n'; // Output: 2
        std::cout << g_y << '\n'; // Output: 3 
        return 0;
    }
*/

// Mored akhar:
// Constexpr nemishe External kard 
// Dar ayande migam kamel ghazie chejurie !!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Az Global Variable haye gheyr Constant estefade nakonid

// Tosiye mishe az Global Variable haye gheyr Constant estefade nakonim
// Dar project haye kochik moshkeli nemiyare vali dar project haye vagheyi
// Ba moshkel movajeh mishim
// Kheyliya in eshtebah ro mikonan ziyad az in Global Variable estefade mikonanad
// Chon dar har Block mishe estefade kard dar hame ja dar dast ras hast
// Hala tosiye i ke kardam az Global Variable gheyr Constant estefade nakon
// non-constant Global Variable
// Vali mitunim az Global Variable sabet ya hamon Constant estefade konim
// Dalil asli ke chera az Global Variable gheyr Constant estefade nakonim?
// Mohem tarin dalil az onja ke Global Variable ha tavasot har Function ghabel dast yabi
// Va dast kari hastand in Variable haro gheyr ghabel pish bini mikone
// Mesal:
/*
#include <iostream>

int g_mode; // non-constant Global Variable

void doSomething() {
    g_mode = 2;
    return;
}
int main() {

    g_mode = 1;
    doSomething();
    if(g_mode == 1)
    {
        std::cout << "No thread detected.\n";
    }
    else
    {
        std::cout << "Launching nuclear missiles...";
    }
    // Migim age g_mode 1 bod bego hich khatari tahdid nemikone
    // Vali gheyr az in bod
    // Moshak haye hasteyi ro partab kon
    // Ye mesal bamaze hast in
    // Vali noktash ine ke ma goftim g_mode = 1;
    // Vali chera moshak haye hasteyi partab mishan
    // Hamine moshkel omade dar yek Function dige in 
    // Global Variable dast kari shode!!!

    return 0;
}
*/
// In Global Variable ha hameja mitunan taghir konanad dar va peykar nadarand
// Moshkel be vojud miyare

// Amn tarin Variable ha Local Variable ha hastand kheyli behtare be nazar man

// Mesal dige:
/*
    if(g_mode == 4)
    {
        //Statement//
        //Statement//
        //Statement//
    }
        // Ma yekja g_mode ro 4 kardim ta in Statement haye daron in if ejra shan
        // Vali nemishe 
        // Hala bayad begardi bebini koja in g_mode taghir karde 
        // Dard sar darad pas in Global Variable gheyr Constant
*/

// Dar Season haye ghabli dar mored yek ghabeliyat harf zadam
// Be esm Modularity
// Hamon sazmandehi code ha 
// Miomadim code hamon ro be chand bakhsh Modularity mikardim
// Ya'ni mesal input gerftan az User miomadam dar yek 
// Function joda mineveshtim ta ba'adan khastin taghir bedim 
// Faghat hamon Function ro taghir bedim 
// Vali age az Global Variable estefade konim in Ghabeliyat Modularity ham az dast midim
// Farz kon yek Global Variable gheyr constant darim
// Omadim dar hamon function yek dast kari kardim barash
// Hala on Global Variable dar kheyli az ja ha ham estefade shode
// Age khastim in Global Variable taghir bedim har jayi ke in Global Variable
// Estefade shode taghir mikone kolan barname be ham mirize !!!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Estefade maghadir dar chandin file (Method 1)

// Yek seri maghadir hastand ke taghir nemikonanad 
// Adad Avogadro, Pi, Gravity
// Baraye injur maghadir az constant estefade mishe barashon

// Hala bahs asli ke hast roykard khubi nist biaym adad Pi ro mesal dar har file
// Ta'rif konim
// Mesal ma dar 3 ta file be meghdar adad Pi niyaz dazim dar har 3 file 
// Roykard khubi nist biaym dar har 3 file in adad Pi ro ta'rif konim
// Dar barname nevisi kolan Tekrar baraye ma oft dare khob nist
// Rah hal chiye?
// Biaym in meghdar Pi ro dar yekjaye sabet ta'rif konim ba'ad har file 
// Ke khast biyad az in maghadir estefade kone

// Har zaban baraye in kar ke bala goftam yek seri emkanati gozashte
// Ma dar zaban C++ 3 ta rah hal hast ke 3 tasham migam
// 2 ta sho hamin mabhas 1 ki ro mabhas ba'adi migam

// Yek khubi ke dare in age khastim taghirati bedim
// Faghat dar file ke ta'rif shode taghir midim baraye hame emal mishe

// Rah kar hayi ke C++ gozashte baraye in kar 
// Ghabl az C++17 yek HeaderFile misakhtim maghadir mesl Pi ke sabet hast
// Mizashtim darun namespace va behtare Constant hamon ba constexpr bashe ba'ad dar 
// SourceFile ke niyaz be in maghadir bod on HeaderFile ro #include mikardim

// Mesal:

/*
   Constants.hpp:
#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

namespace constants
{
    constexpr double pi = 3.14;
    constexpr double avogadro = 6.022;
    constexpr double myGravity = 9.2;
}

#endif
*/
// Mikham yek barname benevisam ke mohit circle ro be dast biyarim 
// Formul kamel in va kolan chi be chiye toye daftar hast
/*
   Main.cpp:
#include <iostream>
#include "Constants.hpp"

int main() {

    std::cout << "Enter a radius: ";
    double radius;
    std::cin >> radius;

    std::cout << "The circumference is: " << 
            2.0 * radius * constants::pi << '\n';

    return 0;
}
*/

// In ravesh sadeyi bod omadim dar source asli Constants.hpp ro include kardim
// Miyad maghadir on ro dar source file gharar mide
// Engar dar source file on maghadir ro ta'rif kardim toye Global dar nazar migire
// Baraye hamin be rahati dast rasi peyda mikone be maghadir

// In ravesh yek seri eyb dare:
// Age biaym in HeaderFile constants.hpp dar SourceFile haye dige ham include konim
// Baz hamin etefgh miofte ke bala goftam 
// Ya'ni miyad tak tak on Variable hayi ke ta'rif kardim Copy mikone dar SourceFile
// Ke include kardim 
// Farz kon 20 ta SourceFile darim baraye hamashon niyaz darim in maghadir
// Miyad 20 bar Copy mishe ta'rif haye in Variable ha dar on SourceFile ha

// Deghat kon: Header Guard rabti be in dastan nadare 
// On faghat miyad az in jologiri mikone ke HeaderFile dar felan SourceFile 2 bar 
// Estefade nashe ke biyad error duplicate bede hamon tadakhol asami

// Yek eyb dige age dar HeaderFile yek chizi taghir bedim
// Va on SourceFile hayi ke in HeaderFile ro include kardim barash
// Bayad har tak takeshon ro ReCompile konim

// Ravesh ba'adi chiye?
// Bayad on maghadir hamon sabet haro ke dar HeaderFile ta'rif karde budim
// External konim va onaro dar SourceFile gharar bedim na HeaderFile
// Chera?
// Baraye in ke motmaen shim definition in maghadir faghat dar yekja vojud darad
// Ba'adesh biaym Forward Declaration ha ro dar HeaderFile gharar bedim

// Yek nokte: dige nemishe az Constexpr estefade kard chon
// Constexpr ghabeliyat Forward Declaration nadard
// Majburim az const sade estefade konim

// Mesal:
/*
   Constants.cpp:

    #include "Constants.hpp"

    namespace constants
    {
        extern const double pi = 3.14;
        extern const double avogadro = 6.022;
        extern const double myGravity = 9.2;
    }
*/

/*
    Constants.hpp:

    #ifndef CONSTANTS_HPP
    #define CONSTANTS_HPP
    namespace constants
    {
        extern const double pi;
        extern const double avogadro;
        extern const double myGravity;
    }
    #endif
*/

/*
    Main.cpp:

    #include <iostream>
    #include "Constants.hpp"

    int main() {

        std::cout << "Enter a radius: ";
        double radius;
        std::cin >> radius;

        std::cout << "The circumference is: " <<
                2.0 * radius * constants::pi << '\n';
    
        return 0;
    }

*/

// Hala in ravesh balayi am yek seri eyb hayi darad:
// On sabet hayi ke ta'rif kardam dar Constants.cpp faghat dar file khodesh
// Compile-Time hast dar ja haye dige az ona vaghti estefade mikonim Run-Time hastand
// Chon const hast goftam dige dar in ravesh Constexpr nemishe in ghabeliyat
// Forward Declaration ro nadare
// Va chon Run-Time hast ghabeliyat behine bodan ro az dast midim

// Vali jalase ba'adi yek rah kheyli khubi migam !!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Estefade maghadir dar chandin file (Method 2)

// Khob dar in ravesh jadidi ke mikham begam az 2 ravesh ghabli kheyli behtare
// Vali bayad hadaghal standard C++17 be ba'ad bashim

// Dar C++17 omadan yek mafhum jadidi be name inline moarefi kardan 
// Khob in inline Variable chiye?
// Variabli hast ke ejaze dare dar chandin file define beshe bedon inke
// Ghaede One Definition Rule ro naghz kone
// Inam begam inline Global Variable ha be sorat Default daraye
// External Linkage hastand

// Hala posht parde inline ha ham begam chi be chiye:
// Chi baes mishe ghavanin ODR naghz nashe?
// Dalilesh ine ke Linker miyad hameye inline definition haye marbot be yek Variable
// Ro tanha daron yek Variable jam' mikone 
// Ya'ni vaghti yek Variable ro inline mikonim be Compiler migim
// Momkene in Variable ke ta'rif kardam momkene dar chand file dige tekrar beshe
// Vali hamashon ro yek Variable vahed hesab kon 
// Pas Linker onaro joda nemibine 
// Balke hamaro Merge mikone mesal mige az x faghat yeki darim pas 
// Dar vaghe chandin Variable nadarim ke on ghaede ODR naghz she!!!

// In inline ha ghavanin darand: Vaghti inline ta'rif mikonim
// Bayad Translation Unit (TU) ta'rif on inline Variable haro bebine
// In TU goftim yek bar ebteda donbal Preprocessor ha migarde age inline ro 
// Dar HeaderFile ta'rif karde bashim mibine chon #include yek Preprocessor hast
// Age peyda nashod Compiler roye TU kar mikone toye SourceFile asli migarde
// Bayad Definition sho peyda kone ta inja okeye
// Vali age inline dar yek Source file ta'rif shode bashe va dar SourceFile asli
// Faghat e'lam konim ya extern konim kafi nist !!!
// Chon TU bayad ta'rif on inline Variable ro bebine dar gheyr in sorat
// Error: odr-used inline variable 'Identifier' is not defined

// Tosiye: inline haro hatman dar HeaderFile ta'rif kon
// Ta betuni jaye dige estefade koni !!!!

// Nokte: Variable haye inline khasiyat Constexpr ham darand
// Pas mitunim behine ham konim

// 2 Ta mahdudiyat baraye inline Variable ha vojud darad:
// 1- Hameye definition haye marbot be yek inline Variable bayesti
// Yeksan bashan vagarne ba UB movajeh mishim
// 2- Definition on inline Variable bayad dar har fili ke mikhaym estefade konim
// Mojud bashe (Hamon ghaziye TU bayad bebine inas bala goftam)

// Nokte mohem:
// Mesal: Dar yek HeaderFile a.hpp omadim inline variable ta'rif kardim hala age 
// Khastim in inline variable ke dakhel a.hpp hast az yek HeaderFile dige 
// Ya SourceFile dige dast kari konim nemishe manzuram toye fazaye Global hast

// Chon: Dar fazaye Global ebarat ejrayi nemitunanad azad bashand faghat mishe
// Ta'rif ya Declaration gharar dad mesl: Ta'rif Variable, Class, Function va ....

// Rah hal? On inline ro dar SourceFile dige berizim toye yek Variable dige
// Dast kari konim ya dar Function chizi mitunim dast kari konim
// Mesal in bakhsh dar Folder: DataType C++, C# Visual Studio 2022/tester1C/Season6/inline
// Toye on folder yek seri SourceFile hast mituni bebini mesal zadam


// Hala berim bahs asli yek mesal ba inline bezanim
// Hamon mesal ghabli ke baraye be dast ovardan mohit Circle:

/*
    Constants.hpp:

    #ifndef CONSTANTS_HPP
    #define CONSTANTS_HPP

    namespace constants
    {
        inline constexpr double pi = 3.14;
        inline constexpr double avogadro = 6.022;
        inline constexpr double myGravity = 9.2;
    }

    #endif
*/
/*
    Main.cpp:

    #include <iostream>
    #include "Constants.hpp"

    int main() {
    
        std::cout << "Enter a radius: ";
        double radius;
        std::cin >> radius;

        std::cout << "The circumference is: " <<
                2.0 * radius * constants::pi << '\n';
    
        return 0;
    }
*/

// Be hamin rahati hamishe baraye injur mavared az inline estefade kon !!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Static Local Variable

// واژه Static kami gij konanade hast chera?
// Chon baste be jayi ke mishine mitune معانی mokhtalefi dashte bashe

// Baraye mesal dar jalase haye ghabl goftim Global Variable ha daraye Static Duration
// Hastand dar inja ma'ni static in hast ke dar zaman shoru barname Variable haye global
// Ijad mishan va dar etmam barname az beyn miravand

// Yek vizheghi dige ham dasht in Static
// Ba gharar dadan Keyword static mitunestim yek Global Variable ro daraye Internal Linkage
// Konim va Function ham mitunestim ba in Keyword Static Internal Linkage konim

// Hala alan mikhaym yeki dige az karbord haye Static ham bebinim 
// Va yad begirim :)
// Estefade az Keyword Static roye Local Variable ha
// Ma midunim Local Variable ha az manzar Vizheghi Duration
// Automatic Duration ast
// Ya'ni az noghteyi ke ta'rif mishe be vojud miyad
// Ta payan Block ke tosh ta'rif shode az beyn mire

// Khob hala age baraye Local Variable ha az Keyword Static estefade konim
// Mesl Global ha mishe Static Duration ya'ni az zaman ejraye barname ta payan barname
// On Variable zende ast ya mojud ast

// Mesal:
/*
#include <iostream>

void incrementAndPrint() {
    int s_value = 1;
    s_value++;
    std::cout << "This Value: " << s_value << '\n';
    return;
}

int main() {

    incrementAndPrint(); // Output --> 2
    incrementAndPrint(); // Output --> 2
    incrementAndPrint(); // Output --> 2

    return 0;
}
*/

// Har bar ke on Function incrementAndPrint() ro call mikonam
// Variable Value sakhte mishe ba meghdar avvalie 1 ba'ad
// Increment mishe 1 vahed ezafe mishe adad nahayi mishe 2
// Ba'ad chap mikone
// Ba'ad tamum shodan Function Local Variable az beyn mire
// Dobare Call konim hamon Function ro baz hamin etefagh miofte
// Meghdar ghabli hefz nemishe chon dar har ejra ba'ad tamum shodan Function
// On Local Variable dar akhar Block az beyn mire 

// Hala on bala goftam ba estefade az Keyword Static mitunim
// Static duration konim
// Ta akhar ejraye barname on Local Variable az beyn nare 

// Mesal codi:
/*
#include <iostream>

void incrementAndPrint() {
    static int s_value = 1;
    s_value++;
    std::cout << "This Value: " << s_value << '\n';
    return;
}

int main() {

    incrementAndPrint(); // Output --> 2
    incrementAndPrint(); // Output --> 3
    incrementAndPrint(); // Output --> 4

    return 0;
}
*/
// Dige ba har Call va tamum shodan function Value on Local Variable az beyn nemire
// Ta payan barname meghdar on hefz mishe!!!


// Ma dar jalase haye ghabl goftim Variable hayi ke daraye Static Duration hastand
// Meghdar defaulteshon adad 0 hast

// Mesal:
/*
#include <iostream>

int main() {
    
    static int s_x;
    std::cout << x << '\n'; // Output --> 0

    return 0;
}
*/

// Mored ba'adi: Chera Identifier haye Variable Static avvalesh  s_  gharar dadam?
// Chon dige harkasi ya khodam dige harja in Identifier didam befahmam 
// Local Variable ma'moli nist balke yek Static Local Variable hast

// Hala che estefade haye mohemi mishe az in ke yad gerftim kard?
// Mesal: Dar sakhtan ID be dard mikhore
// ID chiye? Farz kon 1000 ta Object dari shabih ham
// Hoviyat har kodum ro ba ID moshakhas mikonim ba'ad mitunim 
// Be rahati Object mored nazar ro ba ID peyda konim
// Mesl CodeMeli 

// Mesal codi:
/*
#include <iostream>

int generateID() {
    static int s_itemId = 0;
    return s_itemId++;
}

int main() {

    for(int i = 0; i <= 852; i++)
    {
        std::cout << "ID: " << generateID() << '\n';
    }

    return 0;
}
*/

// In maghadir mitunim be onvan ID estefade konim
// Chon khiyalemun rahate ke in adad ha Unique hastand
// Unique Number: Ya'ni adade gheyr tekrari


// In Static Local Variable mesl Global amal mikone vali khubi ke dare faghat 
// Dar Scope khodesh ghabel dast rasi va dast kari hast
// Dige mesl Global nist hameja beshe dast kari kard !!!

// Hala ye ghabeliyat khob:
// Farz kon mikhaym yek meghdar Const ro dar yek Function negah darim:
/*
double pi() {
    const double pi = 3.14;
    return pi;
}

int main() {

    // Har bar ke in Function call mishe on Variable pi
    // Az avval sakhte mishe ba'ad tamum shodan function az beyn mire
    // Haminjuri edame dare dar har Call kardan
    // Va in khob nist behine nist va barname ma kond mishe
    pi();
    pi();
    pi();

    return 0;
}
*/

// Rah hal:
// Local Variable haye Static mitunan const va constexpr bashand
// Dige in tahe behinegie :D
// Har bar Function call beshe dige meghdar jadid sakhte nemishe
// Hamon meghdar baghi mimune ta etmam barname

// Hala yek Mesal kami pichide mizanam
// Faghat code negah kon ta dark kameli az in bahs dashte bashim
// Dar avval az karbar meghdar mikhad Enter your Number: 
// Bar haye dige mige Enter another Number:
/*
#include <iostream>

int getInteger() {

    static bool s_check = true;
    if(s_check)
    {
        std::cout << "Enter your Number: ";
        s_check = false;
    }
    else
    {
        std::cout << "Enter another Number: ";
    }

    int x;
    std::cin >> x;

    return x;
}

int main() {

    int x = getInteger();
    int y = getInteger();

    std::cout << x << " + " << y << " = " << (x + y) << '\n';

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Kholase (Morur)

// Yek seri Property hayi yad gereftim baraye Variable ha
// Scope, Duration, Linkage
// Mikham inaro yek morur kamel dashte bashim


/*
Scope: 
Block Scope OR Block, ke male Local Variable ha bod
Global Scope OR File Scope ke male Global Variable ha bod
*/
/*
Duration: ya Storage Duration
automatic storage Duration
Static storage Duration
Dynamic Duration
*/
/*
Linkage:
no-Linkage
Internal Linkage
External Linkage
*/

// Khob avvali bahs Scope hast:
// Scope yek Identifier moshakhas mikone ke on Identifier mitune koja ghabel dast ras
// Va dast yabi bashe

// In Identifier ha ham mitunan daraye Block Scope ham Global Scope bashan
// Hala Variable hayi ke daraye Block Scope bashan tanha dar hamun Block ke ta'rif shode
// Dar dast ras hast goftam parameter haye yek Function va Variable hayi ke darun
// Yek Function ta'rif beshan ina Block Scope hastand
// Va hamchenin user-defined-type ha mesl enum va class daron yek Block ta'rif beshan
// Daraye Block Scope hastand 

// Global Scope ha: Az noghteyi ke ta'rif mishan ta payan file ke tosh ta'rif shode
// Ghabel dast ras hast
// Global Scope Shamel che mavaredi mishe?
// Variable hayi ke kharej az Function ta'rif shodan va khod Function ha
// Va user-defined-type hayi ke kharej az Block ta'rif shodan


// Hala berim soragh Duration: Duration yek Identifier moshakhas mikone on
// Identifier che zamani be vojud miyad va che zamani az beyn mire

// Variable hayi ke daraye automatic duration hastand az noghteyi ke ta'rif shodan
// Be vojud miyan va dar payan Block ke tosh ta'rif shodan az beyn miravand
// Shamel che mavaredi mishe? Mavaredi ke daraye Local Scope ya Block Scope bashan

// Variable hayi ke daraye Static hastand chi?
// Ba shoru shodan barname be vojud miyan va payan barname az beyn miravand
// Shamel che mavaredi mishe? Global Variable ha va Static Local Variable ha

// Yek moredi ham hast dynamic duration ke ba darkhast mostaghim barname nevis
// Ijad mishe va az beyn mire 
// Dar mored in sohbat nakardim ta ayande be zoodi inam yad migirim

// Mored ba'adi Linkage: Linkage moshakhas mikone Declaration haye mokhtalef yek
// Identifier aya daran be yek Object yeksani eshare mikonand ya na

// Hala no-linkage shamel che mavaredi mishe?
// Local Variable ha va user-defined-type hayi ke dakhel yek Block ta'rif shodan

// Hala dasteye Internal Linkage: Tanha mitune dar file ke ta'rif shode
// Ghabel estefade va dast ras bashe
// Dar file dige nemishe dast rasi behesh peyda kard
// Shamel che mavaredi mishe?
// Static Global Variable, Static Function, Constant Global Variable
// Va Function hayi ke darun yek unamed namespace ta'rif shode bashand (Ayande)
// Va user-defined-type ha ke darun yek unamed namespace ta'rif shode bashand

// Daste ba'adi External: Identifier hayi ke daraye External Linkage bashand
// Ham dar file ke ta'rif shodan ham dar file haye dige ghabel dast rasi ast
// Shamel che mavaredi mishe?
// Function haye ma'moli, non-Constant Global Variable,
// Extern Constant Global Variable, inline constant Global Variable
// Va user-defined-type hayi ke darun yek Global Namespace ta'rif shode bashand !!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Using

// Ghabl az in ke vizheghi namespace ha dar zaban C++ biyad
// Hame chiz va asami ke dar namespace std dar hale hazer hastand dar Global Namespace bod
// On moghe in ba'es mishod ke Identifier hayi ke darun Standard Library hastand
// Va asami ke khodemun darm ina baham tadakhol bekonanad!!

// Dar sal 1995 in vizheghi namespace moarefi shod
// Va harchizi ke darun Standard Library bod be namespace std montaghel kardand
// Hala ba in taghiri ke e'mal kardand niyaz bod baraye dast rasi be Identifier hayi ke
// Darun Standard Library hastand az std:: estefade konim
// In std:: ta be emruz kheyli didim

// 2 Ta estelah mohem: Yek esm mitune Qualified bashe ya Unqualified bashe
// Qualified name chist? nami hast ke hamrah ba moshakhas kardan Scope ya namespace 
// Neveshte mishavad ya be tor rasmi ba estefade az Operator Scope Resolution :: 
// Moshakhas mishavad
// Mesal: 
// std::cout or ::foo
// Hala in identifier cout Qualified shode tavasot namespace std
// std::cout --> Qualified by namespace std
// ::foo --> Qualified by Global namespace

// Hala yek esmi mitune Unqualified bashe 
// Unqualified name: nami hast ke bedon hich Scope moshakhasi estefade mishavad
// Mesal:
// Cout, cin, x, y va .... agar ghabl az ina hich Scope Resolution Operator vojud nabashe
// Migan Unqualified Name

// Yeki az rah haye kahesh tekrar type std:: 
// Estefade az Using declaration ast:
// Mesal:
/*
#include <iostream>

int main() {

    using std::cout;
    cout << "Hello World!\n";

    return 0;
}
*/
// Dige cout khali benevisim be in using std::cout; eshare dare
// Compiler har cout ro bebine dige error nemide chon bala goftim behesh
// Nokte: Onja ke neveshtim using std::cout; in faghat baraye cout hast 
// Dige nemishe mesal cin khali estefade konim chon faghat be cout eshare kardim
// Mitunim chand ta type hayi ke takrar mikonim yekja using konim ba estefade az ( , )
// Estefade konim mesal:
/*
#include <iostream>

int main() {

    using std::cout, std::cin;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Your age is: " << age;

    return 0;
}
*/
// In Using declaration ta hodudi kam khatar hast

// Rah hal dige estefade az Using directive hast
// Kheyli sade ast yek Using directive miyad tamam Identifier daron yek namespace
// Ro kharej mikone
// Mesal:
/*
#include <iostream>

using namespace std; // Miyad harchi daron std hast mirize namespace Global (Khatar)!

int main() {

    cout << "Hello World!\n";

    return 0;
}
*/
// In rah hal riskesh balast 
// Dalil: Collision Name
// Khob namespace baraye chi avordan? baraye jolo giri az Collision Name
// Pas in faydeyi nadare

// Yek mesal codi dar mored Collision Name dar namespace ha
/*
#include <iostream>

namespace a
{
    void apple() 
    {
        std::cout << "Hello Apple\n";
        return;
    }
}
namespace b 
{
    void apple()
    {
        std::cout << "Apple is useful" << '\n';
        return;
    }
}

int main() {

    using namespace a;
    using namespace b;

    apple(); // Error
    apple(); // Error

    // Compiler gij shode nemidune kodum apple() ro daram call mikonam
    // Male namespace a hast ya b ?
    return 0;
}
*/

// Mesal dige:
/*
#include <iostream>

int cout() {
    return 5;
}

int main() {
    using namespace std;

    cout << cout(); // Error !!!

    // 2 Ta cout darim baz compiler gij mishe !!!
    return 0;
}

Baraye in code bala 2 ta rah hal hast
Vali dige nemishe az on Function cout estefade kard bayad meghdaresho pass bedi
Be yek Function dige az on call begiri

Rah hal 1:
Estefade az std:: ya'ni std::cout ro kamel benevisim

Rah hal 2:
Estefade az Using declaration
using std::cout;
*/

// Nokte: In nokte ham baraye ravesh Using declaration hast ham baraye ravesh
// Using directive hast
// Age in using ro dakhel yek block benevisi mesal block main() {}
// Ya Nested Block (Inner Block)
// Faghat dakhel hamon Block ke using ro neveshti mituni cout ya cin
// Ro bedon Scope Resolution Operator benevisi

// Vali age khasti dar hameja cout benevisi bedon mahdudiyat (Risk bala (Khatar)) !!!
// Bayad on using ro dar Global benevisi

// Nokte: Vaghti using estefade mikonim dastor digeyi vojud nadare betunim
// Cancel konim: using namespace foo;
// In namespace foo nemishe dige cancel kard
// Vali mitunim mahdud konim be yek Block faghat dakhel block estefade she
/*
{
    using namespace foo;
}
*/

// Kholase harfam: Baraye estefade az Using directive parhiz kon !!!
// Estefade az Using declaration taghriban amne vali tarjihet in bashe
// Daron block azash estefade koni toye Global namespace ehtemal khatar dare !!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Function expansion

// Farz kon darim code hamon ro dakhel function main() minevisim hala 
// Yeho ba Task moshakhasi bar khord mikonim mesal Task hesab kardan Minimum 2 ta adad
// Rah hal 1: Biaym code haye marbot be mohasebe kardan Minimum ro dakhel hamon
// Function main() benevisim

// Rah hal 2: Biaym yek function jadid be esm min() ijad konim va code haye marbot 
// Be mohasebe kardan Minimum ro dakhelesh gharar bedim.

// Ravesh 2 nesbat be ravesh 1 kheyli behtare va mazayaye khobi dare masalan:
// Avvalish ineke ba'es mishe hadaf va manzur barname behtar khodesh ro neshon bede
// Dovvomish ine ke fahm  code ha rahat tar mishe mesal: esm function ro bekhunim
// Mitunim befahmim che kari mikhad anjam bede
// Ba'dish ine ke update kardan bakhsh haye barname rahat tar mishe 
// Mohem tarin ghabeliyat ine ke ma Modularity be dast miyarim va dar harjaye barname
// Khastim estefade konim

// Ye mesal codi mizanam vali mohem posht sahne on hast:
/*
#include <iostream>

int min(int x, int y) {
    return (x < y) ? x : y;
}

int main() {
    std::cout << min(5, 6) << '\n';
    // Ma omadim code haye dakhel min ro dar yek Function joda neveshtim
    // Vaghti barname ejra mishe va be in --> min(5, 6) noghte mirese
    // Avvalin kari ke anjam mishe CPU address instruction fe'li ro zakhire sazi mikone
    return 0;
}
*/
// Vaghti migoyim CPU bayad address Instruction fe'li ro zakhire konad
// Manzur in ast ke:
// CPU bayad bedanad dar hafeze koja istade va kodum Statement ra ejra mikonad.
// Baad az ejraye Statement CPU miyad (Program Counter) OR (Instruction Pointer)
// Ra be roz rasani mikonad ta Statement ba'adi ra ejra konad

// Be zaban sade: CPU nemitavanad Statement ba'adi ra hads bezanad
// Bayad address fe'li Instruction ra zakhire konad ta ba'ad az ejraye 
// Har Statement be tavanad Statement ba'adi ra peyda va ejra konad !!

//-----------------------------------------------------//
// Mabhas: Instruction dakhel Function Expansion

// Farz kon dar zaban Assembly yek seri code ha neveshtim CPU avvalin code 
// Ra ejra mikonad va az koja mifahme ba'ad az in code che codi ra bayad ejra konad?
// CPU miyad address fe'li Instrcution  ro zakhire sazi mikone 
// Mesal:
/*
#include <iostream>

int main() {

    // Ba g++ compile kon error haro velesh

    // Address 100: LOAD A,5
    // Address 101: ADD A,3
    // Address 102: move eax -> result
     int result; 
        asm(
        "movl $5, %%eax\n"   // LOAD A,5
        "addl $3, %%eax\n"   // ADD A,3
        "movl %%eax, %0\n"   // move eax -> result
        : "=r" (result)      // output
    );
    std::cout << "Result = " << result << "\n";

    return 0;
}
*/
// On code bala ro didi: va inam address hayi ke mesal zadam barash
/*
    Address 100: LOAD A,5
    Address 101: ADD A,3
    Address 102: move eax -> result
*/
// Hala Trace konim:
// Start: meghdar avvalie IP/PC tavasot Operating System roye address avvali dastor
// Gharar migirad:

// IP = 100 // CPU miravad soragh address 100
// Va dastor ra mikhanad: Ejraye LOAD A,5 --> meghdar 5 dakhel A gharar migirad

// Ba'ad az ejraye dastor avval: CPU IP ro be roz rasani mikonad
// IP = 101 // CPU dastor address 101 ra mikhanad
// Ejraye ADD A,3 --> Meghdar A ke 5 bod mishavad 8 (5 ro ba 3 plus mikone)

// Ba'ad az ejraye dastor dovvom: CPU IP ro be roz rasani mikonad
// IP = 102
// Meghdar dakhel (Register) hamon (eax) (Ke alan 8 hast, ya'ni 5 + 3)
// Mire dakhel Variable result dar C++

// IP va PC har 2 tash Address ro negah midaran pas che farghi dare?
// Farghesh faghat name va Architecture CPU hast:
// Register (ثبات):           Architecture CPU:
// IP (Instruction Pointer)    X86/ X86_64
// PC (Program Counter)        ARM, MIPS va ...

// Baraye CPU haye Inter (X86/ X86_64)
// Register ke address statement ba'adi ro negah midare IP nam darad
// Dar halat (16 biti): Namash IP hast --> Instruction Pointer
// Dar halat (32 biti): Namash EIP hast --> Extended Instruction Pointer
// Dar halat (64 biti): Namash RIP hast --> Register Instruction Pointer

//-----------------------------------------------------//

// Edame bahs: Function expansion

// Pas fahmidim chejuri code haro khat be khat ejra mikone in CPU
// Va ham chenin dar injaye code: int min(int x, int y)
// Bayad parameter haye x, y ro Instantion(تخصیص حافظه) va hamchenin
// Initialize(مقدار دهی اولیه) bekone
// Ya'ni dar hafeze RAM beheshon makan takhsis bede va Argument hayi ke be in Parameter
// Pass dade mishe ro dar in makan benshone 
// Ba'desh code haye dakhel Function min() ejra mishe ba'ad tamum shodan
// Function bar migarde be jayi ke in Function ro Call kardim 

// Khob hameye inaro goftam ta be inja beresim:
// Farz kon yek Function darim code haye darunesh kheyli ziyad hast
// Yek Task pichideyi anjam mide
// Hala vaghti on Function ro Call mikonim yek sar bari injad mikone
// Ya'ni yek seri kar haye ezafi anjam mide 
// Be in kar haye ezafi Overhead migan hamon kar hayi ke bala goftam 
// Zakhire sazi address fe'li Instruction, Takhsis hafeze va
// Pass dadan Argument ha be Parameter ha 
// Farz konim in kar haye ezafi ya hamon Overhead 5 nanoSeconds tul mikeshad
// Va masalan code haye darun on Function ke Task pichideyi anjam mide 10 MiliSecond ast
// Pas Overhead nesbat be code haye darun Function ke 10 MiliSecond tul mikeshad
// Nachiz ast.

// Vali masalan hamon Function min() ke bala neveshte budim kheyli function sadeyi hast
// Code darun on masalan dar 1 nanoSeconds ejra mishe vali sar bari ke Function Call
// Ijad mikone hamon Overhead ke goftim masalan 5 nanoSecond nesbat be ejraye Code haye
// Dakhel Function min() kheyli ziyad hast va injuri Performance makhsusan
// Dar Function haye sade ke ziyad call mikonim payin miyad agar jam'
// Overhead ziyad shavad ba'es kahesh Sor'at barname mishe !!!

// Khob alan dar hamchin senario az kheyr Function begzarim? Javab kheyr !!!

// Khoshbakhtane Compiler zaban C++ yek Trick(ترفند) dare ke be komakesh
// Mitune az hamchin bahsi geser dar bere 
// Va in Trick chizi nist be joz ( inline expansion )
// Hala in inline expansion chiye? code dakhel on Function dar jayi ke on Function call shode
// Montaghel mishe (Posht sahne) mesal:
/*
#include <iostream>

int min(int x, int y) {
    return ((x < y) ? x : y);
}

int main() {

    // std::cout << min(5, 6) << '\n';
    // Posht sahne code balayi payin:
    std::cout << ((5 < 6) ? 5 : 6) << '\n';

    // Nokte mosbat: Ba inke meghdarash dar zaman Compile moshakhas shode
    // Compiler hoshmandane amal mikone dar posht sahne 5 ro gharar mide
    // Mesl: 
    std::cout << 5 << '\n';

    return 0;
}
*/

// Vaghti dar inline expansion mostaghim code haye masalan min() jaygozin mishan 
// Dar jayi ke on Function Call shode dar inja dige hich Overhead ii nadarim !!!

// Nokte: inline expansion hamishe mojeb afzayesh Performance nemishe
// Balke inam hazine dare
// Mitune ba'es afzayesh Performance bashe mitune nashe 
// Mitune ba'es kahesh Performance ham bashe

// Baraye har Function momkene 3 halat pish biyad:
// 1- On Function bayad expansion beshe
// 2- Momkene ya mitune beshe
// 3- Ya expansion nemishe
// Aksar Function ha dar hamin dasteye 2 hastand

// Hala in tasmim giri bar ohdeye Compiler ast
// Va Barname-Nevis haye Compiler say mikonanad kari konanad 
// In etefagh inline expansion vaghti etefagh bi ofte ke be naf' ma bashe !!!

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: inline keyword

// Dar jalase ghabl dar mored Function Expansion
// Sohbat kardim
// Compiler haye avvalie in ghabeliyat ro nadashtan tashkhis bedan
// Aya Expansion dar felan ja Performance ro bala mibare ya payin miyare
// Baraye hamin zaban C++ omad Keyword inline ro era'e kard ke
// Barname nevis in keyword ro gharar bede be Compiler yek darkhast
// Bede bege behtare Function Expansion inja anjam beshe ya na.
// Compiler mitunest ghabol kone ya nakone
// In chizi ke goftam male Standarad haye ghadimiye chon emruze
// Hata bedun inline ham kheyli az Compiler ha Automatic inline mikonan
// Age Behine Sazi rushan bashe !!!

// Khob chejuri mishe rushan kard:
// Baraye Compiler haye Clang++ va g++:
// Bayad ba Flag haye -O2 OR -O3 --> O bayad Capital bashe bozorg ya'ni
// Fargheshun az Internet mituni bebini
// Mesal: g++ -O2 main.cpp -o MyApp.exe

// Baraye Compiler MSVC chejurie?
// Roye Project right click kon Properties 
// Toye ghesmat Configuration Properties ghesmat C/C++ ghesmat 
// Optimization --> Maximum Optimaztion (/O2)

// Khob in Keyword inline dar Standard haye jadid karbord dige darad
// On Inline Expansion male ghadimast 

// Dar gozashte goftim Function ha ro dar (Header File)
// Piyade sazi nakonid chon age dar chandin Source file on (Header File)
// #include beshe definition on Function dar chandin Source code 
// Gharar migire va on moghe khataye Linker mide mige
// Felan Function bish az 1 bar Define shode
// Hamon ke Ghavanin ODR naghz mishe!!!

// Hala dar zaban C++ Standarad haye jadid in Keyword inline 
// Mafhum jadid darad in mafhum be ma ejaze mide chand definition 
// Dar barname dashte bashim
// Ya'ni vaghti dar yek (Header File) yek Function ro inline konim
// Dar har chand Source code ham #include konim error nemide
// Hamon bahs Linkage.

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Consteval