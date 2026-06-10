#include <stdio.h>
int main() 
{
    int x, n, i, p = 1;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    for(i = 1; i <= n; i++) 
    {
        p = p * x;
    }
    printf("%d", p);
    return 0;
}