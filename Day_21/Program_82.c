#include <stdio.h>
int main()
{
char s[100],t;
int i=0,j;
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
t=s[i];
s[i]=s[j];
s[j]=t;
i++;
j--;
}

printf("Reversed string: %s",s);
return 0;
}