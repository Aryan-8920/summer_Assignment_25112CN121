#include <stdio.h>
void main()
{
int n,m,i,j,k,f;
printf("Enter size of first array: ");
scanf("%d",&n);
int a[n];
printf("Enter first array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter size of second:");
scanf("%d",&m);
int b[m];
printf("Enter second array elements: ");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("Common elements are: ");
for(i=0;i<n;i++)
{
f=0;
for(k=0;k<i;k++)
{
if(a[i]==a[k])
{
f=1;
break;
}
}
if(f==0)
{
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
printf("%d ",a[i]);
break;
}
}
}
}
}