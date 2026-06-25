#include <stdio.h>
int main()
{
char a;
int s=0;
printf("Quiz Application\n");

printf("\n1. What is the capital of India?\n");
printf("a. Mumbai\nb. Delhi\nc. Kolkata\nd. Chennai\n");
printf("Enter answer: ");
scanf(" %c",&a);
if(a=='b'||a=='B')
{
s++;
}

printf("\n2. Which language is used for C programming?\n");
printf("a. HTML\nb. Python\nc. C\nd. Java\n");
printf("Enter answer: ");
scanf(" %c",&a);
if(a=='c'||a=='C')
{
s++;
}

printf("\n3. How many days are there in a week?\n");
printf("a. 5\nb. 6\nc. 7\nd. 8\n");
printf("Enter answer: ");
scanf(" %c",&a);
if(a=='c'||a=='C')
{
s++;
}

printf("\nYour score = %d out of 3",s);
return 0;
}