// fibonacci number : 0 1 1 2 3 5 8 13 21 34 55 89 ...

#include <stdio.h>

int fibonacci(int);

int main()
{

    int n, fib;

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
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
