#include <stdio.h>
int main () {
  int a=1,b=1,n,x=1,y=0;
  printf("Enter number (bidder than 0): ");
  scanf("%d",&n);
  if(n>0)
  {
    printf("\nRight triangle: \n");
    while(x<=n)
    {
       y=0;
       while(y<x)
       {
         y++;
         printf("*");
       }
     printf("\n");
     x++;
     }
     printf("\n");
  }
  else
  {
    printf("\nError number\n");
  }
  return 0;
}

