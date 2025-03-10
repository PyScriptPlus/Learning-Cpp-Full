// Dar in jalase mikhaym 2 ta file be ham Link konim dar 
// Har file code haye jodagane benevisim 
// Mikham ye Function benevisam dar file zarb.cpp
// 2 adad be ham zarb kone dar main chapesh kone
// dar project haye bozorg lazem mishe


#include <iostream>

extern int zarb(); // Har 2 tasham mishe vali extern baraye Variable haye global behtare ke elam konim
int zarb(); // Vali in Forward Declaration baraye in khobeh

int main()
{

    std::cout << "Zarb adad haye shoma mishe: " << zarb(); 
    return 0;

}