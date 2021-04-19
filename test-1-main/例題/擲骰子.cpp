#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int dice;
int i;
    srand(time(0));
    for(i=1;i<=5;i++){
    	do{
    		dice=rand();
		}while(dice<1||dice>6);
	printf("Throwing the dice....%d!\n",dice);
	}
	return 0;

}
