#include <iostream>

// Project ghabli esm mask haro mizashtim mask0 ya mask4 ....
// Vali dar project vagheyi injuri nist
// Mesal mizanim payin bebin
// Mikhaym in 8 ta Vaziyat baraye mesal 2 nafar e'mal konim
// Mesal Ali alan Happy hast ya ham Happy va Hungry

namespace mask {

	// In 8 ta 1Byte hast jamesh mishe 8Byte
	// Chon constexpr hast hata inam hesab nemishe chon
	// Vaghti ina seda mizadim dar zaman Compile Time 
	// Meghdareshon jaygozin mishe :)
	constexpr std::uint8_t Hungry = 1 << 0;
	constexpr std::uint8_t Happy = 1 << 1;
	constexpr std::uint8_t Full = 1 << 2;
	constexpr std::uint8_t Angry = 1 << 3;
	constexpr std::uint8_t Sleeping = 1 << 4;
	constexpr std::uint8_t Crying = 1 << 5;
	constexpr std::uint8_t tired = 1 << 6;
	constexpr std::uint8_t Excited = 1 << 7;

}

int main() {

	// Ali va Reza ham jameshon mishe 2 Byte
	std::uint8_t ali = 0;
	ali |= (mask::Full | mask::Happy);
	std::uint8_t reza = mask::tired;
	// Jam'an mishe 8 + 2 = 10Byte

	//------------------------------------------------//

	/*
	Hala hamino baraye 2 Nafar ba Boolean benevisim :
	Injuri ke nemishe chon avvalan moshakhas nis 
	Ali Hungry ya Reza chio chio 
	if (ali == Hungry)
	Injuri mishe engar (ali == false)
	Malom nist Ali chie 
	Chon inja 2 ta vaziyat dare 0 ya 1 bayad ye ravesh dige benevisim:
	bool Hungry = false;
	bool Happy = true;
	bool Full = true;
	bool Angry = false;
	bool Sleeping = false;
	bool Crying = true;
	bool tired = false;
	bool Excited = true;
	*/

	// Har yeki Boolean 1Byte hast 
	// 8tas alan mishe 8Byte
	bool Ali_Hungry = false;
	bool Ali_Happy = true;
	bool Ali_Full = true;
	bool Ali_Angry = false;
	bool Ali_Sleeping = false;
	bool Ali_Crying = true;
	bool Ali_tired = false;
	bool Ali_Excited = true;
	// 8Byte am nafar ba'adi
	bool Reza_Hungry = false;
	bool Reza_Happy = true;
	bool Reza_Full = true;
	bool Reza_Angry = false;
	bool Reza_Sleeping = true;
	bool Reza_Crying = false;
	bool Reza_tired = true;
	bool Reza_Excited = true;
	// 8 * 2 = 16Byte

	return 0;
}