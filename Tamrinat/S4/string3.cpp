#include <iostream>
#include <string_view>
#include <string>

int main() {

    std::string_view fName = "MohammaD";
    std::cout << fName << '\n';
    constexpr std::string_view compileTime = "C++ is My Home :)";
    std::cout << compileTime << '\n';

    // Implicit: string to string_view
    std::string type = "Ali";
    std::string_view convert = type;
    
    // Implicit nemishe just Explicit: string_view to string
    std::string_view type2 = "Hassan";
    std::string convert2 = std::string(type2); // Injuri ham mishe Explciti ye ravesh dige ashe
    // Behtarin static_cast:
    std::string convert3 = static_cast<std::string>(type2);


    // Suffix string_view:
    using namespace std::literals;
    std::cout << "Salam :)"sv << '\n';
    std::cout << typeid("Salam :)"sv).name() << '\n';
    // Ez :)



    return 0;
}