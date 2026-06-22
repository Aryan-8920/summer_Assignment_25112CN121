#include <stdio.h>
int main()
{
char s[100];
int i=0,w=0,f=0;
printf("Enter sentence: ");
scanf(" %[^\n]",s);
while(s[i]!='\0')
{
if(s[i]!=' ')
{
if(f==0)
{
w++;
f=1;
}
}
else
{
f=0;
}
i++;
}
printf("Number of words = %d",w);
return 0;
}