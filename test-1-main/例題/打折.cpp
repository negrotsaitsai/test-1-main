#include <stdio.h>
int main(){
	int total;
	printf("Please input the total:",total);
	scanf("%d",&total);
	if(total>5000){
		total-=500;
	}
	printf("Total=%d\n",total);
} 
