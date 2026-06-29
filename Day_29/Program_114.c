#include <stdio.h>
void main()
{
int n,i,c=0,s,l,x,f;
printf("Enter size of array: ");
scanf("%d",&n);
int a[n];
printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(c!=5)
{
printf("\n1. Display Array\n2. Sum of Array\n3. Largest Element\n4. Search Element\n5. Exit\n");
printf("Enter choice: ");
scanf("%d",&c);
if(c==1)
{
printf("Array elements: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
else if(c==2)
{
s=0;
for(i=0;i<n;i++)
{
s=s+a[i];
}
printf("Sum = %d\n",s);
}
else if(c==3)
{
l=a[0];
for(i=1;i<n;i++)
{
if(a[i]>l)
{
l=a[i];
}
}
printf("Largest element = %d\n",l);
}
else if(c==4)
{
printf("Enter element to search: ");
scanf("%d",&x);
f=0;
for(i=0;i<n;i++)
{
if(a[i]==x)
{
f=1;
break;
}
}
if(f==1)
{
printf("Element found\n");
}
else
{
printf("Element not found\n");
}
}
else if(c!=5)
{
printf("Invalid choice\n");
}
}
}