#include <stdio.h>
int main()
{
char a[100],b[100];
int i=0,j,c1,c2,l1=0,l2=0,f=1;
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
if(l1!=l2)
{
f=0;
}
else
{
for(i=0;a[i]!='\0';i++)
{
c1=0;
c2=0;
for(j=0;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
c1++;
}
}
for(j=0;b[j]!='\0';j++)
{
if(a[i]==b[j])
{
c2++;
}
}
if(c1!=c2)
{
f=0;
break;
}
}
}
if(f==1)
{
printf("Anagram Strings");
}
else
{
printf("Not Anagram Strings");
}
return 0;
}