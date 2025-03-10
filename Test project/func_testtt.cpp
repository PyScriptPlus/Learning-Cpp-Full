#include <iostream>
using namespace std;

string getName(string& Fname , string& Lname);
void chap(string& x , string& y);

int main()
{
    
    string x , y;
    getName(x , y);
    chap(x , y);
    return 0;

}

string getName(string& Fname , string& Lname)
{

    std::cout << "Enter your FName: " << Fname;
    std::cin >> Fname;
    std::cout << "Enter your LName: " << Lname;
    std::cin >> Lname;
   // return // hanoz moshkel darim hal mikonim

}

void chap(string& x , string& y)
{

    std::cout << "Your FName: " << x << "Your LName: " << y;
    return;
}


