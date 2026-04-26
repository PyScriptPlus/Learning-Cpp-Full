#include <iostream>
#include <string>
// Hamishe baraye tarif kardan Variable String
// In library include kon!!!!!!

// Khob ma be reshte hamon Text || neveshte ke daron "Text"
// دابل کدیشن gharar migire migim C-style string 
// Ke dar DataType ha az noe Compound hast
// Baraye tarif kardan yek Variable string
// 2 Model darim:
// 1- std::string // C++98 omade va ye jurayi Default C++ ine baraye tarif kardan String
// 2- std::string_view // C++17 omade ke dar mabhas baadi code minevisim
// Va kheyli am be dard bekhor hast

int main() {

	// Mesal:
	std::string fName = "Mohammad";
	fName = "MamaD25";
	// Mishe adad ham nevesht vali arzeshi adadi nadare
	// Ye rahi dare Yejurayi tabdil konim be int ke betonim on adad:
	// (+) (-) (/) (*) zarb taghsim va .. konim be ye adad int
	
	
	//Rah hal :
	std::string strNumber = "12";
	int number = std::stoi(strNumber); // C++11 be baad omade alan kar kard xD
	int number2 = 3 + number;
	std::cout << "Conversion string to int: " << number2 << '\n';

	// Ye mesal bezanim Esm va Sen az karbar begirim har 2 tash ba string
	std::cout << '\n';
	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;

	std::cout << "Enter your fName: ";
	std::string name;
	std::getline(std::cin >> std::ws ,  name);
	// getline() baraye ine esm betunim ba fasele bezanim
	// std::ws ham miad fasele -- whitspace -- tab va \n nadide migire
	// Baraye chiye? bala ke age vared mikonim enter mizanim posht sahne injurie 
	// 18\n dige montazer nemimune payini vared konam std::ws on haro nadide migire
	// Estefade kon hamishe zarorie std::ws zaman estefade kon ke az getline estefade kardi!!!
	std::cout << "Your age is: " << age << '\n';
	std::cout << "Your name is: " << name << '\n';





}






