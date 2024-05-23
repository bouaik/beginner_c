// fibonacci number : 0 1 1 2 3 5 8 13 21 34 55 89 ...

#include <stdio.h>

#define MAX 1000

int fibonacci(int);

void initMemo();

int memo[MAX];

int main()
{

    int n, fib;

    initMemo();

    printf("Which fibonacci number you would like : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("The number mus be postive\n");
    }
    else
    {
        fib = fibonacci(n);
        printf("The %dth fibonacci number is %d\n", n, fib);
    }

    return 0;
}

void initMemo()
{
    for (int i = 0; i < MAX; i++)
    {
        memo[i] = -1;
    }
}

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        if (memo[n] != -1)
        {
            return memo[n];
        }

        memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return memo[n];
    }
}
