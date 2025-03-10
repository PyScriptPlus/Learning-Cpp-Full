#include <iostream>
#include <cstdint>

// Explicit: صریح یا مستقیم
// Agar az Explicit estefade konim yani khodemun be shakhsan
// Darim tabdil type felan be type felan anjam midim
// Va har riski ke dare be jan mikharim

void print(int x){
	std::cout << x;
	return;
}


int main() {

	//print(5.6); // Dar inja Warning mide 
	// Rah hal 
	// 2 Model tabdil in type sade ro darim
	
	// C-Style cast:
	//print((int)5.3); // Warn nadad bedon warn adad 5 ro chap kard
	
	// Static_cast:
	print(static_cast<int>(5.3)); // In pishnahad mishe
	// Kolan az in estefade koni in behtare 

	// Khob mikhaym vaghti dar char = 97;
	// Bejaye inke a chap kone biad adad 97 be tor integer chap kone
	// Mesal:
	std::cout << '\n' << '\n' << '\n';
	char s = 97;
	std::cout << static_cast<int>(s) << '\n';
	// Ya be dast ovardam code haye ASCII character ha
	// Mesal:
	char a = 'a';
	char b = 'b';
	char p = '$';
	char sp = ' '; // Space khali
	std::cout << static_cast<int>(a) << '\n';
	std::cout << static_cast<int>(b) << '\n';
	std::cout << static_cast<int>(p) << '\n';
	std::cout << static_cast<int>(sp) << '\n';
	
	//*********************************************************//

	std::cout << '\n' << '\n';


	// Yad avari int8_t
	// Age yadet bashe goftim int8_t raftar char anjam mide
	// 2 tasham sizeof sham 1byte hast
	// Mesal:
	std::int8_t test = 98;
	std::cout << test << '\n'; // OutPut = b chon code ASCII 98 mishe b
	// Hala mitunim az static_cast estefade konim 98 chap kone
	// Vali age majbor shodi vagarne kolan moshkele int8_t
	std::cout << static_cast<int>(test) << '\n';



	return 0;
	

}