#include <stdio.h>
int perfect(int n)
{
    int i,s=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
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
    if(perfect(n)==1)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
    return 0;
}