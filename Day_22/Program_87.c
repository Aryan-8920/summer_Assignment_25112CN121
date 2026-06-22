#include <stdio.h>
int main()
{
char s[100],ch;
int i=0,c=0;
printf("Enter string: ");
scanf(" %[^\n]",s);
printf("Enter character: ");
scanf(" %c",&ch);
while(s[i]!='\0')
{
if(s[i]==ch)
{
c++;
}
i++;
}
printf("Frequency of %c = %d",ch,c);
return 0;
}