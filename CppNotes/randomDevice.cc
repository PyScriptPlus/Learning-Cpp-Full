// Library <random> dar C++ majmo'ei az tools ha baraye
// Tolid adad tasadofi faraham mikonad.
// Yeki az ajzaye mohem on std::random_device ast.

// std::random_device yek manba' tolid adad tasadofi gheyr ghat'i
// (non-deterministic random number generator) ast.
// Hadaf on tolid adadi hast ke ta had momken az manabe' vagheyi tasadof 
// Dar system  gerefte shavad.
// Na az Algorithm haye shebh tasadofi.

// Bar khalaf movaled haye shebh tasadofi mananad std::mt19937 ke ba yek 
// Algorithm riyazi kar mikonand.

// std::random_device mamolan az manabe' entropy OS ya sakht afzar estefade mikonad.
// Dar Standard C++ std::random_device be onvan yek UniformRandomBitGenerator
// Ta'rif shode ast ke dar surat emkan az yek manba' non-deterministic estefade mikonad

// Mesal:
/*
#include <iostream>
#include <random>

int main() {

    std::random_device rnd;
    unsigned int number = rnd.operator()(); // or rnd();
    std::cout << number << '\n';

    return 0;
}
*/

// Features haye mohem
// (Non-Determinism) Gheyr ghati bodan
// Agar definition az yek manba' vagheyi entropy estefade konad
// Output random_device ghabel pishbini nist va hata ba ejraye mojadad barname niz
// Tavali adad tekrar nemishavad.
// Ama Standard C++ tazmin nemikonad ke hameye Definition vaghean
// Non-Deterministic bashe.
// Agar manba' vagheyi dar dast ras nabashad,
// Definition momken ast az yek movaled shebh tasadofi estefade konad.

// Function entropy():
// Function zir mizan entropy manba' gozaresh midahad
/*
    std::random_device rnd;
    double e = rnd.entropy();
    Agar return in function 0 bashe
    Ehtemalan movaled determinstic ast
    Bozorgtar az 0 bashad: Neshan midahad ke manba' entropy
    Vagheyi vojud darad.
*/
// Entropy dar bahs adad tasadofi ya'ni mizan gheyr ghabel pish bini budan yek manba'
// Harche pishbini natije sakht tar bashad, entropy bishtar ast.

// Ta'rif sade Entropy: Andaze migirad ke cheghadr etela'at jadid ya
// عدم ghatiyat dar yek System vojud darad.
// Agar natije ra betavan taghriban hads zad ---> entropy kam ast
// Agar natije kamelan gheyr ghabel pish bini bashad ---> entropy ziyad ast

// Manabe' tolid entropy dar System ha:
// OS ha baraye tolid adad tasadofi vagheyi az padide haye fiziki gheyr ghabel pishbini
// Estefade mikonad.
// Barkhi az manabe' rayej ebarat and az:
// 1- Nois hararati madar haye Electronici
// 2- Jitter dar zaman bandi CPU
// 3- Mouse Hover & Input keyboard
// 4- Zaman residan Packet haye Network
// 5- Nois Electronici dar Hardware System RNG

// In Data ha tavasot OS jam avari shode va dar structi be name Entropy Pool save mishavad.
// Entropy Pool yek makhzan az dade haye tasadofi jam avari shode ast ke tavasot
// Kernel OS manage mishavad.
// Farayand koli be in surat ast:
// 1- OS data hayi az manabe' fiziki jamavari mikonad
// 2- In data ha ba Algorithm haye Hash tarkib mishavand
// 3- Natije dar yek makhzan Entropy save mishavad
// 4- Hengham darkhast adad tasadofi, Kernel az in makhzan estefade mikonad.


// In random_device behtare be jaye inke mostaghim estefade koni biyay be onvan
// Seed be mt19937 bedish

// Mesal:

#include <iostream>
#include <random>

int main() {

    std::random_device rnd;
    std::mt19937 mt{rnd()};
    std::uniform_int_distribution<int> dice{1,6};

    double checkEntropy = rnd.entropy();
    if(checkEntropy > 0)
    {
        std::cout << "Non-Deterministic:\n";
    }
    else
    {
        std::cout << "Deterministic:\n";
    }

    for (int i = 1; i <= 20; i++)
    {
        std::cout << dice(mt) << '\t';
        if(i % 5 == 0)
            std::cout << '\n';
    }

    return 0;
}

// Tafavot random_device ba movaled haye Pseudo_random mesal mt19937:
// 1- Kamelan Algorithmi
// 2- deterministic
// 3- Besiyar sari
// 4- Ghabel baz tolid (reproducible)

// Dar moghabel random_device:
// 1- Momken ast non-deterministic bashad
// 2- Be OS vabaste ast
// 3- Mamolan kond tar ast
// 4- Baraye amniyat monaseb tar ast