// bool x; 0000'0000 har kodom az in 0 ya 1 ha Bit Flag hast
// Chera Flag hala? Flag be manaye parcham harkodom az on 
// 0 ya 1 hayi ke 0 be manaye Khamosh ya kheyr 
// 1 be manaye roshan ya are migan Flag

// Nokte: 2 ta Mored darim
// 1- Bit Sequence 00001010
// 2- Bit Position 76543210  
// Bit Sequence mesal migim bitset<8> Value
// Be 0 ya 1 haye on Value migan Bit Sequence
// Baraye neshan dadan jaygah 0 ya 1 haye on Bit Sequence 
// Az Bit Position estefade mikonim
// Bit Position: az 0 va samt rast shoru mishe ta samt chap
// Mesal migim Bit ba Position 3 ke hamon 1
// Ya Bit ba Position 5 ke hamon 0 hast

// Nokte ba'adi:
// Ma yek MSB va LSB darim chiye?
// LSB: Least Significant Bit
// MSB: Most Significant Bit
// LSB Kam arzesh tarin bit hast az samt rast
// MSB Por arzesh tarin bit hast az samt chap

#include <iostream>
#include <bitset>

int main() {

	// 4 ta Function asli baraye bitset darim
	// Ke harkodom az in Function ha Bit-Position daryaft mikonand
	// 1-test() Miad barresi mikone aya bit mored nazar 0 hast ya 1
	// 2-set() Miad bit mored nazar agar 0 bashe 1 mikone
	// 3-reset() Miad bit mored nazar agar 1 bashe 0 mikone
	// 4-flip() Miad agar bit mored nazar 0 bashe 1 mikone ya 1 bashe 0 mikone

	std::bitset<4> mybit = 0b1010;
	mybit.set(0);
	std::cout << "Bit Position 0: " << mybit.test(0) << '\n'; // Output --> 1
	mybit.reset(0);
	std::cout << "Bit Position 0: " << mybit.test(0) << '\n'; // Output --> 0
	mybit.flip(1);
	mybit.flip(2);
	std::cout << "All Bit: " << mybit << '\n'; // Output --> 1100
	std::cout << "Bit Position 1: " << mybit.test(1) << '\n'; // Output --> 0
	std::cout << "Bit Position 2: " << mybit.test(2) << '\n'; // Output --> 1


	return 0;
}
