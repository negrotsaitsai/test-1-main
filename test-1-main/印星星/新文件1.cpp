#include <stdio.h>

#include <stdlib.h>

int main()

{

int x,i,j,k;

printf("input a uneven =");

scanf("%d",&x);

if(x%2==1) for (i=1;i<x;i+=2) 

{

for(k=1;k<=i/2;k++)

printf(" ");

for (j=1;j<=x-i+1;j++)

printf("*");

printf("\n");

}

for (i=1;i<=x;i+=2)

{

for(k=1;k<=(x-i)/2;k++)

printf(" ");

for (j=1;j<=i;j++)

printf("*");

printf("\n");

}

system("pause");

return 0;

} 


