#include <stdio.h>
int main()
{
    int n,i,x,f=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("Element Found");
    }
    else
    {
        printf("Element Not Found");
    }
    return 0;
}