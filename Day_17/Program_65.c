#include <stdio.h>
int main()
{
int n,m,i,j;
printf("Enter size of first array: ");
scanf("%d",&n);
int a[n];
printf("Enter first array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter size of second array: ");
scanf("%d",&m);
int b[m],c[n+m];
printf("Enter second array elements: ");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(j=0;j<m;j++)
{
c[i]=b[j];
i++;
}
printf("Merged array: ");
for(i=0;i<n+m;i++)
{
printf("%d ",c[i]);
}
return 0;
}