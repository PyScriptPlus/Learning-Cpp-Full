#include <iostream>
#include <boost/dynamic_bitset.hpp>
// In dynamic_bitset mesl hamon bitset khodemune kami pishrafte 
// Va herfeyi tar hast baraye project haye bozorg
// Library khareji dare bayad download konim ( Boost )
// Function haye ziadi dare ke gharare alan codesho benevisim
// Albate bazi haso
// 1-append() Miad 0 ya 1 ro az samt MSB ezafe mikone
// 2-resize() Miad tedad bit haro taghir mide
// 3-test_set() Miad avval barresi mikone bit mored nazar ro neshon mide baad age 0 bod 1 mikone
// 4-swap() Miad Value haye 2 ta bitset baham avaz mikone

// Syntax:
//boost::dynamic_bitset<> Identifier(Tedad bit, Value);

int main() {

	boost::dynamic_bitset<> mybit(4, 0b1010);
	mybit.append(1);
	mybit.resize(5); // Age ziad nakoni bug mishe ye jorayi az samt MSB 000000 minevise
	std::cout << "All Bits: " << mybit << '\n'; // Output --> 11010
	std::cout << mybit.test(4) << '\n'; // Output --> 1
	std::cout << "Bit Position 0: " << mybit.test_set(0) << '\n'; // Output --> 0
	std::cout << "Bit Position 0: " << mybit.test(0) << '\n';	// Output --> 1


	// Swap:
	std::cout << '\n' << "Swap: " << '\n';
	boost::dynamic_bitset<> b1(4, 0b1110);
	boost::dynamic_bitset<> b2(4, 0b0001);
	
	std::cout << "Ghabl Swap b1: " << b1 << '\n';
	std::cout << "Ghabl Swap b2: " << b2 << '\n';

	b1.swap(b2);

	std::cout << "Ba'ad Swap b1: " << b1 << '\n';
	std::cout << "Ba'ad Swap b2: " << b2 << '\n';


	return 0;
}