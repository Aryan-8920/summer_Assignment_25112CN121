#include <stdio.h>
int main ()
{
  int n, sum=0,i;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
          sum=sum +i;
    }
  }
 if(n==sum)
 printf("It is a perfect number");
 else
 printf("It is not perfect number");
 return 0;
}