#include <stdio.h>
void main()
{
int n,i,j,s,f=0;
printf("Enter size: ");
scanf("%d",&n);

int a[n];
printf("Enter elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter sum: ");
scanf("%d",&s);

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==s)
{
printf("Pair = %d %d",a[i],a[j]);
f=1;
break;
}
}

if(f==1)
{
break;
}
}

if(f==0)
{
printf("No Pair Found");
}
}