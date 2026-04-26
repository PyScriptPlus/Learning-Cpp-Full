// Ye mesal dige am bezanim ke age Local Variable
// Daraye Automatic Duration bashe be moshkel mikhorim
// Biaym ba Static Duration hal konim

#include <iostream>

int main() {

	// Bayad avval yek checked kone ba'ad finish kone 
	// Yek mesale dige hala
	
	// Mesal avvali: 
	// Output: 
	// Checked 
	// checked
	int i = 1;
	while (i <= 2) 
	{
		i++;
		int x = 1;
		bool check = false;
		x++;
		if (x == 2)
		{
			std::cout << "Checked!\n";
			check = !check;
		}
		if (check)
		{
			continue;
		}
		std::cout << "Finish!\n";
	}

	std::cout << '\n' << "=====================\n" << '\n';
	// Mesal dovvomi doruste
	// Avval check mikone ba'ad finish
	int z = 1;
	while (z <= 2)
	{
		z++;
		static int s_x = 1;
		bool check = false;
		s_x++;
		if (s_x == 2)
		{
			std::cout << "Checked!\n";
			check = !check;
		}
		if (check)
		{
			continue;
		}
		std::cout << "Finish!\n";
	}

	return 0;
}