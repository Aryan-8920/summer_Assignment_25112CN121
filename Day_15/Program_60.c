#include <stdio.h>
int main()
{
    int n,i,j=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    while(j<n)
    {
        b[j]=0;
        j++;
    }
    printf("Array after moving zeroes: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}