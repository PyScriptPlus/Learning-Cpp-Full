#include <cstdint>
#include <iostream>

int main() {

  std::int8_t d = 97;
  std::uint8_t w = 97;
  std::int_fast8_t s = 97;
  std::int_least8_t q = 97;
  std::cout << d << '\n';
  std::cout << w << '\n';
  std::cout << s << '\n';
  std::cout << q << '\n';

  std::cout << sizeof(long double) << '\n';



  return 0;
}
