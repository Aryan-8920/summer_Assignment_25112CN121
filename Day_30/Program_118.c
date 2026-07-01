#include <stdio.h>
int main()
{
int n,i,id[20],x,f=0;
char title[20][50],author[20][50];
printf("Enter number of books: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter book id: ");
scanf("%d",&id[i]);
printf("Enter book title: ");
scanf(" %[^\n]",title[i]);
printf("Enter author name: ");
scanf(" %[^\n]",author[i]);
}
printf("\nLibrary Records:\n");
for(i=0;i<n;i++)
{
printf("\nBook ID = %d\n",id[i]);
printf("Book Title = %s\n",title[i]);
printf("Author = %s\n",author[i]);
}
printf("\nEnter book id to search: ");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(id[i]==x)
{
printf("Book Found\n");
printf("Book Title = %s\n",title[i]);
printf("Author = %s\n",author[i]);
f=1;
break;
}
}
if(f==0)
{
printf("Book not found");
}
return 0;
}