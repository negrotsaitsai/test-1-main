#include <stdio.h>
int main(){
int integer;
printf("Please input an integer:",integer);
scanf("%d",&integer);
if((integer%2)==0)
	printf("%d is divisible by 2\n",integer);
	
if((integer%3)==0)
	printf("%d is divisible by 3.\n",integer);
	
if((integer%5)==0)
	printf("%d is divisible by 5.\n",integer);
	
if((integer%7)==0)
	printf("%d is divisible by 7.\n",integer);
else if((integer%2)!=0&&(integer%3)!=0&&(integer%5)!=0&&(integer%7)!=0)
   	printf("%d is not divisible by 2,3,5 and 7.\n",integer);


} 
