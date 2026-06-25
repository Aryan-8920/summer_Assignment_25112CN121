#include <stdio.h>
int main()
{
int n,i,j,k;
char a[20][50],t[50];
printf("Enter number of names: ");
scanf("%d",&n);
printf("Enter names:\n");
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
k=0;
while(a[j][k]==a[j+1][k])
{
if(a[j][k]=='\0')
{
break;
}
k++;
}
if(a[j][k]>a[j+1][k])
{
k=0;
while(a[j][k]!='\0')
{
t[k]=a[j][k];
k++;
}
t[k]='\0';

k=0;
while(a[j+1][k]!='\0')
{
a[j][k]=a[j+1][k];
k++;
}
a[j][k]='\0';

k=0;
while(t[k]!='\0')
{
a[j+1][k]=t[k];
k++;
}
a[j+1][k]='\0';
}
}
}
printf("Names in alphabetical order:\n");
for(i=0;i<n;i++)
{
printf("%s\n",a[i]);
}
return 0;
}