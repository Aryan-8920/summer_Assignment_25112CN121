#include <stdio.h>
int main()
 {
    int n, t, r = 0, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (n != 0)
     {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    if (t == r)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
    return 0;
}