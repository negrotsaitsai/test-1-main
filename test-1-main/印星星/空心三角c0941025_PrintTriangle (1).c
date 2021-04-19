#include <stdlib.h>
int main()
{
int n,i,j;
for(i=1;i<=7;i++)
{
for(j=0;j<7-i;j++) 
printf(" ");
if(i>1) 
{
printf("*"); 
for(j=1;j<2*(i-1);j++) 
if(i<7)printf(" ");
else printf("*"); 
}
printf("*\n"); 
}
system("pause"); 
return 0; 
}
