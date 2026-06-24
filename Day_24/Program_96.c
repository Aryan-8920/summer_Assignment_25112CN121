#include <stdio.h>
int main()
{
char s[100];
int i,j,f;
printf("Enter string: ");
scanf(" %[^\n]",s);
printf("String after removing duplicates: ");
for(i=0;s[i]!='\0';i++)
{
f=0;
for(j=0;j<i;j++)
{
if(s[i]==s[j])
{
f=1;
break;
}
}
if(f==0)
{
printf("%c",s[i]);
}
}
return 0;
}