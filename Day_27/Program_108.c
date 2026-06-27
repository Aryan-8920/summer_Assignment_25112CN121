#include <stdio.h>
int main()
{
char name[50];
int roll,m1,m2,m3,m4,m5,t;
float p;
printf("Enter student name: ");
scanf(" %[^\n]",name);
printf("Enter roll number: ");
scanf("%d",&roll);
printf("Enter marks of 5 subjects: ");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
t=m1+m2+m3+m4+m5;
p=t/5.0;
printf("\nStudent Name = %s\n",name);
printf("Roll Number = %d\n",roll);
printf("Total Marks = %d\n",t);
printf("Percentage = %.2f\n",p);
if(m1<33||m2<33||m3<33||m4<33||m5<33)
{
printf("Result = Fail");
}
else
{
printf("Result = Pass\n");
if(p>=80)
{
printf("Grade = A");
}
else if(p>=60)
{
printf("Grade = B");
}
else if(p>=45)
{
printf("Grade = C");
}
else
{
printf("Grade = D");
}
}
return 0;
}