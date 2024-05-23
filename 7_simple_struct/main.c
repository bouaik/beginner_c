#include <stdio.h>

struct Identity
{
    char *name;
    int age;
    int year;
};

// you can use char name[50] but in assignement i have to use strcpy

int main()
{

    struct Identity me;

    me.name = "Lhoussaine";
    me.age = 30;
    me.year = 2024;

    printf("name : %s\nage : %d\nyear : %d\n", me.name, me.age, me.year);

    return 0;
}
