#include <iostream>
#include <bitset>

int main() {

	// Baghimande Operator haro dar inja minevisim:
	// OR |   x | y  // Binary
	// AND &  x & y // Binary
	// XOR ^  x ^ y // Binary
	
	// Avval berim soragh: Bitwise OR --> |
	// Ghavanin OR chi bod agar yeki az meghdar ha 1 bashe
	// Javab True mibod dige hamon 1 
	// Ya 2 ta 1 bashe baz 1 khoruji mide
	// Baraye mesal: 
	// Meghdar avval:  0011
	// Meghdar dovvom: 0101
		//Output -->   0111
	// Mesal tarkibi bit ha ham bezanim:
	// Meghdar avval:  0001
	// Meghdar dovvom: 0101
	// Meghdar sevvom: 0111
		//Output -->   0111

	// Mesal codi:
	// Injuri am mishe nevesht:
	std::cout << "Bitwise OR: ";
	std::cout << (std::bitset<4>(0b1010) | std::bitset<4>(0b1011)) << '\n';

	std::bitset<4> OR1 = 0b1100;
	std::bitset<4> OR2 = 0b1010;
	// Bebin age niyaz ham nabashe Parantez bezar 
	std::cout << "Bitwise OR: " << (OR1 | OR2) << '\n';


	// Berim soragh: Bitwise AND --> &
	// Inam mesl on ghanin khodeshe
	// In bod ke agar har 2 ta 1 bashe khoruji 1 mide
	// Gheyr az in khoruji 0
	// Mesal:
	// Meghdar avval:  0011
	// Meghdar dovvom: 0101
		// Output -->  0001

	// Mesal tarkibi ham bezanim baraye in 
	// Meghdar avval:  0101
	// Meghdar dovvom: 0011
	// Meghdar sevvom: 1101
		// Output -->  0001

	// Hatman bayad hamashon 1 bashe ta khoruji 1 bargardune

	// Mesal codi:
	std::cout << "Bitwise AND: ";
	std::cout << (std::bitset<4>(0b0101) & std::bitset<4>(0b1011)) << '\n';

	std::bitset<4> AND1 = 0b1000;
	std::bitset<4> AND2 = 0b1111;
	std::cout << "Bitwise AND: " << (AND1 & AND2) << '\n';


	// Berim soragh akharin Operator: Bitwise XOR --> ^
	// Mokhafafesh ine // XOR: Exclusive OR

	// Injurie ke agar tedad 1 ha ( fard ) bashe khoruji 1 barmigardune:
	// Mesal: 1, 3, 5, 7, 9
	// Meghdar avval:  0110
	// Meghdar dovvom: 0101
		// Output -->  0011
	// Tedad in balayi ha 1 done bod pas fard khoruji 1 mishe 
	
	// Mesal tarkibi:
	// Meghdar avval:  0100
	// Meghdar dovvom: 1101
	// Meghdar sevvom: 1100
		// Output -->  0101
	
	// Mesal codi:
	std::cout << "Bitwise XOR: ";
	std::cout << (std::bitset<4>(0b0001) ^ std::bitset<4>(0b1011)) << '\n';

	std::bitset<4> XOR1 = 0b1110;
	std::bitset<4> XOR2 = 0b1111;
	std::cout << "Bitwise XOR: " << (XOR1 ^ XOR2) << '\n';

	return 0;
}