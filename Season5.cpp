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

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Namespace (Part 1)