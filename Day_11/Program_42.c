#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
void main()
{
    int a,b,m;
    scanf("%d%d",&a,&b);
    m=max(a,b);
    printf("Maximum = %d",m);
}