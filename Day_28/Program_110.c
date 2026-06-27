#include <stdio.h>
void main()
{
int ac,b,c=0,a;
char name[50];
printf("Enter account number: ");
scanf("%d",&ac);
printf("Enter account holder name: ");
scanf(" %[^\n]",name);
printf("Enter initial balance: ");
scanf("%d",&b);
while(c!=4)
{
printf("\n1. Check Balance\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Exit\n");
printf("Enter choice: ");
scanf("%d",&c);
if(c==1)
{
printf("Account Number = %d\n",ac);
printf("Name = %s\n",name);
printf("Balance = %d\n",b);
}
else if(c==2)
{
printf("Enter amount: ");
scanf("%d",&a);
if(a>0)
{
b=b+a;
printf("Money deposited\n");
}
else
{
printf("Invalid amount\n");
}
}
else if(c==3)
{
printf("Enter amount: ");
scanf("%d",&a);
if(a>0&&a<=b)
{
b=b-a;
printf("Money withdrawn\n");
}
else
{
printf("Insufficient balance\n");
}
}
else if(c!=4)
{
printf("Invalid choice\n");
}
}