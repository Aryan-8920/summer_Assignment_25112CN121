#include <stdio.h>
int main()
{
char s[100];
int i=0,c;
printf("Enter string: ");
scanf(" %[^\n]",s);
printf("Compressed string: ");
while(s[i]!='\0')
{
c=1;
while(s[i]==s[i+1])
{
c++;
i++;
}
printf("%c%d",s[i],c);
i++;
}
return 0;
}