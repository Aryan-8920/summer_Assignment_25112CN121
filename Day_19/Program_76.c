#include <stdio.h>
int main()
{
int n,i,j,s=0;
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
if(i==j)
{
s=s+a[i][j];
}
}
}
printf("Diagonal Sum = %d",s);
return 0;
}
