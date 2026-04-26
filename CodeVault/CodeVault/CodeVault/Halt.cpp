// Halt chiye? Yek dastori ke ba'es mishe barname payan peyda bekone
// Halt keyword nist balke tavasot Function ha piyade sazi mishe
// Tozihatesh ziade az Season6.cpp ya Daftar S7 bebin !!!

#include <iostream>
#include <cstdlib>

void cleanUp() {
	std::cout << "CleanUp\n";
	return;
}

int main() {

	std::atexit(cleanUp); // Har vaght std::exit() call she in function cleanUp ham
	// Automatic call mishe (Deghat kon function cleanUp jolosh parantez nemizarim)

	std::abort(); // Abnormal Terminate

	std::exit(0); // Normal Terminate
	std::exit(1); // Abnormal Terminate
}

// Yeki dige az dastorat Halt dar project dige be esm terminate.cpp neveshtam !!!