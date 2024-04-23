#include <stdio.h>

int main()
{

    int a, b, c;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d", &b);

    printf("enter the third number: ");
    scanf("%d", &c);

    (a < b && a < c)   ? printf("%d is smaller", a)
    : (b < a && b < c) ? printf("%d is smaller", b)
                       : printf("%d is samller", c);

    
}