#include <stdio.h>
int main()
{
char a[100],b[100],t;
int i,j,l1=0,l2=0,f=0;
printf("Enter first string: ");
scanf(" %[^\n]",a);
printf("Enter second string: ");
scanf(" %[^\n]",b);
while(a[l1]!='\0')
{
l1++;
}
while(b[l2]!='\0')
{
l2++;
}

if(l1==l2)
{
for(i=0;i<l1;i++)
{
for(j=0;j<l1;j++)
{
if(a[j]!=b[j])
{
break;
}
}
if(j==l1)
{
f=1;
break;
}

t=a[0];
for(j=0;j<l1-1;j++)
{
a[j]=a[j+1];
}
a[l1-1]=t;
}
}

if(f==1)
{
printf("It is String Rotation");
}
else
{
printf("Not String Rotation");
}
return 0;
}