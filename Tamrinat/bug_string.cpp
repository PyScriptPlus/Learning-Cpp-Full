#include <iostream>
#include <string>
#include <string_view>

std::string get_view() {
    std::string temp = "Salam";
    return temp; 
}

int main() {
    std::string sv = get_view();
    std::string_view res = sv;
    std::cout << "Result: " << res << '\n';
    return 0;
}

// Moshkel
/*
#include <iostream>
#include <string>
#include <string_view>

std::string_view get_view() {
    std::string temp = "Salam";
    return temp; // 🛑 خطرناک! temp بعد از return نابود میشه
}

int main() {
    std::string_view sv = get_view();
    std::cout << "Result: " << sv << '\n'; // ⚠️ رفتاری نامشخص (UB)
    return 0;
}
*/