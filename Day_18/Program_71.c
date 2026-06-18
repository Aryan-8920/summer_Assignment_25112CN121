#include <stdio.h>
int main()
{
int n,i,x,l,h,mid,f=0;
printf("Enter size: ");
scanf("%d",&n);
int a[n];
printf("Enter sorted elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to search: ");
scanf("%d",&x);
l=0;
h=n-1;
while(l<=h)
{
mid=(l+h)/2;
if(a[mid]==x)
{
f=1;
break;
}
else if(x>a[mid])
{
l=mid+1;
}
else
{
h=mid-1;
}
}
if(f==1)
{
printf("Element Found");
}
else
{
printf("Element Not Found");
}
return 0;
}