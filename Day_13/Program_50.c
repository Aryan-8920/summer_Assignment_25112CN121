#include <stdio.h>
int main()
{
    int n,i;
    float s=0,a;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    a=s/n;
    printf("Sum = %.0f\n",s);
    printf("Average = %.2f",a);
    return 0;
}