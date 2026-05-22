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
// Mabhas: Dastor Switch
// Dar donyaye barname nevisi dastor switch kheyli kamtar az if estefade mishavad.
// Koja estefade mishavad? Vaghti miaym az tedadi if | else if estefade mikonim
// Khanayi codemun ro miyare payin 
// Mesal:
/*
void foo(int x) {
	
	if(x == 1)
		;
	else if(x == 2)
		;
	else if(x == 3)
		;
	else
		;
	
	return;
}
*/
// Dar mesal bala: mas'ale avval ineke Variable X bayad 3 martabe Evaluate beshe ke aslan
// Behine nist.
// Manzur az Evaluate ya'ni in x bayad 3 bar barresi beshe x == 1, x == 2, x == 3
// Mas'ale dovvom ine ke khanayi code kheyli eftezah mishe
// Dar project haye bozorg ehtemal in hast ke 10 ta if-else benevisim.

// Mesal bala ro biaym ba Switch Refactor konim
// Mesal:
/*
void foo(int x) {

	switch(x)
	{
		case 1:
			std::cout << "Hello\n";
			return;
		case 2:
			std::cout << "Bye\n";
			return;
		case 3:
			std::cout << "World!\n";
			return;
		default:
			std::cout << "else\n";
			return;
	}
}
*/

// Khobi Switch bala nesbat be if ineke ke 1 bar Evaluate mishe ke behine hast
// Va khanayi bala tari darad
// Baraye sakhtan Switch Statement Keyword switch ro minevisim
// Ba'ad yek parantez () gharar midim darunesh Expression mored nazar ro gharar midim
// 90% mavaghe Expression ma yedune Variable hast mesl x balayi

// Faghat bar khalaf zaban haye dige barname nevisi yek tafavoti dar inja vojud darad in chizi ke ma beyn
// in 2 ta parantez () gharar midim dar nahat vaghti Evaluate mishe bayesti yek Integer ya Enumerated Type baraye ma bargarune.
// Hala on x bala dar Switch gharar dadim age yek type Float, double, string bod behemun Error midad.

// Inam begam mitunim type char ham estefade konim !!!

// Chera C++ hamchin kari karde? Zaban C++ yek zabani hast ke dar hame ja mikhad be behine tarin nahv momken
// Amal kone Kolan hadafesh behinegi bod.

// Az on zamani ke Compiler haye C kar khodeshun ro shoru kardan marsum tarin shiveyi ke baraye Switch 
// Dar nazar migerftan estafed az (Jump Table) bod.

// Jump Table: Yek teknik behine sazi sath Compiler ast ke baraye ejraye kar amad dastorat Switch dar zaban haye C/C++
// Estefade mishavad.
// Dar in ravesh be jaye inke Compiler code Switch ra be zanjire az dastorat if, if-else (Ke barresi tartibi darand) tabdil konad.
// Yek arraye az address haye hafeze (Function Pointer) dar zaman Compile ijad mikonad.

// Mekanizm amalkard: 
// 1- Sakht jadval: Compiler yek arraye dar bakhsh dade (Data Section) barname misazad ke Index haye on maghadir 
// case (mesal 0,1,2,...) hastand va mohtavaye marbot be on case bayad az onja shoru shavad.
// 2- Direct Jump: Dar zaman ejraye barname CPU ba estefade az meghdar Variable Switch mostaghiman be Index 
// Marbot dar jadval dast rasi peyda karde va Address zakhire shode dar on ra mikhanad va bela fasele be on Address paresh mikonad. 

// Mesal algorithmi:
// Bedon Jump Table: Pichidegi zamani O(n) ast ya'ni agar 100 mored dashte bashim momken ast
// 100 bar shart barresi shavad.
// Ba Jump Table: Pichidegi zamani O(1) sabet ast ya'ni zaman residan be code marbote, sarf nazar az tedad kol case ha,
// Hamishe yek bar khandan az Arraye ast.

// Mored akhar darmored Jump Table: Tanha ba maghadir Integral kar mikonanad.


// Bargardim be Switch bad az neveshtan Expression bayad yek Block | Brace baz baste gharar bedim va darunesh 
// Label hamun ro gharar bedim 
// Mesal 2 no' Label darim:
// Case Label
// Default Label

// Baraye ta'rif case label: ebteda Keyword case ro gharar midim va ba'desh ya moghabelesh
// Constant Expression gharar midim ya'ni hamun meghdari ke mikhaym bara bari sho check konim.

// Khob age on Conditional Expression ke gharar dadim ba meghdari ke joloye case gharar dadim bara bar bashad
// Statement haye case marbote ejra mishavad.

// Mahdudiyati baraye tedad Case Label ha nadarim.
// Vali age Case Label tekrari dashte bashi Error mide.
// Mesal: Error mide !!!
/*
	case3:
		;
		return;
	case3:
		;
		return;
*/

// Noe ba'adi Label: default label hast
// Keyword default minevisi moghabelesh hichi nemizari be joz : 
// Age adad mored nazar ya hamun Expression mored nazar bara bar ba hich kodum az case ha nabod default ejra mishe.
// Default ekhtiyari ast mitunim gharar bedim mitunim gharar nadim.
// Bishtar az 1 bar ham nemituni ghararesh bedi, be surat gharar dadi ham akharin label gharar midanesh in default ro

// Mesal: Yek switch minevisam return nemizaram bebin
/*
void foo(int x) {
	switch(x)
	{
		case 1:
			std::cout << "Hello World!\n";
		case 2:
			std::cout << "Hello World!\n";
		case 3:
			std::cout << "Hello World!\n";
		case 4:
			std::cout << "Hello World!\n";
		case 5:
			std::cout << "Hello World!\n";
		default:
			std::cout << "Bye bye\n";
	}

}
*/
// Farz kon Argument x ro dadim 2 miyad case 2, case 3, case 4, case 5. default ro baram ejra mikone chera?
// Case 1 ejra nashode chon bar gharar nabod x ma 2 bod case 2 bar gharar bod dastorat darunesh ejra mishe
// Dastorat case haye ba'adi ham ejra mishe vaghti return ro gharar nadim.

// So'al: Hala man mikham faghat az Switch biam birun va code haye birun switch ke darun Function hast ejra beshe
// Bayad be jaye return az Keyword break; estefade konim.

// Tosiye nahayi: hamishe dar entehaye Label haton baste be niyazetun return | break gharar bedin !!!

// Yek mesal senario tor:
// Senario: Vaghti character ma horuf seda dar bod True return kone 
// Horuf seda dar mesl: A - E - I - O - U - a - e - i - o - u
// Ba 2 ravesh piyade sazi mikonam ino
// Avval ba conditional statement ba'ad ba Switch
/*
bool isVowel(char y) {
	return (y == A || y == E || y == I || y == O || y == U || y == a || y == e || y == i || y == o || y == u);
}
*/
// In mesal bala code khobi nist:
// 1- Khanayi payin
// 2- In variable y bayad 10 martabe barresi beshe ke behine nist!

// Mesal ba switch: 
/*
bool isVowel(char y) {
	switch(y)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		default:
			return false;
	}
}
*/

// Mored ba'adi: Mitunim ghabl va ba'ad az Case Label hamun Variable define ya declare konim 
// Vali mojaz be Initialization nistim nemitunim meghdar dahi avvali konim error mide
// Mesal:
/*
#include <iostream>

int main() {
	
	int x;
	std::cin >> x;
	switch(x)
	{
		int a;
		//int b = 5; // Error
		case 1:
			int y;
			y = 5;
			break;
		case 2:
			y = 10;
			break;
	}

	return 0;
}
*/
// Code kamelan mo'tabare: y ro meghdar dadam vali error nemide
// Chon Assignment mojaz ast pas kamelan doruste
// Omadam y ro dar case 2 meghdaresho bara bar ba 10 kardam ke kamelan mo'tabare
// Chon y mota'legh be case 1 nist ke
// Mota'legh be Scope khodesh hast
// Scope in case 1 va case 2 yekie pas moshkeli nadare !!!i

// Mesal dige:
/*
#include <iostream>

void foo(int x) {

	switch(x)
	{
		int y{};
		int x{};
		y = 7;
		case 1:
			int j;
			j = 11;
			std::cout << y << x << j << '\n'; // Output --> 0011
		break;
	}
	std::cout << x << '\n'; // Output --> 1
	return;
}
int main() {

	foo(1);

	return 0;
}
*/
// Chera y 0 shod mage Assignment mojaz nabod bayad 7 mishod?
// Chon kharej az case 1 meghdar dahi kardim faghat code haye case marbote ejra mishavad.
// Case marbot ma ham 1 hast
// Pas chera y va x ta'rif shode mage code haye case 1 faghat ejra nemishe? Define variable ba ejraye code fargh dare
// Switch (Runtime Jump) darad
// Vali define Variable yek mafhum jodas male (Compile Time / Scope) ast.
// y az nazar Scope define shode vali az nazar ejra meghdar dahi nashode !!!
// Tosiye: Define Variable dakhel Switch pishnahad nemishe !!!


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Goto statement
// No'e digar dastorat Control Flow ke mikhaym yad begirim: Unconditional Jump
// Karesh ine ke noghte ejra az yek noghte az barname ra be yek noghte dige miparune Jump mizane !!!

// Chera behesh migan Unconditional? Chon mesl if | switch nist ke dar surat bargharar budan shart
// Be felan dastor Jump bezanim sharti vojud nadarad !!!

// Baraye estefade az in bayad az dastor ( goto ) estefade konim.

// Noghteyi ke mikhaym behesh beparim ba estefade az Statement Label ta'rif mikonim.
// Mesal:
/*
#include <iostream>
#include <cmath>

int main() {

	double x{};
	tryAgain: // Label 
	std::cout << "Enter a non-negative number: ";
	std::cin >> x;
	if(x < 0.0)
		goto tryAgain;
	std::cout << "The square root of " << x << " is: " << std::sqrt(x) << '\n';

	return 0;
}
*/

// Baraye mohasebe jazr az function std::sqrt() dar Library <cmath> estefade mikonam.
// Dar S5 dar mored Scope ha sohbat kardim ke 2 no'e Scope dashtim:
// Global Scope | File Scope
// Local Scope | Block Scope

// Yek no'e digar ham hast: Function Scope
// In Label code bala ke neveshtam az in Function Scope estefade mikone
// Be che ma'ni hast? In Label dar sarasar Function ke ta'rif shode dar dast rast ast hata
// Ghabl az noghtei ke ta'rif shode
// Mesal:
/*
void foo() {
	
	goto Label;	

	Label: // Label

	return;
}
*/

// Deghat kon har 2 ta dar yek Function bashand !!!

// Mesali digar:
/*
#include <iostream>

void printCats(bool skip) {

	if(skip)
	{
		goto end;
	}
	std::cout << "Cats\n";

	end:
	// return;
}
*/
// Age akhar end chizi nabashe bebin return comment kardam
// Warning mide:
/*
Season6.cpp: In function ‘void printCats(bool)’:
Season6.cpp:620:1: warning: label at end of compound statement only available with ‘-std=c++23’ or ‘-std=gnu++23’ [-Wc++23-extensions]
  620 | }
	| ^
*/
// Mituni ba yek Null statement ham saket koni in Warning ro
/*
int main() {
	
	printCats(1);

	return 0;
}
*/

// Nokte: Aslan az in ( goto ) estefade nakon chon kamelan mansokh shode ast !!!

// Dar dars PL(Programming Languages): Eyb haye digar goto ham migan khasti boro bekhunesh.


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: (Loop) While
