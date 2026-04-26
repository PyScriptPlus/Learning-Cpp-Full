#include <iostream>
// Takmil nist ha hanozz !!! daftar negah kon !!!!

// Compound_Statement chand ta esm dare
// Block 
// Block statement
// Block chiye? hamin bracket ha ya be farsi کشروشه

// Yek block majmoei az Statement ha hast
// Statement = دستور
// Harja Statement hast mitunim Block bezarim
// Block khali am mishe gozasht !!!
// Dar payan Block niyazi nist ( ; ) bezarim mesal: {   }; 

// Ma ta inja chapter Block haro ziad didim mesal hamin
// Function ke define mikonim Body in Function yek Block hast
// Ya khod if vaghti bishtar az 1 statement darim Block mizarim !!!
// Block to dar to am mishe nevesht
// Ke be Block haye to dar to migan: Nested Block , Inner Block
// Block biruni am migim: Outer Block
// Mesal:
/*
void compound 
{ // Outer Block
	{ // Nested Block OR Inner Block
	return;
	} // Nested Block OR Inner Block
} // Outer Block
*/

// Hala agar Nested Block ma ziad beshe behesh migim Nesting Level
// Va agar ziad she in Nesting Level Sazmandehi Code sakht mishe
// Say kon ta omgh 3 ela 4 bashe in Nesting Level

// Agar didi Nesting Level bishtar az 4 ta hast Project ro Refactor kon!!!
// Refactor = بازسازی پروژه

// Mesal baraye Nesting Level:
// Va Refactor kardan:

int main() {

	int number;
	std::cin >> number;
	// Nesting Level alaki mire bala
	/*
	if (number >= 0)
	{
		if (number % 2 == 0)
		{
			std::cout << "Zoj" << '\n';
		}
		else
		{
			std::cout << "Fard" << '\n';
		}
	}
	*/

	// Refactor kardam in code ro: In behtare
	if ((number >= 0) && (number % 2 == 0))
	{
		std::cout << "Zoj" << '\n';
	}
	else
	{
		std::cout << "Fard" << '\n';
	}

	return 0;
}