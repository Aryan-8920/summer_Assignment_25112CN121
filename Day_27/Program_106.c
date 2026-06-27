#include <stdio.h>
struct employee
{
int id;
char name[50];
float salary;
};
int main()
{
struct employee e[50];
int n,i;
printf("Enter number of employees: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter employee id: ");
scanf("%d",&e[i].id);
printf("Enter employee name: ");
scanf(" %[^\n]",e[i].name);
printf("Enter salary: ");
scanf("%f",&e[i].salary);
}
printf("\nEmployee Records:\n");
for(i=0;i<n;i++)
{
printf("\nEmployee ID = %d\n",e[i].id);
printf("Name = %s\n",e[i].name);
printf("Salary = %.2f\n",e[i].salary);
}
return 0;
}