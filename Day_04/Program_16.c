#include <stdio.h>
int main()
{
    int a,b,i,t,s,d;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        t=i;
        s=0;
        while(t!=0)
        {
            d=t%10;
            s=s+d*d*d;
            t=t/10;
        }
        if(s==i)
            printf("%d ",i);
    }
    return 0;
}
