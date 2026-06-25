#include <stdio.h>
int main()
{
char s[100],a[20][50],t[50];
int i=0,j=0,n=0,k,l1,l2;
printf("Enter sentence: ");
scanf(" %[^\n]",s);

while(s[i]!='\0')
{
if(s[i]!=' ')
{
a[n][j]=s[i];
j++;
}
else if(j>0)
{
a[n][j]='\0';
n++;
j=0;
}
i++;
}
if(j>0)
{
a[n][j]='\0';
n++;
}

for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
l1=0;
while(a[j][l1]!='\0')
{
l1++;
}

l2=0;
while(a[j+1][l2]!='\0')
{
l2++;
}

if(l1>l2)
{
k=0;
while(a[j][k]!='\0')
{
t[k]=a[j][k];
k++;
}
t[k]='\0';

k=0;
while(a[j+1][k]!='\0')
{
a[j][k]=a[j+1][k];
k++;
}
a[j][k]='\0';

k=0;
while(t[k]!='\0')
{
a[j+1][k]=t[k];
k++;
}
a[j+1][k]='\0';
}
}
}

printf("Words sorted by length:\n");
for(i=0;i<n;i++)
{
printf("%s\n",a[i]);
}
return 0;
}