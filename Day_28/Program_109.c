#include <stdio.h>
struct book
{
int id;
char title[50];
char author[50];
};
int main()
{
struct book b[20];
int n,i;
printf("Enter number of books: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter book id: ");
scanf("%d",&b[i].id);
printf("Enter book title: ");
scanf(" %[^\n]",b[i].title);
printf("Enter author name: ");
scanf(" %[^\n]",b[i].author);
}
printf("\nLibrary Records:\n");
for(i=0;i<n;i++)
{
printf("\nBook ID = %d\n",b[i].id);
printf("Book Title = %s\n",b[i].title);
printf("Author = %s\n",b[i].author);
}
return 0;
}