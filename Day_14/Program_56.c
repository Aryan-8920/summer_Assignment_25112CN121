#include <stdio.h>
int main()
{
    int n,i,j,f;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements are: ");
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    printf("%d ",a[i]);
                    break;
                }
            }
        }
    }
    return 0;
}