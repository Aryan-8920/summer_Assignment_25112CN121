#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n+1;i++)
    {
        int f=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                f=1;
            }
        }
        if(f==0)
        {
            printf("Missing Number = %d",i);
        }
    }
    return 0;
}