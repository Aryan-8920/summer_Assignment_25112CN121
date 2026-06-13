#include <stdio.h>
int main()
{
    int n,i,e=0,o=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Even elements = %d\n",e);
    printf("Odd elements = %d",o);
    return 0;
}