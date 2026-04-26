#include <iostream>
#include <bitset>
// In library makhsus tabdil adad ha be binary hast neveshtam 
// Dar function myBinary


std::bitset<16> myBinary(std::bitset<16> x);
void myOctal();
void myHexadecimal();
void myDecimal();

int main() {

	// Decimal : Mabnaye 10
	// System ده دهی hast ke dar zendegi roz mare estefade mishe
	// 10 ragham hast in Decimal be sorat zir:
	// 0 / 1 / 2 / 3 / 4 / 5 / 6 / 7 / 8 / 9
	// ba 0 mishe 10 ragham 
	// Mesal dar C++:
	int decimal1 = 5;
	int decimal2 = 15;
	int decimal3 = 100;
	std::cout << "====== Decimal ======" << '\n';
	std::cout << "In Number is Decimal: " << decimal1 << '\n';
	std::cout << "In Number is Decimal: " << decimal2 << '\n';
	std::cout << "In Number is Decimal: " << decimal3 << '\n';
	
	//-----------------------------------------------------------------//

	// Binary : Mabnaye 2 
	// In hamon binary hast ke khundim 2 ragham dare:
	// 0 / 1
	// Ke mishe bahash ye seri adad sakht
	// Ba raveshi ke neveshtim tabdil be mabnaye 10 ya hamon Decimal
	// Mesal:
	// Nahve neveshtan avval (0 baad b OR B)

	int bin1 = 0b10010;
	int bin2 = 0b00111;
	int bin3 = 0b1000;

	std::cout << "\n====== Binary ======" << '\n';
	std::cout << "In Number is binary: " << bin1 << '\n';
	std::cout << "In Number is binary: " << bin2 << '\n';
	std::cout << "In Number is binary: " << bin3 << '\n';

	//-----------------------------------------------------------------//

	// Octal : Mabnaye 8
	// In Octal kami fargh dare 8 ragham hast va ragham haye badish be sorat zir:
	// 0 / 1 / 2 / 3 / 4 / 5 / 6 / 7 
	// 10 / 11 / 12 / 13 / 14 / 15 / 16 / 17
	// 20 / 21 / 22 / 23 / 24 / 25 / 26 / 27
	// va......
	// 10 hamon 8 hast ha 11 hamon 9 va .... injurie
	
	// Mesal:
	// Avval ye 0 mizarim baad adad octal minevisim
	int octal1 = 010;
	int octal2 = 015;
	int octal3 = 024;
	//int octalError1 = 018; // Error mide 8 nadarim 9 nadarim 
	//int octalError2 = 019; // Error mide 8 nadarim 9 nadarim 


	std::cout << "\n====== Octal ======" << '\n';
	std::cout << "In Number is Octal: " << octal1 << '\n';
	std::cout << "In Number is Octal: " << octal2 << '\n';
	std::cout << "In Number is Octal: " << octal3 << '\n';

	//-----------------------------------------------------------------//

	// Hexadecimal : Mabnaye 16
	// Ye nokte: Chera Hexadecimal mabnaye 16 hast ? 
	// Hexa mishe = 6
	// decimal hamon = 10 hast 
	// jameshon mishe 16 xD
	// Inam 16 ragham hast inam ba on ha fargh dare negah kon:
	// 0 / 1 / 2 / 3 / 4 / 5 / 6 / 7 / 8 / 9
	// A / B / C / D / E / F
	// 16 ragham bod dige ba 0 mishe ta 15
	// ta 9 ke malome khob baad 9 chiye 
	// A = 10
	// B = 11
	// C = 12
	// D = 13
	// E = 14
	// F = 15
	
	// Mesal:
	// Nahve neveshtan avval ye (0 baad x) jolo adad hexadecimal to benevis

	int hexad1 = 0xA;
	int hexad2 = 0x2F;
	int hexad3 = 0xC5;

	// Baraye hesab kardan mesal 0x2F am tozih dadim toye daftar
	// Va ye aks toye Folder Numeral_system zaban C gozashtam dar bare in
	// Aks baraye har 2 ham Hexadecimal va Octal
	
	// Hamin ravesh baraye Octal ham hast 
	// Fargheshon ine Octal be tavan 8 hast hamon mabnaye khodesh
	// Hexadecimal be tavan mabnaye khodesh yani 16 rahate


	std::cout << "\n====== Hexadecimal ======" << '\n';
	std::cout << "In Number is Hexadecimal: " << hexad1 << '\n';
	std::cout << "In Number is Hexadecimal: " << hexad2 << '\n';
	std::cout << "In Number is Hexadecimal: " << hexad3 << '\n';

	std::cout << '\n';
	std::cout << '\n';

	myOctal();
	myHexadecimal();

	myDecimal(); // Back to Default


	/*std::bitset<4> */
	std::cout << "\n====== Decimal Convert to Binary ======" << '\n';
	std::cout << "Decimal number convert to Binary: " << myBinary(8) << '\n';
	std::cout << "Decimal number convert to Binary: " << myBinary(10) << '\n';
	std::cout << "Decimal number convert to Binary: " << myBinary(12) << '\n';
	std::cout << "\n====== Octal Convert to Binary ======" << '\n';
	std::cout << "Octal number convert to Binary: " << myBinary(010) << '\n';
	std::cout << "Octal number convert to Binary: " << myBinary(20) << '\n';
	std::cout << "Octal number convert to Binary: " << myBinary(015) << '\n';
	std::cout << "\n====== Hexadecimal Convert to Binary ======" << '\n';
	std::cout << "Hexadecimal number convert to Binary: " << myBinary(0xC) << '\n';
	std::cout << "Hexadecimal number convert to Binary: " << myBinary(0xA) << '\n';
	std::cout << "Hexadecimal number convert to Binary: " << myBinary(0x2F) << '\n';


	std::cout << '\n';
	system("pause");
	return 0;


}

void myOctal() {

	// Khob khoshbakhtane dar zaban C++
	// Mitunim hamin octal mostaghim dar std::cout benevisim
	// Mesal Decimal bedim adad Octal bede
	// Ya Hexadecimal bedim adad Octal begirim
	// Ya Binary bedim adad Octal begirim
	
	// Mesal:
	
	/* 
	Injuri am mishe vali beza be sorat zir benevisim
	std::cout << std::oct << 8 << '\n'; 
	*/
	std::cout << std::oct;
	// Yek bar oct benevisim dige lazem nist bad code on har addadi chap koni
	// Octal tahvilet mide
	std::cout << "====== Decimal Convert to Octal ======" << '\n';
	std::cout << "Decimal number convert to Octal: " << 8 << '\n';
	std::cout << "Decimal number convert to Octal: " << 12 << '\n';
	std::cout << "Decimal number convert to Octal: " << 22 << '\n';
	std::cout << "\n====== Hexadecimal Convert to Octal ======" << '\n';
	std::cout << "Hexadecimal number convert to Octal: " << 0xA << '\n';
	std::cout << "Hexadecimal number convert to Octal: " << 0xF << '\n';
	std::cout << "Hexadecimal number convert to Octal: " << 0x2C << '\n';
	std::cout << "\n====== Binary Convert to Octal ======" << '\n';
	std::cout << "Hexadecimal number convert to Octal :" << 0b1000 << '\n';
	std::cout << "Hexadecimal number convert to Octal :" << 0b01100 << '\n';
	std::cout << "Hexadecimal number convert to Octal :" << 0b1010 << '\n';

	return;

}

void myHexadecimal() {
	// Khob khoshbakhtane dar zaban C++
	// Mitunim hamin Hexadecimal mostaghim dar std::cout benevisim
	// Mesal Decimal bedim adad Hexadecimal bede
	// Ya Octal bedim adad Hexadecimal begirim
	// Ya Binary bedim adad Hexadecimal begirim
	// Mesl balayi dige

	// Mesl octal yek bar hexa benevisim dige lazem nist harchi ziresh code bashe
	// Hexa tahvil mide
	std::cout << std::hex;
	std::cout << "\n====== Decimal Convert to Hexadecimal ======" << '\n';
	std::cout << "Decimal number convert to Hexadecimal: " << 10 << '\n';
	std::cout << "Decimal number convert to Hexadecimal: " << 15 << '\n';
	std::cout << "Decimal number convert to Hexadecimal: " << 11419 << '\n';
	std::cout << "\n====== Octal Convert to Hexadecimal ======" << '\n';
	std::cout << "Octal number convert to Hexadecimal: " << 014 << '\n';
	std::cout << "Octal number convert to Hexadecimal: " << 017 << '\n';
	std::cout << "Octal number convert to Hexadecimal: " << 020 << '\n';
	std::cout << "\n====== Binary Convert to Hexadecimal ======" << '\n';
	std::cout << "Binary number convert to Hexadecimal: " << 0b1010 << '\n';
	std::cout << "Binary number convert to Hexadecimal: " << 0b1111 << '\n';
	std::cout << "Binary number convert to Hexadecimal: " << 0b110010 << '\n';

	return;

}

void myDecimal() {

	// cout defaultesh Decimal hast!!!!!!!!

	// Khob chera Decimal gharar dadam alan har adadi chap konim 
	// Hexadecimal mide
	// Chon tayin kardim std::hex
	// Alan mikham bargarde be halat default 
	std::cout << std::dec;
	std::cout << "\n====== Default ======" << '\n';
	std::cout << "=====================" << '\n';
	return;

}

std::bitset<16> myBinary(std::bitset<16> x) {

	// Code jadid ekhtera kardam xDDD
	return x;

}


// In code payaini Fail shod balaro neveshtam on khob benazar miad
/*int myBinary(std::bitset<4> x = 8) {

	// Khob baraye tabdil be Binary
	// Kami fargh mikone
	// Avval bayad az yek Library <bitset> estefade konim

	// Mesal: codish
	//std::bitset<4> x = 8;
	return x;
}
*/