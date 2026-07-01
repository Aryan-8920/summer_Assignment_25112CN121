#include <stdio.h>
int main()
{
int n,i,id[20],x,f=0;
char name[20][50];
float salary[20];
printf("Enter number of employees: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter employee id: ");
scanf("%d",&id[i]);
printf("Enter employee name: ");
scanf(" %[^\n]",name[i]);
printf("Enter salary: ");
scanf("%f",&salary[i]);
}
printf("\nEmployee Records:\n");
for(i=0;i<n;i++)
{
printf("\nEmployee ID = %d\n",id[i]);
printf("Name = %s\n",name[i]);
printf("Salary = %.2f\n",salary[i]);
}
printf("\nEnter employee id to search: ");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(id[i]==x)
{
printf("Employee Found\n");
printf("Name = %s\n",name[i]);
printf("Salary = %.2f\n",salary[i]);
f=1;
break;
}
}
if(f==0)
{
printf("Employee not found");
}
return 0;
}