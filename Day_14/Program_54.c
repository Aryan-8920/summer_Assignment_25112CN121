#include <stdio.h>
int main()
{
    int n,i,x,c=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            c++;
        }
    }
    printf("Frequency = %d",c);
    return 0;
}