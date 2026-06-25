#include <stdio.h>
int main()
{
int l,h,n,g;
printf("Enter lower limit: ");
scanf("%d",&l);
printf("Enter upper limit: ");
scanf("%d",&h);
printf("Enter secret number: ");
scanf("%d",&n);
if(n<l||n>h)
{
printf("Secret number is not in the given range");
}
else
{
g=l-1;
printf("Guess the number between %d and %d\n",l,h);
while(g!=n)
{
printf("Enter your guess: ");
scanf("%d",&g);
if(g<l||g>h)
{
printf("Enter number within the range\n");
}
else if(g>n)
{
printf("Too high\n");
}
else if(g<n)
{
printf("Too low\n");
}
else
{
printf("Correct! You guessed the number.");
}
}
}
return 0;
}