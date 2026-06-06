#include <stdio.h>
void main()
{
    int n, rem, i = 0;
    char sp[32];
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0)
    {
        rem = n % 2;
          n=n/2;
        sp[i] = rem + '0'; 
        i++;
    }
    for(i = i - 1; i >= 0; i--)
    {
        printf("%c", sp[i]);
    }
}