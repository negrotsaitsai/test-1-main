#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int minDice =1;
	int maxDice=6;
	int samp1 ;
	int samp2;
srand(time(NULL));
samp1 = minDice+(rand()%(maxDice-minDice + 1 ) );
samp2 = minDice+(rand()%(maxDice-minDice + 1) );

printf("1st= %d , 2nd =%d, tot=%d",samp1,samp2,samp1+samp2);
}

