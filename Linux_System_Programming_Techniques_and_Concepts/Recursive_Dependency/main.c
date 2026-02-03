#include <stdio.h>

struct occupation; // forward declaration of struct so that it can be used as a pointer in a recursive dependency

struct employee
{
    char name[30];
    unsigned char age;
    struct occupation *occupation; //pointer usage of struct
};

struct occupation
{
    char designation[20];
    unsigned int salary;
    struct employee employee; //complete usage of struct 
};

int main()
{
    return 0;
}