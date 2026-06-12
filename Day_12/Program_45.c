#include <stdio.h>
int palindrome(int n)
{
    int t,r=0,d;
    t=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(t==r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(palindrome(n)==1)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
    return 0;
}