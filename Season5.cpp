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

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Local Variable