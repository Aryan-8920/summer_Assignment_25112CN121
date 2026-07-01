/* Mini Grocery Billing System */
#include <stdio.h>
int n,q[20],p[20];
char name[20][50];
void input()
{
int i;
printf("Enter number of items: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter item name: ");
scanf(" %[^\n]",name[i]);
printf("Enter quantity: ");
scanf("%d",&q[i]);
printf("Enter price: ");
scanf("%d",&p[i]);
}
}
void display()
{
int i,t=0;
printf("\nBill Details:\n");
for(i=0;i<n;i++)
{
printf("\nItem Name = %s\n",name[i]);
printf("Quantity = %d\n",q[i]);
printf("Amount = %d\n",q[i]*p[i]);
t=t+q[i]*p[i];
}
printf("\nTotal Bill = %d",t);
}
int main()
{
input();
display();
return 0;
}