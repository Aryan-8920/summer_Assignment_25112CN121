#include <stdio.h>
struct student
{
int roll;
char name[50];
float marks;
};
int main()
{
struct student s[50];
int n,i;
printf("Enter number of students: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter roll number: ");
scanf("%d",&s[i].roll);
printf("Enter name: ");
scanf(" %[^\n]",s[i].name);
printf("Enter marks: ");
scanf("%f",&s[i].marks);
}
printf("\nStudent Records:\n");
for(i=0;i<n;i++)
{
printf("\nRoll Number = %d\n",s[i].roll);
printf("Name = %s\n",s[i].name);
printf("Marks = %.2f\n",s[i].marks);
}
return 0;
}