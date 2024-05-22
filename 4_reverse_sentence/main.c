#include <stdio.h>

void reverse();

int main()
{
    printf("Enter a sentence : ");
    reverse();
    putchar('\n');
    return 0;
}

void reverse()
{
    int ch;
    ch = getchar();
    if (ch != '\n')
        reverse();
    putchar(ch);
}