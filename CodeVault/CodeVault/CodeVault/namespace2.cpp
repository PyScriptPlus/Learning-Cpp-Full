// Ma mitunim namespace haye to dar to am benevisim
// Ba 2 ravesh
#include <iostream>

namespace foo {
	namespace goo {
		void print() {
			std::cout << "Hello World!" << '\n';
			return;
		}
	}
}

// Yek ravesh dige am omade vali bayad standard C++17 be bala bashi
namespace GPU::RAM {
	void print(){
	std::cout << "RAM is best :D" << '\n';
	return;
	}
}
// Hala in ravesh balayi ke goftam ba'ad C++17 faghat toye RAM hast
// Ya'ni zir majmoe GPU hast
// Hala chejuri baraye khod GPU Statement benevisim?
// Bayad jodagone benevisim mesal:
namespace GPU {
	void print() {
		std::cout << "GPU is best :D" << '\n';
		return;
	}
}

int main() {

	foo::goo::print();
	GPU::RAM::print();
	GPU::print();

	// Hala mitunim mesal foo::goo kotah tar va khana tar konim
	// Ta tamiz dar biyad 
	// Mesal:
	namespace active = foo::goo;
	active::print();

	return 0;
}