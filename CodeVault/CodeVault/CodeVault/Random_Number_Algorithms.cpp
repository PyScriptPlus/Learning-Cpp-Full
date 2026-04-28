// Tozihat bishtar dar daftar va vscode moheme !!!

// Baraye estefade az ghabeliyat hayi ke zaban C++
// Baraye tolid Random Number ke gozashte 
// Bayad avval az hame Library random ro include konim
// Ba'adesh az Algorithm (Mersenne Twister)
// Mashhur tarin Algorithm Generate Random Number beyn
// Hameye zaban haye barnamenevisi hast

// Library (random) az 2 no'e (Mersenne Twister) estefade mikone
// 32Bit va 64Bit

// 32Bit --> mt19937
// 64Bit --> mt19937_64

// Mesal:
#include <iostream>
#include <random>
#include <chrono>

int main() {

    // Random Number (Part 1):
    std::mt19937 mt;
    for(int i = 1; i <= 20; ++i)
    {
        std::cout << mt.operator()() << '\t';
        // OR
        // std::cout << mt() << '\n';
        if(i % 5 == 0)
            std::cout << '\n';
    }

    std::cout << "\n\n\n\n" << "========================\n\n\n\n";
    
    // Random Number (Part 2): 
    // Dar part 1 adad kheyli tulani generate mikard
    // Man mesal mikham Dice shabih sazi konam 
    // Adad haye beyn 1 ta 6 tolid konim ba estefade az
    // Distribution 
    // Inam begam Distribution haye ziade darim
    // Ma felan ba uniform distribution kar mikonim
    
    std::mt19937 mt2;
    std::uniform_int_distribution dice{1,6};//Or dice(1,6)
    for(int i = 1; i <= 20; ++i)
    {
        std::cout << dice(mt2) << '\t';
        if(i % 5 == 0)
            std::cout << '\n';
    }



    std::cout << "\n\n\n\n" << "========================\n\n\n\n";

    // Random Number (Part 3):
    // Khob age deghat karde bashi adad ha ba har bar ejra
    // Daghighan yeksan hastand taghir nemikonanad
    // Khoruji yekie taghir nemikone
    // Chera? Chon ma ba har bar ejra dare Seed ghabli ro 
    // Mide behesh ma bayad be in mt19937 yek Seed jadid bedim
    // Seed chiye? In Algorithm 
    // Pseudo Random Number Generator
    // Baraye shoru kar niyaz be yek meghdar avvali darad
    // In meghdar avvali hamun Seed hast.
    // Seed = Noghte shoru Algorithm Pseudo Random Number Generator
    // Dar bare in mozu' hatman daftar ya vscode check kon
    // Tozihat asli onjas
    // So'al: Seed motafavet az koja biaram vaghti Random generate 
    // Mikone yeksan nabashan har bar motafavet?
    // Behtarin Seed Time PC hast
    // (  Yek Seed kheyli khafan dar project ba'adi migam :)  )
    // Baraye dast rasi be Time bayad Headerfile (chrono) ro include
    // Konim. Mesal:

    
    std::mt19937 mt3{static_cast<unsigned int>
                   (std::chrono::steady_clock::now()
                    .time_since_epoch().count())};
    std::uniform_int_distribution dice2{1,6};
    for(int i = 1; i <= 20; ++i)
    {
        std::cout << dice2(mt3) << '\t';
        if(i % 5 == 0)
            std::cout << '\n';
    }

    return 0;
}
