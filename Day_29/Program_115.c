#include <stdio.h>
void main()
{
char s[100];
int c=0,i,v;
printf("Enter string: ");
scanf(" %[^\n]",s);
while(c!=5)
{
printf("\n1. Find Length\n2. Reverse String\n3. Count Vowels\n4. Convert to Uppercase\n5. Exit\n");
printf("Enter choice: ");
scanf("%d",&c);
if(c==1)
{
i=0;
while(s[i]!='\0')
{
i++;
}
printf("Length = %d\n",i);
}
else if(c==2)
{
i=0;
while(s[i]!='\0')
{
i++;
}
printf("Reversed string: ");
i=i-1;
while(i>=0)
{
printf("%c",s[i]);
i--;
}
printf("\n");
}
else if(c==3)
{
i=0;
v=0;
while(s[i]!='\0')
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
{
v++;
}
i++;
}
printf("Vowels = %d\n",v);
}
else if(c==4)
{
i=0;
printf("Uppercase string: ");
while(s[i]!='\0')
{
if(s[i]>='a'&&s[i]<='z')
{
printf("%c",s[i]-32);
}
else
{
printf("%c",s[i]);
}
i++;
}
printf("\n");
}
else if(c!=5)
{
printf("Invalid choice\n");
}
}
}