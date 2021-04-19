#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int a,b,c,d,e;
	srand(time(NULL));
	a=1+rand()%10;
	b=1+rand()%10;
	c=1+rand()%10;
	d=1+rand()%10;
	e=1+rand()%10;
	printf("%d %d %d %d %d",a,b,c,d,e);


}
