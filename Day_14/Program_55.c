#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=a[0],sl=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl && a[i]!=l)
        {
            sl=a[i];
        }
    }
    printf("Second Largest = %d",sl);
    return 0;
}