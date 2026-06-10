#include <stdio.h>
int main()
{
    int n, t, d, sum = 0, f, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (t > 0)
    {
        d = t % 10;
        f = 1;
        for (i = 1; i <= d; i++)
        {
            f = f * i;
        }
        sum = sum + f;
        t = t / 10;
    }
    if (sum == n)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }
    return 0;
}