#include <iostream>
// Tozih code: behtare beri daftar negah koni 
// Vali khodam ye riz eshare mikonam
// Vaghti az Scope Resolution Operator estefade mikonim 
// Va hcihi dar samt chap gharar nemidim mesal:
// ::print() mostaghim mire Global donbale print() migarde
// Vali age khali minevisim print() avval namespace ke tosh call shode
// Migardi yani foo agar peyda nashod mire Global 

void print() {
	std::cout << "World!" << '\n';
	return;
}

namespace foo {
	
	void print() {
		std::cout << "Hello ";
		return;
	}
	void printHelloWorld() {

		print();
		::print();

		return;
	}
}

int main() {

	foo::printHelloWorld();


	return 0;
}