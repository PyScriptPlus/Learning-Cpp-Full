#include <iostream>

int main() {

	constexpr const unsigned char file[] = {
		#embed "data.bin"
	};
	
	for(unsigned char c : file)
	{
		std::cout << std::hex << std::uppercase
			<< static_cast<int>(c) << " ";
	}

	std::cout << '\n';
	std::cout << "Convert to: " << '\n';
	
	for(unsigned char data : file)
	{
		std::cout << data;
	}
	std::cout << '\n';

	return 0;
}
