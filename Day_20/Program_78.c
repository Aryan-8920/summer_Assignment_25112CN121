#include <stdio.h>
int main()
{
int n,i,j,f=1;
printf("Enter size of square matrix: ");
scanf("%d",&n);
int a[n][n];
printf("Enter matrix elements: ");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=a[j][i])
{
f=0;
break;
}
}
}
if(f==1)
{
printf("Symmetric Matrix");
}
else
{
printf("Not Symmetric Matrix");
}
return 0;
}