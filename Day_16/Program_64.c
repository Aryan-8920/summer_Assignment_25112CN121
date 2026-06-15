#include <stdio.h>
int main()
{
int n,i,j;
printf("Enter size: ");
scanf("%d",&n);
int a[n];
printf("Enter elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Array after removing duplicates: ");
for(i=0;i<n;i++)
{
int f=0;
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
printf("%d ",a[i]);
}
}
return 0;
}