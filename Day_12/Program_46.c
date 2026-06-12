#include <stdio.h>
int armstrong(int n)
{
    int t,s=0,d;
    t=n;
    while(n!=0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(t==s)
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
    if(armstrong(n)==1)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    return 0;
}