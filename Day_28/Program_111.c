#include <stdio.h>
int main()
{
char name[50];
int s,b,p,t,r;
printf("Enter passenger name: ");
scanf(" %[^\n]",name);
printf("Enter available seats: ");
scanf("%d",&s);
printf("Enter number of tickets: ");
scanf("%d",&b);
printf("Enter ticket price: ");
scanf("%d",&p);

if(b>0&&b<=s)
{
t=b*p;
r=s-b;
printf("\nTicket booked successfully\n");
printf("Passenger Name = %s\n",name);
printf("Number of Tickets = %d\n",b);
printf("Total Amount = %d\n",t);
printf("Remaining Seats = %d",r);
}
else
{
printf("Tickets not available");
}
return 0;
}