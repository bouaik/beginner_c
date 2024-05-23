#include <stdio.h>

int factorial(int a);

int main()
{

    int n;

    printf("Enter the number Please : ");
    scanf("%d", &n);

    n = factorial(n);

    printf("The factorial of n in %d \n", n);

    return 0;
}

int factorial(int a)
{
    if (a <= 1)
        return 1;

    return a * factorial(a - 1);
}