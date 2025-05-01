// Ternary_Operator
// In Ternary_Operator aslan chi hast?
// Kotah shode shart ha hast hamon if-else 
// if-else kami tolani hast vali in kotah shode hast
// Va ye seri karbord haye khob ham dare ke if-else nemitune ono anjam bede
// Jolo tar migam

#include <iostream>
#include <string_view>

// Max MIN ba Macro Funtion-Like Macro
#define MAX(a,b) ((a > b) ?  a : b)
#define MIN(x,y) ((x < y) ? x : y)

int main() {

	// Syntax: Ternary_Operator
	// (Condition) ? True : False;
	// Hamine kheyli kotah va ez 
	// Mitunim bahash shart haye bozorg am benevisim vali 
	// Shart haye bozorg baraye if-else behtare

	//-------------------------------------------------------------------//

	// Mesal avvalie:
	std::cout << "Shart ma: " << (true) ? 5 : 123;
	std::cout << std::boolalpha;
	std::cout << "\nShart ma: " << (false) ? 12 : 3;
	std::cout << std::noboolalpha;
	// Chera faghat adad haye true va false chap mikone?
	// Chon olaviyat << az ?: bala tar hast
	// Rah hal chiye?
	// Estefade az parantez:
	std::cout << "\nOlaviyat: " << ((3 > 2) ? 5 : 10) << '\n';
	// Baraye chap string ham hamintori:
	std::cout << "Olaviyat: " << ((true) ? "MamaD" : "Ali");

	// Hala mitunim toye variable benevisim ke behine tar am hast
	// Mesal:
	int num = (3 > 4) ? 6 : 9;
	std::cout << "\nShart: " << num << '\n';


	// Inam baraye reshte ke in string_view kheyli behine tar mikone
	// Mesal:
	int x = 50;
	int y = 49;
	std::string_view shart =  (50 > 49) ? "\nAdad bozorg hast" : "\nAdad Kochak hast";
	std::cout << shart << '\n';

	//-------------------------------------------------------------------//

	// Hala mitunim ye MAX va MIN benevisim ba in Ternary_Operator
	int num1 = 20;
	int num2 = 222;
	int max_Number = (num1 > num2) ? 20 : 222;
	int min_Number = (num1 < num2) ? 20 : 222;

	std::cout << "Max Number: " << max_Number << '\n';
	std::cout << "Min Number: " << min_Number << '\n';

	// Yedone ba Macro bala neveshtam in MAX MIN ke rahat tare
	// Test:
	std::cout << "MAX macro: " << MAX(20, 3) << '\n';
	std::cout << "MIN macro: " << MIN(55, 5) << '\n';

	//-------------------------------------------------------------------//

	// Hala ye chizi ma mitunim toye Ternary ba constexpr meghdar dahi konim
	// Vali toye if-else nemishe
	// Mesal:
	// Ba Ternary-Operator faghat mishe injuri nevesht
	constexpr bool isCold = true;
	constexpr int weatherStatus = (isCold) ? 1 : 0;
	std::cout << "Weather is Cold: " << weatherStatus << '\n';

	// Hala ba if-else
	constexpr bool isHot = false;
	if (isHot)
	{
		constexpr bool weatherStatus2 = 1;
		std::cout << "Weather is Hot: " << weatherStatus2 << '\n';
		// std::cout << weatherStatus2; // Inja mishe vali birun nemishe 
		// Hala inja am beshe ye moshkel dare 
		// In constexpr CompileTime hast ye moshkeli be vojud miyare
		// Block avvali barresi mishe dar Compile-Time
		// In if Run-Time hast dige vaghti run mishe chon isHot false hast
		// Block dakhel else ejra mishe in Block avvali ke barresi shode
		// Dar zaman Compile-Time bela taklif mimune
	}
	else
	{
		// Block dovvomi barresi mishe dar Compile-Time
		// In ejra mishe dar Run-Time vali Block avval hamon balayi belataklif mimune
		constexpr bool weatherStatus2 = 0;
		std::cout << "Weather is Hot: " << weatherStatus2 << '\n';
	}
	// std::cout << weatherStatus2; // Error kharej az mahdode hast vali dar Ternary okey hast
	
	// Rah hal chiye?
	// Ya az hamon kar behine estefade konim mesl
	// Ternary
	// Ya age majburim baraye if-else
	// if ro constexpr gharar bedim faghat oni ke True hast ro barresi kone
	// Va Behine she
	// Mesal:

	constexpr bool isNormal = true;

	// In if constexpr az C++17 be baad omad va mishe estefade kard
	if constexpr (isNormal)
	{
		// Barresi mishe dar Run-Time ejra mishe
		constexpr int weatherStatus3 = 1;
		std::cout << "Weather is Normal: " << weatherStatus3 << '\n';
	}
	else 
	{
		// Dige vared marhale Barresi nemishe va behine hast
		constexpr int weatherStatus3 = 0;
		std::cout << "Weather is Normal: " << weatherStatus3 << '\n';
	}
	
	//-------------------------------------------------------------------//

	// Shart bozorg ba Ternary vali tosiye nemishe: 

	int num3 = 6;
	int num4 = 55;
	int num5 = 65;
	int larg = ((num3 > num4) && (num5 > num4) && (num3 > num5) ? num3 : num5 ? num5 : num4 ? num3 : num4);
	std::cout << "Large Number: " << larg << '\n';

	//-------------------------------------------------------------------//

	return 0;
}



// Code haye testi:
//  std::cout << std::boolalpha;
//	constexpr bool isCold = 1;
//	constexpr std::string_view status = (isCold) ? "Sard hast" : "Garm hast";
//	constexpr int status = (isCold) ? 1 : 0;
//	std::cout << status << '\n';

// int larg = ((x > y) && (z > y) && (z > y) ? x : z ? z : y ? x : y);
// std::cout << larg << '\n' << Min << '\n';

// std::string_view returns = (x == y) ? "Fix" : "No fix";

//if (isCold)
//{
//    constexpr int iden = 1;
//    std::cout << iden << '\n';
//}
//else
//{
//    constexpr int iden = 0;
//    std::cout << iden << '\n';
//}



