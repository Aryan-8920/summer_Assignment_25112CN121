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

    int large=a[0],small=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }

        if(a[i]<small)
        {
            small=a[i];
        }
    }

    printf("Largest = %d\n",large);
    printf("Smallest = %d",small);

    return 0;
}