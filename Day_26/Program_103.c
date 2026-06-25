#include <stdio.h>
int main()
{
int b,c,a;
printf("Enter initial balance: ");
scanf("%d",&b);
c=0;

while(c!=4)
{
printf("\n1. Check Balance\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d",&c);

if(c==1)
{
printf("Balance = %d\n",b);
}
else if(c==2)
{
printf("Enter amount to deposit: ");
scanf("%d",&a);
b=b+a;
printf("Money deposited successfully\n");
}
else if(c==3)
{
printf("Enter amount to withdraw: ");
scanf("%d",&a);
if(a<=b)
{
b=b-a;
printf("Money withdrawn successfully\n");
}
else
{
printf("Insufficient balance\n");
}
}
else if(c==4)
{
printf("Thank you for using ATM");
}
else
{
printf("Invalid choice\n");
}
}
return 0;
}