#include <iostream>

int pcMath(int x, int y) {
    return ((x * y) + 5) / 5 ;
}


namespace pc1 {
    void print(std::string_view hello) {
        std::cout << hello << '\n';
    }
    // inner namespace
    namespace pc2 {
        void print(std::string_view hello) {
            std::cout << hello << '\n';
            std::cout << "PCMath: " << ::pcMath(2 , 5) << '\n';
        }
    }
}

int main() {

    pc1::print("Hello PC1");
    pc1::pc2::print("Hello PC2");
    
    // Alias Namespace behtare hamishe bejaye using ino estefade koni!!!
    namespace computers = pc1::pc2;
    computers::print("Hello Computers");
    return 0;
}   