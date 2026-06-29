#include <stdio.h>
int main()
{
int n,i,id[20],q[20];
char name[20][50];
float p[20];
printf("Enter number of items: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter item id: ");
scanf("%d",&id[i]);
printf("Enter item name: ");
scanf(" %[^\n]",name[i]);
printf("Enter quantity: ");
scanf("%d",&q[i]);
printf("Enter price: ");
scanf("%f",&p[i]);
}
printf("\nInventory Records:\n");
for(i=0;i<n;i++)
{
printf("\nItem ID = %d\n",id[i]);
printf("Item Name = %s\n",name[i]);
printf("Quantity = %d\n",q[i]);
printf("Price = %.2f\n",p[i]);
printf("Total Value = %.2f\n",q[i]*p[i]);
}
return 0;
}