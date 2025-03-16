#include <iostream>
#include <string_view>
// Baraye estefade az <string_view> lazem hast


int main() {

	// Dar mabhas ghabli goftim std::string copy ijad mikone
	// Makhsusan dar Parameter ha estefade az in std::string 
	// Eshtebahe
	// Nokte: Bar khalaf Fundamental type ha std::string meghdar dahi avvalie
	// Ya taghir meghdar fast nist va behine ham nist 

	// Rah hal: std::string_view ke dar C++17 be baad moarefi shod
	// In std::string_view miad yek ReadOnly ijad mikone
	// Yani chi? Yani faghat on meghdar ro mikhone va nemitune taghir bede
	// Behtar az hame copy ham ijad nemikone va fast ham hast va behine ham hast va ...
	// Kolan khobe dige

	// Mesal:
	std::string_view fName = "Mohammad"; // Copy ijad nemikone faghat meghdar ro mikhone
	std::cout << "Your name is: " << fName << '\n';

	// Hala ye kari am mishe kard
	// Mesal ma neveshtim std::string nemikhaym taghir bedim
	// Vali mikhaym copy nashe
	// Ye tabdil ضمنی hamon Implicit mitunim konim
	std::string lName = "Yousefi";
	std::string_view lSV = lName;
	// Dige copy ijad nemishe
	// In 2 ta code hich farghi nadare 2 tashonam okeye
	// Baraye chi migam:
	// Yani rabti be copy ina nadare 2 tashon behine hast
	// Chon dige tabdil anjam dadim dige 
	std::cout << "Your Last name: " << lName << '\n';
	std::cout << "Your Last name: " << lSV << '\n';



	// Hala age khastim std::string_view tabdil konim be:
	// std::string 
	// In halat dar tabdil Implicit Error mide bayad tabdil
	// Explicit shavad
	// Mesal:
	
	std::string_view lastNum = "10";
	std::string firstNum = static_cast<std::string>(lastNum);
	std::cout << "Your firstNum: " << firstNum << '\n';

	//----------------------------------------------------------//
	std::cout << '\n' << "\n=====================\n" << '\n';
	// Ye chizi mond dar std::string_view :)
	// Onam Suffix string_view ke nagoftim
	// Bale string_view ham Suffix dare hamon Literal Type
	// faghat sv baad دابل کدیشن ezafe mikoni
	using namespace std::literals;
	std::cout << "Ending Season 4"sv;

	std::cout << '\n' << "\n=====================\n" << '\n';
	system("pause");





}