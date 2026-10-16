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
