// #include <iostream>



// int five(){


//     return 2;


// }


// int main(){

// int x  = 5;

// std::cout << (x + 5) / five();
  

// }





#include <iostream>
#include <string>


int getNumber()
{

    int num;
    std::cout << "Enter your : ";
    std::cin >> num;
    return num;

}

void chapper()
{
    int x = getNumber();
    std::cout << "Number: " << x * 2;
    return;

}



int main()
{

    chapper();
    return 0;


}















