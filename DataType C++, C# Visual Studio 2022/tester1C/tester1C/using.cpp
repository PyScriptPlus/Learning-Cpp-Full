// 2 Model using darim:
// Using directive
// Using declaration
// Tozihat kamel in mabhas ro dar file Season5.cpp bebin

#include <iostream>

// using namespace std; // using directive

void cout(int x) {
	std::cout << x << '\n';
	return;
}

int main() {

#pragma region Using Directive


	// Ma ghablan ham goftim dar using directive
	// Ehtemal Collision Name ziade riskesh ziade estefade nakon
	// cout << "Hello World!\n"; // Error
	// Rah hal: bayad az std:: estefade koni
	// Ya using namespace std; pak koni
	// Ta be tuni az Function cout ham estefade koni

	std::cout << "Hello World!" << '\n';
	cout(3);

	// Mitunim yek kari konim risk kamtari dare
	// Faghat jayi ke mikhaym in using namespace std;
	// Estefade konim
	// Faghat dar onja dar dast ras bashe
	{
		using namespace std;
		// cout << "Hello!"; // Bazam error mide chon function
		// cout() ro hanoz darim
		// Bazam risk pazire
	}
#pragma endregion

#pragma region Using Declaration
	// Berim soragh Using declaration
	// Baz in behtare

	using std::cout;
	// Dar in ravesh mitunim onayi ke ziad estefade mikonim
	// std shono dige nazarim ba in ravesh
	cout << "Hello World! with Using Declaration\n";
	// Mitunim chand ta ro using konim mesal ham cout ham cin
	using std::cout, std::cin;
	cout << "Enter your Number: ";
	int x;
	cin >> x;
	::cout(x);
	// Chon in using declaration dar Block Main ta'rif kardim
	// Age functioni toye Global bashe dige tadakhol ijad nemikone
	// Mitunim ba Scope Resolution Operator behesh
	// Dast rasi dashte bashim
	

#pragma endregion

	// Pishnahad mishe ba Using Directive aslan kar nakonid
	// Va inke age khastid ba Using Declaration estefade konid
	// Vali dar yek Block moshakhasi toye Global Namespace 
	// Nabashad!!
	return 0;
}
