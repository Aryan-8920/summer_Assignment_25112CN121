#include <stdio.h>
int main()
{
    int n,t,s=0,d;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(t==s)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
