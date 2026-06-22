#include <stdio.h>
int main()
{
char s[100];
int i=0,j,f=1;
printf("Enter string: ");
scanf(" %[^\n]",s);
while(s[i]!='\0')
{
i++;
}
j=i-1;
i=0;
while(i<j)
{
if(s[i]!=s[j])
{
f=0;
break;
}
i++;
j--;
}
if(f==1)
{
printf("Palindrome String");
}
else
{
printf("Not Palindrome String");
}
return 0;
}