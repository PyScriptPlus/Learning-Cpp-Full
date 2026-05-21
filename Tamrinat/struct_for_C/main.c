#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
    float width;
};


int main() {

    struct Person p;
    struct Person *p2;

    p.age = 5;

    p2 = &p;
    
    // Male str injuri meghdar dahi mishe ba pointer ha:
    strcpy(p2->name, "Mohammad");

    

    printf("%s\n", p.name);
    printf("%s\n", p2->name);

    // Warning test:
    int num = 1;
    if(num = 3)
        ;
    return 0;
}