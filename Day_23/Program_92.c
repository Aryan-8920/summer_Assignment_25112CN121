#include <stdio.h>
int main()
{
char s[100],ch;
int i,j,c,m=0;
printf("Enter string: ");
scanf(" %[^\n]",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]!=' ')
{
c=0;
for(j=0;s[j]!='\0';j++)
{
if(s[i]==s[j])
{
c++;
}
}
if(c>m)
{
m=c;
ch=s[i];
}
}
}
printf("Maximum occurring character = %c",ch);
return 0;
}