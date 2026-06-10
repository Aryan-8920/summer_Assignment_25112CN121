#include <stdio.h>
void main() 
{
    int b, d = 0, p = 1, rem;

    printf("Enter binary number: ");
    scanf("%d", &b);

    while(b > 0) {
        rem = b % 10;
        d = d + rem*p;
        p = p * 2;
        b = b / 10;
    }
    printf("%d", d);
}