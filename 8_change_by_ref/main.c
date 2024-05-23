#include <stdio.h>

void change(int *);

int main()
{

    int a = 10;

    change(&a);

    printf("the value after change is : %d \n", a);

    return 0;
}

void change(int *b)
{
    *b = 17;
}
