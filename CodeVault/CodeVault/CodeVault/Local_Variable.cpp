#include <iostream>

// 3 Property in Variable:
// 1-Scope: (Local_Variable.cpp & Scope_VS_Duration.cpp)
// 2-Duration: (Variables_Storage_Duration.cpp & Scope_VS_Duration.cpp) 
// 3-Linkage: (Linkage.cpp)

// Parameter ham jozv Local Variable hesab mishe:
int max(int x, int y) { // x and y enters scope here
	int max = ((x > y) ? x : y); // max enters scope here
	return max;
} // x, y and max leave scope here

int main() {

	int x = 5; // x enters scope here
	double y = 4.0; // y enterc scope here

	std::cout << "Max Number: " << max(4, 5) << '\n';

	return 0;
} // x and y go out of scope here


// Mored ba'adi:
// Toye in code payini yeki parameter va yeki Variable
// Ba Identifier yeksan (x) hast
// Doruste yeki Parameter va yeki Variable hast
// Vali ba har 2 tashon yejur raftar mishe
// In error mide: redefinition of formal parameter 'x'
void someFunction(int x) {
	int x;
	return;
}