// Baraye Compile in project bayad standarad C++20 OR be bala bashe!!!
#include <iostream>
#include <type_traits>

namespace method_function
{
	int maximum(int x, int y) {
		return ((x > y) ? x : y);
	}
	constexpr int studentOne = 15;
	constexpr int studentTwo = 9;
}

namespace method_constexpr_function
{
	constexpr int maximum(int x, int y, int z) {
		// Nested Ternary
		return (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
	}
	constexpr int studentOne = 2;
	constexpr int studentTwo = 18;

	constexpr char RunOrCompile(char x) {
		// In Function return boolean bar migardune
		// Ke True bashe ya'ni Compile-Time 
		// else ya False bashe Run-Time
		if (std::is_constant_evaluated()) 
		{
			return x;
		}
		else
		{
			// Character Null
			return '\0';
		}
	}
}

namespace method_consteval_function
{
	consteval int maximum(int x, int y, int z) {
		if (std::is_constant_evaluated()) 
		{
			// Nested Ternary
			return ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z));
		}
		else
		{
			// Null
			return '\0';
		}
	}
	constexpr int studentOne = 21;
	constexpr int studentTwo = 13;
	constexpr int studentThree = 11;
}

int main() {

	#pragma region Method one
	// Method one:
	// Dar in method Performance behtare vali 
	// Code haye ziad dar main khanayi ro payin miyare!!
	constexpr int studentOne = 5;
	constexpr int studentTwo = 10;
	std::cout << "The greatest age: "
		<< ((studentOne > studentTwo) ? studentOne : studentTwo) << '\n';
	#pragma endregion

	#pragma region Method Function
	// Method Function:
	// In method khana tare vali Performance ghablie behtare
	// Manzuram Method balayi hast
	// Chon in Function Call dar zaman Run-Time hast
	// On Method one (expression) dar Compile-Time arzyabi mishe
	// Berim ravash jadid :)
	using method_function::maximum;
	std::cout << "The greatest age: " << 
		maximum(method_function::studentOne,
		method_function::studentTwo) << '\n';
	#pragma endregion

	#pragma region Method constexpr Function
	// In Method chand ta ghavanin dare
	// Ke yek Function vajed sharayet arzyabi Compile-Time bashe
	// 1- Ghabl define function constexpr gharar bedim 
	// 2- Argument hayi ke behesh Pass midim hatman 
	// Bayad (constexpr) ya (Literal) bashe
	// 3- Dar jayi ke mishine on Function Call onja ham bayad
	// const expression bashe 
	
	// Deghat kon age ina roa'yat nashe !!!
	// Error nemide vali Run-Time hesab mishe 

	// Halat avval: Literal
	constexpr int result_ha = 
		method_constexpr_function::maximum(5, 9, 20);
	std::cout << "The greatest age: " <<
		 result_ha << '\n';

	// Halat dovvom: Constexpr Variable + Literal
	constexpr int result_hd = method_constexpr_function::maximum(
		method_constexpr_function::studentOne,
		method_constexpr_function::studentTwo,
		3);
	std::cout << "The greatest age: " << result_hd << '\n';

	// Halat sevvom: Inja compile tasmim migire chi beshe
	// Ke be ehtemal 99% migam Run-Time arzyabi mikone ino
	std::cout << "The greatest age: " <<
		method_constexpr_function::maximum(
		method_constexpr_function::studentOne,
		method_constexpr_function::studentTwo,
		300) << '\n';

	// Baraye fahmidanesh yek Function dige define mikonam
	// Ba yek code jadid ke C++20 omade mitunim befahmim dare
	// std::cout chi hast Run-Time Or Compile-Time:
	std::cout << "RunOrCompile: " << 
		method_constexpr_function::RunOrCompile('A') << '\n';
	constexpr char RunOrCompile =
		method_constexpr_function::RunOrCompile('A');
	std::cout << "RunOrCompile: " << RunOrCompile << '\n';

	#pragma endregion

	#pragma region Method consteval Function
	// Dar Standarad C++20 yek Keyword jadid mo'arefi shod
	// Be name (consteval) baraye inke neshun bede yek function
	// Bayad dar zaman Compile-Time arzyabi beshe va 
	// Agar in etefagh nayofte Error bede !!!
	// Be hamchin Functioni migan: Immediate Function
	// Khobi ke dare dar jahayi ke tasmim migire 
	// Run-Time bashe ya Compile-Time in 100% Compile-Time mishe
	// Hata dar std::cout ya mitune dar jayi beshine ke constexpr
	// constexpr nist !!!
	// Vali bayad meghdar hayi ke be Argument pass dade mishe
	// Hatman constexpr bashan ya Literal !!!!

	int numberOne = method_consteval_function::maximum(9, 6, 3);
	std::cout << "Bigger Number: " << numberOne << '\n';

	std::cout << "The greatest age: " <<
		method_consteval_function::maximum(
			method_consteval_function::studentOne,
			method_consteval_function::studentTwo,
			method_consteval_function::studentThree) << '\n';


	/*
		Error mide :
		call to consteval function
		"method_consteval_function::maximum"
		did not produce a valid constant expression
		int number = 65;
		constexpr int error =
		method_consteval_function::maximum(number, 6, 3);
	*/ 

	#pragma endregion

	return 0;
}