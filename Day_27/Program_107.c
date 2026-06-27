#include <stdio.h>
int main()
{
int id;
char name[50];
float b,h,d,g;
printf("Enter employee id: ");
scanf("%d",&id);
printf("Enter employee name: ");
scanf(" %[^\n]",name);
printf("Enter basic salary: ");
scanf("%f",&b);
h=b*20/100;
d=b*10/100;
g=b+h+d;
printf("\nEmployee ID = %d\n",id);
printf("Name = %s\n",name);
printf("Basic Salary = %.2f\n",b);
printf("HRA = %.2f\n",h);
printf("DA = %.2f\n",d);
printf("Gross Salary = %.2f",g);
return 0;
}