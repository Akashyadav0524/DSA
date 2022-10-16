#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;

    printf("Enter your 1st number :");
    scanf("%d", &a);

    printf("Enter your 2n number :");
    scanf("%d", &b);

    c = a + b;

    printf("your sum is %d", c);

    return c;
}