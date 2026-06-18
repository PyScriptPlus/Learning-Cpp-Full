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

// Halghe yeki az por karbord tarin emkanati hast ke dar har zaban barname nevisi vojud darad.

// In emkan mide majmo'ei az Statement ro ta zamani ke yek Shart bargharar bashad tekrar bekone.
// Mesal dar zendegi Real:
// Mesal bedon loop:
// Man be yek nafar dige migam zang dar khone ro bezan 10 martabe hey migam zang khone ro bezan
// Mesal ba loop:
// Hamin senario bala man be yek nafar dige 1 bar migam 10 martabe zand bezan (Dige hey nemigam zang bezan)


// Halat dige: Migam behesh ta zamani ke dar ro baz kone zang bezan !!!

// Mesal codi bedon loop: Senario az 1 ta 10 chap kon
/*
#include <iostream>

int main() {

	std::cout << 1 << '\n';
	std::cout << 2 << '\n';
	std::cout << 3 << '\n';
	std::cout << 4 << '\n';
	std::cout << 5 << '\n';
	std::cout << 6 << '\n';
	std::cout << 7 << '\n';
	std::cout << 8 << '\n';
	std::cout << 9 << '\n';
	std::cout << 10 << '\n';

	return 0;
}
*/
// Hala mikham loop while ro yad bedam in Senario ro ba while piyade konim
// Syntax loop while:
/*
	while(condition)
		statement;
	
	Bishtar az 1 statement Block mizarim:
	
	while(condition)
	{
		statement;
		statement;
	}

	Age condition ma True bashe code haye darun Block ejra mishe
	Shart khoruj az Loop False budan Condition hast

	Ba break; ham mituni kharej beshi ke dar Switch ham goftam
	Vali break; shart khoruj az Loop nist	
*/
// Mesal: 1 ta 10 print kon
/*
#include <iostream>

int main() {

	// Hala ma bayad loop while ro control konim ba ravesh Increment OR Decrement
	int i = 0;
	while(++i <= 10)
		std::cout << i << '\n';

	// Halat dige ba while hamin senario:
	int y = 0;
	while(y <= 9)
	{
		++y;
		std::cout << y << '\n';
	}

	// Halat haye dige baste be Programmer dare chejuri codesho benevise
	// Shayad yeki injuri benevise mesal:
	int z = 0;
	while(z <= 9) std::cout << ++z << '\n';

	return 0;
}
*/

// Ma mikhaym Loop be daf'at moshakhasi ejra beshe ke toye code bala goftam
// Vali inja kamel tar tozih midam
// Baraye inke niyaze be tedad daf'ati ke Loop ejra shode rahgiri dashte bashim 
// Be no'ei yek Variable ijad mikonim mas'ol rahgiri hamin kar bashe be hamchin Variable migan
// (Counter) ya (Gam halghe) ke dar besiyari az mavaghe type esh Integer hast
// Variable Counter hatman Signed bashe

// Loop i minevisam ke infinity bashe (Bi nahayat bashe):
// Tanha rah birun omadan az in Loop estefade az:
#if 0
while(true)
{
	// return;
	// break;
	// exit;
	// goto;
	// exception
	// Ya inke khodemun barname ro bebandim
}
#endif

// Mesal:
/*
#include <iostream>

int main() {

	char c;

	while(true)
	{
		std::cout << "Loop again: (Y/N)? ";
		std::cin >> c;
		if(c == 'N' || c == 'n')
			return 0;
	}
	return 0;
}
*/

// Loop haye to dar to dar for migam chon behtare dar for estefade beshe

// Yek no'e digar az Loop mesl while hast be name: do-while
// Injurie ke vaghti shart Loop ham False bashe Statement haye darunesh 1 martabe ejra mishan
// Deghat kon: Ebteda Statement haye Loop ejra mishe ba'ad condition barresi mishe
// Mesal:
/*
#include <iostream>
#include <string>

int main() {

	std::string pssw = "MamaD";
	std::string gpssw;
	do
	{
		std::cout << "Enter your password: ";
		std::cin >> gpssw;
	}while(gpssw != pssw);

	std::cout << "Success password !\n";

	return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: (Loop) for

// Halghe for nesbat be halghe while por karbord tar ast

// Dar zaban C++ dar hale hazer 2 no' halghe for vojud dare yekish ke az avval bude va yek no' jadid tari ham dar C++11 mo'arefi shod
// Ebteda be no' avval mipardazim: Syntax for ke az 4 bakhsh tashkil shode
/*
	for(1 , 2 , 4)
		3;

	1: Shomarandamun hast
	2: Shart halghe hast
	3: Badane halghe Body
	4: Gam ya hamun Counter 
	
	Bazam migam shart khoruj az halghe False budan ast
*/

// Be che tartibi halghe for ejra mishe?
// Ebteda Variable halghe ijad mishe ya'ni shomare 1
// Dar shomare 2 shart check mishe age True bod vared dastorat Halghe mishe hamun Body shomare 3
// Ba'ad mire be baksh Shomare 4 ke Variable halghe dast kari mishe 
// Dobare bar migarde be shomare 2 ba'ad 3 ba'ad 4
// Ta zamani in kar tekrar mishe ke shomare 2 hamun Shart halghe False bashe
// Mesal:
/*
#include <iostream>

int main() {

	for(int i{1}; i <= 10 ; ++i)
	{
		std::cout << i << '\n';
	}
	// Esm variable ( i ) yek jur gharar dad ast age yek for daruni ham bashe migan ( J ) darun inam bashe migan ( K )

	return 0;
}
*/

// Nokte: In 4 ta shomare age yekishun mesal: Ghesmat 2 ro hamun shart ro nazari error nemide chon hichkodum ejbari nist
// Mesal:
// for( ; ; ); // Loop infinity mishe !!!

// Mesal baraye Loop haye to dar to:
/*
#include <iostream>

int main() {

	// Yek jadval zarb hast mesal
	for(int i = 1; i <= 10; ++i)
	{
		for(int j = 1; j <= 10; ++j)
			std::cout << i * j << "\t";
		std::cout << '\n';
	}

	return 0;
}
*/

// Kalame Iteration: ya'ni tekrar yek seri dastor chand bar ta vaghti yek shart bargharar bashad.
// Dar halghe to dar to halgheye daruni kamel ejra mishe ya'ni int j = 1 ham ejra mishe har bari ke shart i bar gharar bod

// Khob vaghti keyword for ro minevisi va Tab mizani kamel kone yani barat miyare:
/*
for(size_t i = 0; i < counter; i++)
{

}
*/

// In size_t chejur DataType hast?
// size_t yek no' dade adadi bedun alamat (unsigned) dar C/C++ ast ke baraye namayesh Lengh ha va Index ha estefade mishe.
// size_t no'i adad sahih gheyr manfi ast ke baraye negahdari: Andaze hafeze, andaze Arraye ha, natayej function sizeof()
// Mesal: size_t s = sizeof(int);

// Chera dar halghe for estefade mishe in size_t? 
// Vaghti roye Arraye ya Container ha mesl (vector, string) halghe mizanid function size() onha meghdar size_t bar migardune
// Mesal:
/*
#include <iostream>
#include <vector>

int main() {
	
	std::vector<int> v = {1,2,3};
	for(size_t i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << '\n';
	}

	return 0;
}
*/
// Chon v.size() az no' size_t ast behtar ast i ham size_t bashad ta Warning Compiler darbare moghayese ( signed ) va ( unsigned ) ijad nashavad.
// Size khod DataType size_t be me'mari system bastegi darad:
// System 32 biti: 4Byte
// System 64 biti: 8Byte

// Nokte: Index haye Vector Vector az 0 ast.
/*
	// Ina doruste:
	i < v.size()
	i <= v.size() - 1

	// In ba'es UB mishe:
	i <= v.size()
*/

// No'e ba'adi for: Renge-based for
// In no' dar C++11 mo'arefi shod tamiz tar ham hast
/*
	for(type Variable : container)
	{
		Body
	}
*/
// Manzur az Container on sakhtar hayi ast ke chand dade ra dar khodeshun negah midarand
// Container = Zarfi baraye chand meghdar
// Mesal: string ham Container ast chon majmuyi az char hast
// Mesal codi:
/*
#include <iostream>
#include <string>

int main() {

	std::string s = "Hello";
	for(char c : s)
	{
		std::cout << c << '\n'; // H \n e \n l \n l \n o \n
		// Yeki yeki char haro chap mikone 
	}

	return 0;
}
*/
// Harf akhar for no' dovvom ba size_t dar ayande kamel barresi mikonim ba Arraye ha ba vector ina kamel barresi mishe
// In faghat ashnayi kochik bod dar bareye Arraye va peymayesh arraye ba for ha

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Keyword break & continue

// Ba break ke ashnayi darim dar Switch goftam che kari mikone?
// Zamani ke Keyword break dar Switch estefade mikonim ba'es mishod noghte ejraye barname az Switch
// Birun biyad va baghiye dastorat ejra she hamin kalame ro mitunim dar for & while & do-while estefade konim
// Ke daghighan hamun kar ro mikone ham baraye for & while & do-while

// Mesal ba while:
/*
	int x{};
	while(x > 1)
	{
		--x;
		break;
		++x; // In dige ejra nemishe !!!
	}
*/

// Khob Continue chiye? continue ba'es nemishe az kol loop birun biaym vali ba'es mishe
// Az Iteration fe'li birun biaym
// Mesal mizanam farz kon 10 bar tekrar darim in 10 ta Iteration ma ast 
// Toye 4 omi continue gharar midim ono ejra nemikone mire baghiye ro ejra mikone

// Mesal codi ba for:
/*
	for(int i = 1; i <= 10; ++i)
	{
		if(i == 4)
		{
			continue;
		}
		std::cout << i;
	}
*/

// Vaghti mirese be 4 on if ejra mishe va continue ba'es mishe bepare be (gam loop | counter)
// Dar while ham mipare be (shart loop | condition)

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Dastorat Halt

// Khob in Halt chiye? yek dastori ke ba'es mishe barname payan peyda bekone.

// Dar zaban C++ Halt yek keyword nist balke be vasile Function ha piyade sazi mishe.

// Yek moruri konim vaghti ke yek barname be surat Normal payan peyda mikone
// Zamani ke function main karesh tamum mishe az tarigh return 
// Ba'ad az tamum shodan chand etefagh miofte:
// Avvalish: Hame Local Variable ha va Function parameters ha az beyn miravand
// Mored ba'di inke yek function makhsus be esm std::exit() call mishe !!!

// Nokte: pas Global Variable ha chi mishe? Ta payan kol barname dar hafeze
// Baghi mimanand vaghti main() tamum shod va barname dar hale terminate
// Shodan ast
// Agr Global Variable az no' Class/Object bashad destructor on ejra mishe
// Sepas hafeze azad mishavad (Destructor ro dar season haye ayande mikhunim)
// Nokte mohem:
// Hafeze Global Variable ha ma'molan dar 
// BSS Segment / Data Segment gharar darad na dar Stack
// Agar Global Variable meghdar dahi shode bashad dar
// Data Segment gharar migirad vali agar meghdar dahi nashode bashad
// Dar BSS Segment gharar migirad
// Inayi ke baraye Global Variable ha goftam shamel 
// Static Variable ha ham mishe !!!! 
// static int s_x = 5;

// BSS mokhafaf chist? Block Started by Symbol
// In estelah az Assembler haye ghadimi (Mesl IBM) amade ast.

// Hala be in std::exit() yek Status Code pas dade mishe hala in Status Code chiye?
// Hamun status codi ke function main() return mikone mesal zamani ke migim
// return 0; in 0 pas dade mishe be onvan Argument be --> std::exit(0);

// In Function std::exit() aslan chiye? Ba'es mishe barname ma be surat Normal
// Khateme peyda kone hamun Normal Terminate anjam beshe

// Key barname ma Normal Terminate mishe? Zamani ke status code 0 return beshe
// Agar gheyr 0 bashe neshun dahande adam movafaghiyat barname ast
// Vali in barname hamchenan Normal Terminate ro dashte
// Normal Terminate ya'ni hamintor ke azash entezar mirafte payan yafte 
// Kar ba'adi ke anjam mide std::exit() miyad be tor koli yek seri 
// Paksazi haye ba'ad barname ham anjam mide va dar marhale sevvom
// Kar mide be dast OS

// In function std::exit() be surat implicit hamun gheyr mostaghim seda zade mishe
// Vali ma ham mitunim be surat Explicit (Mostaghim) call konim

// Baraye call kardan in function bayad HeaderFile <cstdlib> ro include konim
// Mesal:
/*
#include <iostream>
#include <cstdlib>

void cleanUp() { // Jolo tar migam chera in function define kardam
	std::cout << "CleanUp\n";
	return;
}

int main() {

	std::cout << 1 << '\n';
	std::exit(0);
	std::cout << 2 << '\n';

	return 0;
}
*/
// In Function exit() be joz function main() function haye dige ham mishe call
// Kard.
// Argument 0 ham dadam ke Normal Terminate beshe age mesal 1 midadam
// Alamat ghermez dar terminal khod vscode neshun midad ke neshun dahande
// abnormal ast.
// Nokte: Zamani ke in function exit ro be surat mostaghim seda mizanim dige
// On Paksazi Local varibale, Function Parameters anjam nemishe
// Baraye hamin behtare be surat mostaghim seda nazanim magar dar sharayet 
// Kheyli khas
// Hala ghabl az call kardan exit() behtare yek seri paksazi ha ro khodemun
// Anjam bedim (Be surat dasti) mesal:
// Disconnect ba database, diconnect internet, Deallocate kardan hafeze
// Neveshtan yek chizayi dar Log file
// Dar code bala function cleanUp ke goftam tozih midam mesal hadafesh paksazi
// Bod baraye inke ma nayaym in fcuntion cleanUp ro call konim
// Ya shayad yademun bere zaban C++ omade automatic in karo mikone 
// Ba function std::atexit();
// Be ma in emkan mide in cleanUp behesh bedim va har vaght std::exit();
// Call beshe in fcuntion cleanUp be tur automatic khodesh call mishe
// Mesal:
/*
#include <iostream>
#include <cstdlib>

void cleanUp() {
	std::cout << "CleanUp\n";
	return;
}

int main() {

	std::atexit(cleanUp); // Deghat kon parantez() nemizarim

	std::cout << 1 << '\n';
	std::exit(0);
	std::cout << 2 << '\n';

	return 0;
}
*/

// Zaban C++ 2 ta function dige ham baraye in Halt dare:
// abort() ke ba'es mishe barname ne surat gheyr normal khateme peyda kone
// abnormal terminate

// abnormal termination: ya'ni barname daraye no'i khataye runtime bode
// Va barname natuneste be ejraye khodesh edame peyda bekone
// Niyaz bode barname edame peyda bekone vali khatayi anjam shode
// In barname khateme peyda karde
// Nokte: abort hichgone paksazi anjam nemide
// Mesal:
/*
#include <iostream>
#include <cstdlib>

int main() {

	std::cout << 1 << '\n';
	std::abort();
	std::cout << 2 << '\n';

	return 0;
}
*/

// Mored akhar terminate hast ke bishtar hamrah Exception ha mored estefade 
// Gharar migire (Dar Season haye ayande kamel yad migirim in Exception ro)
// Vali ma mitunim in function ro mostaghim estefade konim
// Vaghti terminate() call she be surat default function abort() ham call mishe

// Aghlab be surat implicit (gheyr mostaghim) dar zamani ke yek Exception
// Modiriyat nashode dashte bashim call mishe

// Inayi ke goftam hamasho dar Exception ha yad migirim

// So'al che zamani az Halts estefade konim? Never

// Mesal baraye terminate:
/*
#include <iostream>
#include <exception>

int main() {

	std::cout << 1 << '\n';
	// In function goto definition koni mituni function abort ro bebini
	std::terminate(); 
	std::cout << 2 << '\n';

	return 0;
}
*/

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Software testing

// Ma vaghti yek barname minevisim compile mikonim va ejrash mikonim be nazaretun kar tamum
// Shode ast ya na?
// Bastegi dare agar ma barname ro neveshtim faghat 1 martabe ejra beshe ba'ad
// Kenar begzarim tamam bale kar tamum shode ast
// Agar barname benevisim ke kamelan khati (Linear) manzur az Linear ineke
// Na if, while, for va barname aslan hich input nemigire dar in surat ham kar tamume

// Hala agar barname dashte bashim ke loop dare dastorat sharti dare kar tamum shode
// Nist chera? chon inke barname yekbar dorust amal karde taht 1 halat bode
// Va in hich tazmini be ma nemide ke dar sayer halat ha ham be dorusti kar kone

// Bahs software-testing ham baraye in mas'ale shekl gerft karesh ineke tayin kone
// Aya yek barname dar sayer halat be dorusti kar mikone ya na
// Hich testi vojud nadarad va aslan ham hadaf test in nist tamam kamal halat
// Barname ro test bekone

// Farz kon 2 ta Variable darim x, y beheshun meghdar midim
// x = 5, y = 4
// Dar if barresi mikonim kodam bozorg tare age x ovard ya'ni barname dar 1 halat doruste
// Hala kochek tarin va equal ro test mikonim age in halat ha ham javab dad barname
// Ma doruste baraye chenin chizi test minevisim ke in 3 halat be dorusti kar mikone ya na

// Test miad chenin halat ha ro test mikone dige nemiyad hame maghadir x va y ro test kone

// Estelah haye unit-test, integration-test
// unit test: Yek bakhsh kochiki az code ro be surat isolated (joda, mojaza) az 
// Barname test mikone

// Integration test: zamani ke ma unit test hamun ro be surat joda gone test kardim
// unit haro dar kenar ham gharar midim va baham test mikonimeshun

// In test ha ro ba yekseri abzar haye makhsus khod zaman mishe test kard

// Mesal:
// Baraye zaban C++ abzar (Google Test) ast.
// Baraye C abzar (Google Test, cunit, check) ast.
// Baraye C# abzar (Xunit) ast.
// Baraye Java abzar (Junit) ast.

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Semantic Errors