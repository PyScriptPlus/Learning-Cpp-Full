#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>




void mamadPrint(){

    
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "MamaD" << '\n';
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
    
    return;
}

void aliPrint() {

    
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Ali" << '\n';
        std::this_thread::sleep_for(std::chrono::seconds(5));    
    }
    
    return;
}

int main() {

    std::thread print1(mamadPrint);
    std::thread print2(aliPrint);
    
    print1.join();
    print2.join();


    return 0;
}