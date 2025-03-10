#include <iostream>

// Keyword: Constexpr
// In Keyword tazmin mikone ham sabt bashe 
// Va hatman Compile-Time bashe vali be sharti ke
// Initialization hatman Constant Expression bashe
// Be joz in Error mide

int main() {

	constexpr int x = 5;
	constexpr double y = 6.5;
	constexpr double z = x + y;
	constexpr int i = x;
	constexpr int plus = i + x;

}