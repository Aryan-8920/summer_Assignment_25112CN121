#include <stdio.h>
int main()
{
int n,i,j,c,m=0,e;
printf("Enter size: ");
scanf("%d",&n);

int a[n];
printf("Enter elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}

if(c>m)
{
m=c;
e=a[i];
}
}

printf("Maximum Frequency Element = %d",e);

return 0;
}