#include <stdio.h>

int main()
{

    int number;

    while (number != 0)
    {

        printf("Enter a number please : ");
        scanf("%d", &number);

        if (number % 2)
        {
            printf("The number is odd \n");
        }
        else
        {
            printf("The number is even \n");
        }
    }

    return 0;
}