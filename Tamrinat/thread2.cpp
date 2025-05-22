#include <iostream>
#include <thread>
#include <chrono>

bool istest = false;
void working() {

    std::cout << "Started id= " << std::this_thread::get_id() << '\n';
    while (!istest)
    {
        std::cout << "Working..." << '\n';
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    return;
}


int main() {

    std::thread work(working);
    std::cin.get();
    istest = true;
    work.join();
    std::cout << "Finished!" << std::endl;
    istest = false;
    // std::cout << "Start id= " << std::this_thread::get_id() << '\n'; 
    std::thread work2(working);
    std::cin.get();
    istest = true;
    work2.join();
    std::cout << "Finished!\n";
    std::cin.get();
    return 0;
}