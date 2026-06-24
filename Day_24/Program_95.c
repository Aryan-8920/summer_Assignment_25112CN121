#include <stdio.h>
int main()
{
char s[100];
int i=0,c=0,m=0,st=0,p=0;
printf("Enter sentence: ");
scanf(" %[^\n]",s);
while(s[i]!='\0')
{
if(s[i]!=' ')
{
if(c==0)
{
p=i;
}
c++;
}
else
{
if(c>m)
{
m=c;
st=p;
}
c=0;
}
i++;
}
if(c>m)
{
m=c;
st=p;
}
printf("Longest word: ");
for(i=st;i<st+m;i++)
{
printf("%c",s[i]);
}
return 0;
}
