// In The Name Of God
// Season 6:

/*--------------------------------------------------------------------------------------------------------------------*/

// Dar in fasl gharare hol mehvar Control Flow sohbat konim
// Zamani ke barname ejra mishe CPU shoru mikone va dastorat ro
// Az balaye function main() yedune yedune ejra mikone
// Ta zamani ke be akharin dastor az function main() berese
// Be in migim ejraye ( Sequential ) ya ( Sequential Execution )
// Inam begam: In tartib mitune taghir kone hamishe code ha ke be tartib ejra nemishe !!!

// Yek estelahi vojud dare be esm: Execution Path
// Be donbaleye moshkhasi az Statement ha ke CPU on haro ejra mikone behesh migan
// ( Execution Path ) be farsi mishe ( Masir ejra ) 

// Mesal codi:
// Execution Path in code chi mishe?
// Be tartib Line haye 23 va 24 
/*
int main() {

    int x {}; 
    return 0;
}
*/

// In mesal bala mesali ast az barname ( Straight Line Program )
// Khob in estelah Straight Line Program chiye?
// Barnamei ke har bar ejra mishe masir yeksani az Statament haro ejra mikone 
// Code bala ro 1000 bar ham ejra koni Line haye 23 va 24 ejra mishe 

// Senario dige:
/*
#include <stdio.h>

int main() {

    int x{};
    scanf("%d", &x);
    if(x <= 14)
        ;
    else
        ;

    return 0;
}
*/
// In mesal codi bala tavasot Straight Line Program ghabel piyade sazi nist
// Chon ehtemal dige (User1) adad ro vared kone 13
// Va yek (User) dige (User2) adad ro vared kone 5
// Khoruji motafavet hast
// Masir ejraye code fargh mikone injuri !!!

// Falsafe dastorat Control Flow ya Control Jaryan chiye?
// Zaban C++ omade yek seri dastorat ro dar ekhtiyar 
// Ma gharar dade ke ba ina mitunim
// Execution Path barname ro taghir bedim

// Yek estelah dige hast: Branching
// Zamani ke yek Control Flow Statement ba'es beshe 
// Noghte ejraye yek Barname az halat Sequential be yek 
// Halat gheyr Sequential bere migim Branching etefagh oftade
// Be ebarat sade on etefaghi ke dar natijeye yek Control Flow miofte
// Behesh migan Branching

// Barname dar yek noghte tasmim migirad va masir ejraye motafaveti ra
// Entekhab mikonad ya'ni ejra digar khati nist
// Chand masir momken vojud darad

// Mesal code bala ke ba if zadam hamun Branching ast
// Barname be 2 ta sakhe taghsim mishavad

// In Season kolan Control Flow haro yad migirim ke
// 6 daste ast:
// 1- Conditional statement 
// 2- Jump
// 3- Function call
// 4- Loop
// 5- halts
// 6- Exceptions (In fasl ino nemikhunim enshalah season haye ba'ad)

// Mesal: codi ba Exceptions alan mizanam va tozih kotah ham midam
// Ta yek ashnayi dashte bahashim ta Season haye ba'ad kamel tar yad migirim
// Execptions: استثنا ها
// Error handling ast 
// Mutunim az Error hayi ke ba'es mishe barname baste she jelogiri konim
// Mesal codi:
// Taghsim bar 0
/*
#include <iostream>

int main() {

    std::cout << "Enter first number: ";
    int x{};
    std::cin >> x;
    std::cout << "Enter third number: ";
    int y{};
    std::cin >> y;
    try
    {
        if(x == 0 || y == 0) throw "No divide Zero\n";
        std::cout << x; 
        x /= y;
        std::cout << " / " << y  << " = " << x << '\n';
    }
    catch(const char *msg)
    {
        std::cerr << msg;
    }

    std::cout << "\e[31m" << "End..." << "\e[0m";
    

    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Dastorat if va Block ha

// Avvalin daste az Control Flow dastorat sharti if, else hast
// Ke ziad manovr nemidam roye in if ha chon kamel baladim
// Faghat yek seri nokat ro migam:

// Conditional Statement chiye? Statementi ke moshakhas mikone aya felan Statement 
// Bayesti ejra beshe ya na

// Dar zaban C++ 2 noe az in dastorat darim:

// 1- if statement
// 2- switch statement

// Ebteda if ro migam: (Syntax)

/*
    if(condition)
        ;
    
    ##########################

    if(condition)
        ;
    else
        ;

    ##########################
    // Bish az 1 Statement Block zaruri hast
    if(condition)
    {
        ;
        ;
    }
    else
    {
        ;
        ;
    }

    ##########################
*/

// Nokte: Vaghti dastor ro dakhel Block gharar nemidim
// Compiler khodesh in karo mikone 
// Programmer:
/*
    if(true)
        ;
*/

// Compiler:
/*
    if(true)
    {
        ;
    }
*/

// Chera nokte bala ro goftam? Chon age naduni Compiler che balayi sare codet miare 
// Momkene chenin eshtebahi koni:
/*
int main() {

    if(true)
        int x = 5;


    x = 4; // Error --> (Out of Scope) hast
    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Eshtebahat rayej dar ertebat ba if

// Moshkelati ke ehtemal dare har Programmer ke ba if kar mikone barkhord kone

// Avvalin moshkel: ( Dangling else ) hast

// Dangling ham az nazar لغوی be ma'naye معلق hast
// و کنایه به بلاتکلیف بودن داره

// In moshek chiye?
// Ma mitunim if haye nested benevisim? hamon if haye to dar to
// Engar ba g++ warning ro nemide
// Faghat dar clang++ mide
// Compile kon: clang++ Season6.cpp -o myApp
/*
Season6.cpp:217:5: warning: add explicit braces to avoid dangling else [-Wdangling-else]
217 |     else
    |     ^
1 warning generated.
*/
/*
int main() {

    if (true)
        if(true)
        ;
    else
        ;

    return 0;
}
*/

// Code bala mobham hast on else belataklif hast
// Ma'lom nist male kodum if hast
// Jolo ya aghab bordan code ta'siri nadarad.

// Rah: estefade az Brace hamun Block --> { }


// Mored ba'adi: Null Statement
// Chiye? Yek Expression hast ke tanha shamel ( ; ) ast
// Null Statament --> ;
// void foo(){ if(true) ; }
// Karesh chiye? Hichi xD

// Jayi ke Programmer nemikhad Statement khasi bezare ya Syntax gir mide bayad ye chizi
// Bezari mitunim Null Statement ro bezanim ta ba'adan taghir bedim


// Be sorat sahvi mitune estefade she va mojeb Bug shavad
// Mesal:
/*
    if(nuclearCodesActivated());
        blowUptheWord();
*/
// In blowUptheWord(); hich rabti be if nadare 
// Dar har sorat ejra mishe


// Mored akhar: Estefade az Assignment Operator be jaye Equality Operator dar Condition
// Mesal:
// Bazam bayad ba clang++ compile koni ta warning ro bebini
/*
User> clang++ Season6.cpp                                                                                         
Season6.cpp:266:10: warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
  266 |     if(x = 0)
      |        ~~^~~
Season6.cpp:266:10: note: place parentheses around the assignment to silence this warning
  266 |     if(x = 0)
      |          ^
      |        (    )
Season6.cpp:266:10: note: use '==' to turn this assignment into an equality comparison
  266 |     if(x = 0)
      |          ^
      |          ==
1 warning generated.
*/
/*
#include <iostream>

int main() {

    // Har adadi vared koni False mide
    // Chon vaghti karbar adad vared mikone mesal --> 5
    // darun on parantez if Condition
    // Adad 0 miyad rikhte mishe be x
    // Assign mishe xD
    // Va adad 0 ham dar Boolean False hast
    int x{};
    std::cin >> x;
    if(x = 0)
        std::cout << "True\n";
    else
        std::cout << "False\n";


    return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/
