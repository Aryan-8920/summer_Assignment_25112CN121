#include <stdio.h>
int main()
{
int n,i,roll[20],marks[20];
char name[20][50];
printf("Enter number of students: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter roll number: ");
scanf("%d",&roll[i]);
printf("Enter name: ");
scanf(" %[^\n]",name[i]);
printf("Enter marks: ");
scanf("%d",&marks[i]);
}
printf("\nStudent Records:\n");
for(i=0;i<n;i++)
{
printf("\nRoll Number = %d\n",roll[i]);
printf("Name = %s\n",name[i]);
printf("Marks = %d\n",marks[i]);
}
return 0;
}