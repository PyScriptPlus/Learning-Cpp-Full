#include <iostream>

extern void OddOrEven();
extern std::string CodedBy;

int main() {

    std::cout << CodedBy << '\n';
    OddOrEven();

    return 0;
}