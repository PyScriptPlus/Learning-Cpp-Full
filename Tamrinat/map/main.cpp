// Yek did ashnayi ba std::map
#include <iostream>
#include <map>


struct Student
{
    std::string fname;
};

int main() {
    using std::map;

    Student student1;
    student1.fname = "Mohammad";
    Student student2;
    student2.fname = "Ali";
    Student student3;
    student3.fname = "Reza";
    Student student4;
    student4.fname = "Arthur";


    map<int, std::string> id;
    id[0] = student1.fname;
    id[1] = student2.fname;
    id[2] = student3.fname;
    // id.clear();
    id.insert({3,student4.fname});
    
    for(auto ff : id)
    {
        std::cout << "Student name is: " << ff.second << '\n';
    }

    return 0;
}
