#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int A;
int C;
int D;

printf("Please enter an integer (0~100)\n");
scanf("%d",&A);
    srand(time(NULL));
   
    if(0<A<100){
    	 do{

    	C=(rand()%101)+1;
    	}while(C>A);
    if(0<A<100){
    	 do{
    	D=(rand()%101)+1;
		}while(D<A);
}
}
	
	printf("Your input integer is between %d\n and %d\n",C,D);

	return 0;

}
 
