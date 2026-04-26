// Modulus(Remainder)
#include <iostream>

// Khob namad Modulus ine --> % 
// Khob in chikar mikone
// Taghsim sahih mikonim baghimande mishe hamin %
// Mesal:
// 5%4 5 / 4 = 1*4 = 5-4 = 1 Baghimande
// Kharej ghesmat neminevisim ha !!!
// Daftar negah koni behtar mifahmi

int main() {

	std::cout << "Modulus: " << 5 % 4 << '\n';
	// Hala ghavanin in chejurie hamishe x mon samt chap hast
	// Yani adad asli ya adad mored nazar 
	// x % 4
	// Age samt chap manfi bashe Result manfi mishe
	// Age mosbat bashe Result mishe mosbat
	std::cout << "Modulus: " << -14 % 5 << '\n';
	std::cout << "Modulus: " << 14 % -5 << '\n';
	std::cout << "Modulus: " << -14 % -5 << '\n';
	std::cout << "Modulus: " << 14 % 5 << '\n';

	// Mesal bala neveshtim 14 % 5 
	// Khob 14 taghsim bar 5 kardim dige
	// Javab haye in 0 1 2 3 4 injurie 0 ta yeki kamtar az khodesh
	// Beyn ina hich javabi nemitune dashte bashe
	// Mesal dige A % 3 javabashon beyn 0 , 1 , 2 
	
	// Nokte: yeki az porkarbord tarin Modulus hamin bakhshpaziri 
	// Hast yani age mesal x % y ke mishe Modulus on 0 biad
	// Yani bakhsh pazir hast
	// Age be joz 0 harchi biad baksh pazir nist
	// Mesal:
	// 15 % 5 = 0 In bakhsh pazir hast !!
	// 7 % 3 = 1 In bakhsh pazir nist !!

	// Hala ba inayi ke goftam
	// 0 Mishe zoj 1 mishe fard
	// % 2 beyn 0 , 1 javab dare
	// Ba in mitunim barname tashkhis zoj va fard benevisim
	
	std::cout << "\nEnter number (Zoj || Fard: ";
	int x;
	std::cin >> x;
	if (x % 2 == 0)
	{
		std::cout << "Your number is even" << '\n';
		// event mishe zoj
	}
	else
	{
		std::cout << "Your number is odd" << '\n';
		// odd ham mishe fard
	}



	return 0;
}