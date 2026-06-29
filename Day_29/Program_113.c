#include <stdio.h>
int main()
{
int c=0;
float a,b;
while(c!=5)
{
printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
printf("Enter choice: ");
scanf("%d",&c);
if(c>=1&&c<=4)
{
printf("Enter two numbers: ");
scanf("%f%f",&a,&b);
}
if(c==1)
{
printf("Sum = %.2f\n",a+b);
}
else if(c==2)
{
printf("Difference = %.2f\n",a-b);
}
else if(c==3)
{
printf("Product = %.2f\n",a*b);
}
else if(c==4)
{
if(b!=0)
{
printf("Division = %.2f\n",a/b);
}
else
{
printf("Cannot divide by zero\n");
}
}
else if(c!=5)
{
printf("Invalid choice\n");
}
}
return 0;
}