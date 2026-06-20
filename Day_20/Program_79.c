#include <stdio.h>
int main()
{
int r,c,i,j,s;
printf("Enter rows and columns: ");
scanf("%d%d",&r,&c);
int a[r][c];
printf("Enter matrix elements: ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
s=0;
for(j=0;j<c;j++)
{
s=s+a[i][j];
}
printf("Sum of row %d = %d\n",i+1,s);
}
return 0;
}