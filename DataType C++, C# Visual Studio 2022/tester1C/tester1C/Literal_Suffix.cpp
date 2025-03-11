// Full Suffix in C++
// Suffix hamon Type haye Literal hast
// Literal ha:
// Integer ---> 2 / -1 / 0 va..... ---> int
// boolean ---> True / False ---> bool
// char ---> 'a' / '\n' / '$' va..... ---> character
// floating-point ---> 3.14 / -1.5 va ... ---> double
/* C - Style string---> "Hello" ---> char[5] ham arraye mishe
  Ham Esharegar ha const char*
  string hamon character hast dige
 */
// Khob Hala chetori baraye Compile befahmunim dar in Literal ma
// Mesal 2 long hast int nist chon pishfarz int hast dige bala neveshtam hamashon
// Ba Suffix ha 
// Ye jurayi Type Literal hastan mesl Variable hayi ke Type daran

#include <iostream>

int main() {

	// Integer:
	std::cout << "Int: " << 3 << '\n'; // Mouse rosh negah dari minevise int
	std::cout << "Long: " << 3L << '\n'; // Mouse rosh negah dari minevise long
	std::cout << "Long Long" << 5LL << '\n'; // Mouse rosh negah dari minevise long long
	std::cout << "Unsigned" << 10U << '\n'; // Mouse rosh negah dari minevise unsigned int
	//std::cout << -25U << '\n'; // Error mide chon signed hast unsigned nist
	
	// Mitunim Tarkibi ham benevisim:
	std::cout << "Unsigned Long" << 3UL << '\n';
	std::cout << "Unsigned Long Long" << 70ULL << '\n';

	//--------------------------------------------------------------------//

	// Floating-Point:
	std::cout << "Double" << 3.16 << '\n'; // Default double
	std::cout << "Float" << 3.25f << '\n'; // Mitunim ham f or F
	std::cout << "Long Double" << 5.16L << '\n'; // Mouse rosh negah dari minevise long double

	//--------------------------------------------------------------------//

	// Char & string Literals:
	std::cout << "Char" << 'A' << '\n'; // Default char
	std::cout << "Char_16bit: " << u'a' << '\n'; // char16_t mouse rosh negah dari minevise
	std::cout << "Char_32bit: " << U'a' << '\n'; // char32_t mouse rosh negah dari minevise
	std::cout << "Char 2byte: " << L's' << '\n'; // wchar_t mouse rosh negah dari minevise

	// Kami ino takhasosi tar benevisim
	// Ba esharegar ha 
	const char* str = "Hello"; // String hast ta'job nakon
	// Goftim dige string hamon char hast ke mitunim char ba arraye
	// Va Esharegar ha ye reshte benevisim
	const char16_t* str2byte = u"Hello"; // In ( u ) nazarim error mide
	const char32_t* str4byte = U"Hello"; // In ( U ) nazarim error mide
	const wchar_t* str2_4byte = L"Hello"; // In ( L ) nazarim error mide
	// In wchar dar bazi memari ha 2Byte va dar bazi 4 Byte hast !!!!

	// In wcout ayande yad migirim
	std::wcout << str << '\n';
	std::wcout << u"2byte string:" << str2byte << '\n'; // Ehtemal dare dorust chap nakone
	std::wcout << U"4byte string" << str4byte << '\n';  // Ehtemal dare dorust chap nakone
	std::wcout << L"Wide string: " << str2_4byte << '\n'; 



	// Yedone am darim UTF-8 encode
	const char* utf8_encode = u8"Hello_UTF-8"; // Inam male UTF-8 hast

	std::cout << utf8_encode << '\n';


	return 0; // In khodesh ye Literal hast roye 0 negah dari mibini int hast

}