#include <iostream>

// Mabhas: Comma Operator ( , )

// In Comma ba digar Comma ha fargh dare 
// In chizi ke alan mikham begam ba ina fargh dare:
// void print(int x , std::string_view y);
// int x = 5 , y = 3;
// Ba ina fargh dare

// In Comma Operator intori hast
// Kamtarin Olaviyat dar Operator ha Comma darad
// Ebarat1 , Ebarat2 // Output Ebarat2
// Ebarat samt chap ejra mishe va
// Ebarat samt rast ejra mishe va be onvan natije bargasht dade mishe
// Faghat Ebarat2 bargasht dade mishe

// Mesal:

int main() {

	int x = 5;
	int y = 3;
	std::cout << "Comma Operator: " << (x, y) << '\n'; // Output 3 ebarat samt rast be onvan natije bargasht dade mishe
	
	// Dar in code payini natije 5 bargardun chera? goftam olaviyat Comma payin tar hast
	// Inja Parantez nazashtam 
	// << x mohasebe shod natije bargardon dige y ro hava mond
	// Kholase: Insertion Operator olaviyat balatari az Comma dare Comma kamtarin olaviyat dare
	std::cout << "Comma Operator: " << x, y;

	// Mesal:
	// Manzur az mohasebe mishe yani ejra mishe
	// x = (z , y); Output --> y // chon olaviyat bala parantez hast toye parantez mohasebe mishe
	// x = z , y; Output --> z // Chon olaviyat = balatar az Comma hast mesl code bala neveshtam

	// Ye mesal dige am bezanim:
	int z = 5;
	int xz = 2;
	std::cout << "\nComma Operator: " << (++z, ++xz) << '\n'; // Output 3

	// Natije giri: Az in Comma Operator dar ayande migam
	// Koja ha bayad estefade shavad !!!
	// Felan be dardi nemikhore

	return 0;
}


