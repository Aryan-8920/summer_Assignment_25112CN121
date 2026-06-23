#include <stdio.h>
int main()
{
char s[100];
int i,j,c,f=0;
printf("Enter string: ");
scanf(" %[^\n]",s);
for(i=0;s[i]!='\0';i++)
{
c=0;
for(j=0;s[j]!='\0';j++)
{
if(s[i]==s[j])
{
c++;
}
}
if(c>1&&s[i]!=' ')
{
printf("First repeating character = %c",s[i]);
f=1;
break;
}
}
if(f==0)
{
printf("No repeating character found");
}
return 0;
}