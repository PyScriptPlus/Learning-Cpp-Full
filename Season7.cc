// In The Name Of God
// Season 7:

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Type Conversion

// Dar in Season mikhaym dar mored Type Conversion Sohbar konim
// Ghablan gofte budam meghdar har Variable dar Memory Storage be surat donbaleyi az 0 1 ha ast
// Va in Type Variable hastesh ke be Compiler mige Data ro chetor convert kone be 0 1 dar Memory Storage
// Gharar bede va vaghti am omad on 0 1 haro az Memory Storage khond chejuri dobare on 0 1 haro be 
// Data asli Convert kone 

// In chizayi ke bala goftam baraye kelas haye amozeshi ina migan mobtadi hast
// Hala mikham asl bahs ro begam daghighan che etefaghi miofte chejuri zakhire mishan Data dar RAM ina

// Kheyr Compiler khodesh Variable ra dakhel RAM gharar nemidahad
// Compiler dar zaman Compile barname ra be (Machine Code) tabdil mikone va Data lazem ra dar Executable gharar midahad
// Ta vaghti barname ejra shod, CPU & OS be tavanand Data ha ro dar Memory Storage Manage konand

// Type be Compiler etela'ati midahad ke chegune Data ro tafsir konad, che amaliyati roye on mojaz ast
// Va che (Machine Code) baraye kar ba on tolid konad; Ama gharar gereftan Data dar Hafeze dar 
// Run Time barname tavasot OS/CPU/Runtime manage mishavad.

// Khob age ma Variable az Type Float dashte bashim va meghdar 3 integer ro bedim: float f{3};
// Ghablan gofte budam 3 Literal be surat Default type int ro dare che etefaghi miofte
// Dar hamchin halati Compiler nemitune saresh ro bendaze payin bere in 0 1 haro ke marbut be
// 3 integer mishe ru darun Location Variable f ke float hast gharar bede inke ebteda in 3 ineteger
// Ro be moa'del 3 float Convert bekone ba'ad gharar bede darun Location f

// Type Conversion 2 no'e asasi dare:
// Implicit --> Zemni: ke be vasile Compiler anjam mishe 
// Explicit --> Mostaghim | Sarih: inam mostaghiman tavasot Programmer anjam mishe


/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Tabdil type zemni (Implicit)

// Mikham dar mored (implicit type conversion) ke behesh (Automatic type conversion) ham migan sohbat konim.

// Goftim in tabdil tavasot Compiler anjam mishe jalase ghabl ham mesal zadam barash !!!
// Chand mesal bazam mizanam:

// double x{3}; // Compiler miyad 3 sahih ro be 3.0double tabdil mikone
/*
	Mesal dige ba function ha:
	inja ham Compiler 3 a'shar double ro be float tabdil mikone

	float doSome() {
		return 3.0;
	}

*/

// Mesal dige: in 3 tabdil mishe be double output sham a'shari mishe
// double x {4.0 / 3};

// Mesal dige: 
/*
	Dar condition if bayad meghdar Boolean bashe in 5 ham tabdil mishe Boolean
	if(5) { ; }
*/

// Mesal dige:
/*
	void doSome(long x) {
		;
	}
	doSome(3); Call kardim va in 3 int tabdil mishe be long
*/

// Che mogheyi dar tabdil Implicit error mide? Mogheyi ke Compiler nadune chetor bayad 
// Type mabda' ro be type maghsad tabdil kone 
// Mesal chejuri bedune string hello ro be integer tabdil kone error mide !!!

// Baraye inke adad long ya long long bashe bayad az Suffix estefade konim:
// 3L | 3l (long)
// 3LL | 3ll (long long)

// Ba'zi vaghta Statement ke estefade kardim in ejaze ro nemide mesal: int x{5.6};
// In Syntax Brace Initialization be ma ejaze tabdil ke monjaz be az dast dadan Data beshe ro nemide.

// Nokte: Compiler midune chejuri 3.5 ro be int tabdil kone vali in Syntax Brace Initialization
// Ke bala neveshtim ejaze nemide !!!

// Compiler az koja mitune tayin bekone aya mitune yek meghdar ro az mabda' be maghsad bebare ya na?
// Standard C++ tayin mikone chetori Fundamental type ha va Compound Type haye C++ chejuri mitunand be ham
// Tabdil beshan.

// Be in ghavaed migan: Standard Conversion

// Standard Conversion: be 4 daste taghsim mishe:
// 1- Numeric Promotion
// 2- Numeric Conversion
// 3- Arithmetic Conversion
// 4- Pointer Conversion (Next Season or Season 10)

/*--------------------------------------------------------------------------------------------------------------------*/

// Mabhas: Numeric Promotion

// Dar Season4 ke dar mored DataType ha sohbat kardim
// Yad gereftim zaban C++ yek Minimum Size ro baraye har kodum az
// DataType haye Fundamental tazmin mikone vali size in DataType ha mitune baste be
// Compileri ke dare rush Compile mishe motafavet bashe.

// Hamchin ekhtiyari be Compiler ha ba'es mishod Compiler ha size ro baraye mesal int, double va ...
// Dar nazar begirand ke ba tavajoh be Architecture Computeri ke code dare rush Compile mishe
// Bala tarin Performance ro hasel bekone.

// Vaghti migim Compiler say mikone Amalkard(Performance) balayi ijad kone, manzuremun
// Ine ke barname ba sor'at bishtar va manabe' kamtari ejra beshe.

// Baraye mesal baraye Computer 32 biti ke tavanayi pardazesh 32 bit ba ham ro dare Compiler miyad
// 32 bit be Type int takhsis mide albate ghati nist!!! 90% oghat hamine.

// Yek estelah: width manzuremun tedad bit hayi hastesh ke yek DataType dare 
// Mesal: int width32 ro dare ya'ni hamun 32 bit estefade mikone

// Vali chi mishe mesal CPU ma 32 bit bashe vali bekhad yek meghdar 8 bit mesl type char
// Ya yek meghdar 16 bit ro Manipulation kone? Khob bastegi dare seri haye X86 ke 32 bit hastand
// Mitunand 8, 16 ro ham be surat mostaghim Manipulation be konand vali khob aheste tar az halati hastesh
// Ke 32 bit ro Manipulation mikonand

// Manzur az Manipulation (Dast kari) Data ke goftam chiye?
// Farz kon toye C++ in code ro minevisi:
/*
	char a = 90;
	char b = 8;
	char result = a + b;
*/
// Az CPU mikhaym yek amaliyat anjam bede:
// Adad 90 ro ba adad 8 jam' kone va natije ro bargardune
// CPU bayad in karo anjam bede:
// 1- Meghdar a va b ro bekhune
// 2- On haro ba ham jam' kone.
// 3- Natije ro bargardune ta dar result zakhire beshe
// Be in amaliyat migim pardazesh ya Data Manipulation

// Va chera goftim Manipulation 8, 16 biti aheste tar az 32 biti hast vase Architecture X86?
// Farz konim CPU yek pardazande 32 biti bashad
// Vaghti in code ro minevisim:
/*
	int a = 10;
	int b = 20;
	int result = a + b;
*/
// Ruye systemi ke int on 32 bit ast, amaliyat jam' mitune mostaghiman ba 
// Dastur amal haye monaseb pardazande anjam beshe.

// Hala agar benvisi:
/*
	char a = 10;
	char b = 20;
	char result = a + b;
*/
// Dar C++ meghdar haye Char ghabl az jam' mamolan be int tabdil mishan.
// Bana bar in amaliyat jam' ghaleban ba maghadir 32 biti anjam mishe
// Pas hata ba vojud inke Char faghat 8 bit faza eshghal mikone
// Elzaman be in ma'ni nist ke jam' on aheste tar anjam mishe.

// Pas chera momkene amaliyat 8, 16 biti kond tar bashe? 
// Chand dalil ehtemali vojud darad:
// Tabdil DataType: Ba'zi az amaliyat ha momkene be tabdil ya gostaresh meghdar niyaz dashte bashan.
// Statement haye CPU: Ba'zi az Architecture ha baraye andaze haye khas, Statement kar amadi tari daran.
// Memory va Catch: Data haye kochektar mitunan ba'es beshan tedad bishtari meghdar dar Hafeze Catch ja beshan
// In hata momkene barname ro sari' tarkone.

// Nokte ke baraye yadgiri C++ bayad be khater bespari:
/*
	Andaze DataType be tanhayi sor'at amaliyat ro ta'yin nemikone
	Architecture CPU, Statement haye tolid shode tavasot Compiler
	Nahve dast rasi be hafeze va no' amaliyat ham ta'sir daran
*/

// Khob ba'zi az memari haye 32 biti mesl PowerPC mitavanand 32 bit ro tanha be surat mostaghim
// Manipulation konand va baraye size haye kamtar az 32 bit mesl 8, 16 bayesti yek seri teknik haye
// Ezafi tar be kar begirand ta be 32 beresand

// Numeric Promotion baraye in ast ke tarahan C++ nemikhastand tasavor bekonand ke yek CPU
// Masalan ba size 32 bit biyad 16 ya 8 bit ro be surat moastaghim Manipulation bekone.
// Chera nemikhastand tasavor konand?
// Baraye inke mikhastand behinegi dar sadr kar bashad. sar kar ya'ni (behinegi bala tarin olavit dashte bashe)

// Tozih kamel Numeric Promotion: Dar C++ vaghti yek meghdar adadi az Type kochektar
// Dar yek ebarat estefade mishe, momkene zaban on ro be yek Type adadi bozorg tar tabdil kone
// Ta amaliyat ba on Type anjam beshe. Be in tabdil migim Numeric Promotion
// Mesal:
/*
#include <iostream>

int main() {
	
	char a = 10;
	char b = 20;
	auto result = a + b;

	std::cout << typeid(result).name() << '\n';

	return 0;
}
*/
// Shayad entezar dashte bashi Type result barabar char bashe,
// Chon a, b har 2 char hastand.
// Ama intor nist!!! Dar in ebarat a,b ebteda be int tabdil mishan va 
// Jam' ba Type int anjam mishe.
// Banabar in Type result barabar int khahad bod.

// Fargh Promotion ba Conversion chiye?
// Promotion type khasi az tabdil implicit ast ke tebgh ghavanin zaban be Type adadi moshakhasi tabdil mishe.

// Ama Conversion mafhum gostarde tarie; mesal tabdil double be int ham Conversion ast,
// Vali Numeric Promotion mahsub nemishe.

// Yek estelahi darim: Value-Prserving
// Har tabdili ke dar Numeric Promotion hast Value-Prserving hastesh ya'ni chi?
// Ya'ni ba in tabdil ha hich Data i az dast nemire va amn hast.
// Chera moshkeli pish nemiyad ma'mole dige
// Engar ab zarf kochik ro mirizim be zarf bozorg tar pas okeye chenin chizi
// Overflow ham nadare safe hast. (char 1Byte) Convert --> (int 4Byte)

// Numeric Promotion yek moshkel dige be esm Redundancy ro hal mikone.
// Mafhum Redundancy ya'ni tekrar ya ezafe kari.
// Mesal mizanam:
/*
	void printInt(int x) {
		std::cout << x << '\n';
	}
*/
// Farz kon bekhaym functioni baraye chap maghadir short, char, long va ....
// Ham dashte bashim khob age bahs Type Conversion vojud nadasht 
// Nemitunestim az in Function bala baraye Type haye mesl Short, char va ...
// Estefade konim on moghe bayad baraye har Type jodagane Function mineveshtim mesl:
/*
	void printShort(short x) {
		std::cout << x << '\n';
	}
	void printLong(long x) {
		std::cout << x << '\n';
	}
	void printChar(char x) {
		std::cout << x << '\n';
	}
*/
// Va in hamun bahs tekrar (Redundancy) hast ke zaban C++ hal karde.

// Hamchenin kar be haminja khatm nemishe bayesti ba Type mokhtalefi mesl: unsgined, signed ham besazim

// Hala Numeric Promotion dar inja be karemun miyad ya'ni mitunim function hayi benevisim ke 
// Parameter hayi az Type int or double ya har 2 ta ro dashte bashan va ghader bashim ke
// In function ro ba Argument ha ba Type haye mokhtalef call() konim.
// Albate Type hayi ke baraye tabdil shodan be int, double mo'tabar bashan!!!

// Ghavanin daste Numeric Promotion be 2 ghesmat taghsim mishe:
// Floating-Point/integral

// Floating-Point: Mitunim float be double tabdil konim. double bozorg tar ast
// Pas yek function ba Argument double mitunim ham ba meghdar float va ham double (Pass By Value) konim.
// Mesal baraye Floating-Point:
/*
#include <iostream>

void printDouble(double x) {
	std::cout << x << '\n';
	return;
}

int main() {
	
	printDouble(5.0); //Double
	printDouble(5.0f); // Float

	return 0;
}
*/

// Integral: Agar in ghavanin ke migam ro'ayat konim mitunim in Conversion haro anjam bedim
// Mitunim signed char, signed short tabdil konim be int
/*
	signed char
	signed short
	Convert to int
*/
/*
	unsigned char
	char8_t
	unsigned short
	Convert to int
*/
// bool convert --> int

// Mesal haye ziad toye folder Tamrinat/S7/Numeric_Promotion.cc

// Mesal daftar:
/*
#include <iostream>

void printInt(int x) {
	std::cout << x << '\n';
	return;
}

int main() {
	printInt(2);
	printInt('a'); // 97
	printInt(true);
	printInt(false);
	short x = 50;
	printInt(x);
	return 0;
}
*/

// Chejuri in hame meghdar ba Type mokhtalef dar yek Function ba Type moshakhas
// Pass By Value kardim
// Be dalil vojud bahs Numeric-Promotion

/*--------------------------------------------------------------------------------------------------------------------*/
