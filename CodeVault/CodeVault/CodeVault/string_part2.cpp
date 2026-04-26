#include <iostream>
#include <string>

void printer(std::string xy);

int main() {
	
	// Ba yek تابع ya esm aslish Member Function 
	// Mitunim tedad character toye string befahmim
	// Mesal:
	
	std::string fName = "MohammaD";
	// Baraye jolo giri Warning shayad dar ayande be moshkel bekhore in
	// Tabdil konim be int 
	std::cout << "Number of characters: " << static_cast<int>(fName.length()) << '\n';
	// Ba ye تابع jadid ham mishe ke hamin kar length mikone
	// Az C++20 be baad omade:
	std::cout << "Number of characters: " << static_cast<int>(ssize(fName)) << '\n';
	// Inaro hatman tabdil konid shayad be warning bekhore


	//------------------------------------------------------------------//

	// Ma vaghti yek Variable string dorust mikonim on ro meghdar dahi mikonim
	// Az on copy gerfte mishe va in Copy ha hazine bar dar hastand 
	// Makhsusan bekhay Parameter ro std::string gharar bedi
	// Hala Argument az yek string be on pass bedi hamon meghdar dahi koni
	// Mesal codi bezanm motavajeh mishi:

	std::string names = "Ali";
	printer(names);
	// In code eftezah va hazine bar dar hast
	// Va aslan ham behine nist
	// Ram bishtar masraf mikoneeeeeee

	//-----------------//
	// In jomle yadet bashe:
	// Hichvaght:
	// std::string ro pass by value nakonid !!!!!!!!!!
	//-----------------//

	// in pas by value chiye?
	// فارسی مینویسم
	// وقتی یک تابع تعریف میکنی سعی نکن
	// شی ع std::string رو به صورت کپی به تابع بفرستی
	// Moshkelat:
	// Masraf RAM bishtar
	// soraat barname payin miad ( Be khater amaliyat Copy )


	// Agha pass chikar konim 
	// Majburim akhe pass by value konim?
	// Rah hal:
	// Az std::string_view estefade konid
	// Mabhas baadi codesh neveshte mishe ba tozihat 

	//------------------------------------------------------------------//
	
	// Khob goftim har Literal yek type dare 
	// Male Fundamental haro neveshtim
	// Male std::string monde
	// "Hello" ino ke intori minevisim C-style string hast Defaultesh ine
	
	using namespace std::literals;
	std::cout << "Suffix string: " << "MamaD"s << '\n'; // std::string Literal

	//constexpr std::string test = "Tested"; // Error mide
	// Vali dar string_view mabhas baadi tozih midam kar mikone


	return 0;

}

void printer(std::string xy) {

	std::cout << xy << '\n';

	return;
}