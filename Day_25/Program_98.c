#include <stdio.h>
int main()
{
char a[100],b[100];
int i,j,k,f=0,c=0;
printf("Enter first string: ");
scanf(" %[^\n]",a);
printf("Enter second string: ");
scanf(" %[^\n]",b);
printf("Common characters: ");
for(i=0;a[i]!='\0';i++)
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
if(f==0&&a[i]!=' ')
{
for(j=0;b[j]!='\0';j++)
{
if(a[i]==b[j])
{
printf("%c ",a[i]);
c++;
break;
}
}
}
}
if(c==0)
{
printf("No common character");
}
return 0;
}