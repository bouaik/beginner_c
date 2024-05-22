#include <stdio.h>

int main()
{
    float pi = 3.1415;
    float radius;
    float area;

    printf("Plese enter the radius : ");
    scanf("%f", &radius);
    area = pi * radius * radius;

    printf("The area is %f \n", area);

    return 0;
}
