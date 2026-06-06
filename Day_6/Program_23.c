#include <stdio.h>
int main() 
{
    int n, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0) 
    {
        c = c + (n % 2);
        n = n / 2;
    }
    printf("%d", c);
    return 0;
}