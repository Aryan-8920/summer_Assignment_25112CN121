#include <stdio.h>
void main()
{
int n,m,i,j,f;
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
int b[m];
printf("Enter second array elements: ");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("Union of arrays: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<m;i++)
{
f=0;
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
f=1;
break;
}
}
if(f==0)
{
printf("%d ",b[i]);
}
}
}