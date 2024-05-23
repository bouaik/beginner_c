#include <stdio.h>

int sum(int a);

int main()
{

    int n;

    printf("Enter the number Please : ");
    scanf("%d", &n);

    n = sum(n);

    printf("The sum of n in %d \n", n);

    return 0;
}

int sum(int a)
{
    if (a == 0)
        return 0;

    return a + sum(a - 1);
}