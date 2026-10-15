#include <iostream>
#include <string>
#include <nlohmann/json.hpp>

int main() {

	// 
	nlohmann::json player = {
		{"Name", "Mamadreal"},
		{"Level", 90},
		{"ilevel", 305},
		{"Class", "Druid"},
		{"isTank", true}
	};

	std::cout << player.dump(3) << '\n';

	//--------------------------------------------------------//
	std::string text = R"({
	"Name": "Mamadreal",
	"Level": 90,
	"ilevel": 305,
	"Class": "Druid",
	"isTank": true
})";

	std::cout << text << '\n';

	nlohmann::json parser = nlohmann::json::parse(text);
	std::cout << parser.dump(3) << '\n';
	std::cout << parser["ilevel"] << '\n';

	return 0;
}
