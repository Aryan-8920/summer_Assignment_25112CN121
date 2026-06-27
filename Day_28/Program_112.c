#include <stdio.h>
struct contact
{
char name[50];
char phone[15];
};
int main()
{
struct contact c[20];
int n,i;
printf("Enter number of contacts: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter contact name: ");
scanf(" %[^\n]",c[i].name);
printf("Enter phone number: ");
scanf("%s",c[i].phone);
}
printf("\nContact Records:\n");
for(i=0;i<n;i++)
{
printf("\nName = %s\n",c[i].name);
printf("Phone Number = %s\n",c[i].phone);
}
return 0;
}