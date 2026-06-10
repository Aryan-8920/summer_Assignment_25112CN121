#include <stdio.h>
int main()
 {
    int n, i, max = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++) 
    {
        while(n % i == 0) 
        {
            max = i;
            n = n / i;
        }
    }
    printf("%d", max);
    return 0;
}