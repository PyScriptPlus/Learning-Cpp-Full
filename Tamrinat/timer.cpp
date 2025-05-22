#include <iostream>
#include <thread>
#include <chrono>


void printer(){

    std::cout << "Hiii" << '\n';
    return;
}

int main(){


    std::cout << "10 Sec wait!!" << '\n';
    std::this_thread::sleep_for(std::chrono::seconds(10));
    std::cout << "Your name is: MohammaD" << '\n';
    std::thread test(printer);
    test.join();

    return 0;
}
