#include <stdio.h>

int main()
{

    float pi = 3.1415;
    float circum;
    float radius;

    printf("Enter the radius please :");
    scanf("%f", &radius);

    circum = 2 * pi * radius;
    printf("The circumferance is : %f \n", circum);

    return 0;
}