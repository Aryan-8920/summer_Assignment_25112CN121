#include <stdio.h>
void main()
{
    int n,i,st=0,t;
    printf("Enter size: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int l=n-1;
    while(st<l)
    {
        t=ar[st];
        ar[st]=ar[l];
        ar[l]=t;
        st++;
        l--;
    }
    printf("Reversed array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}