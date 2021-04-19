#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int dice;
	int minDice =1;
	int maxDice=6;
srand(time(NULL));
printf("%d",minDice+(rand()%(maxDice-minDice + 1)) );
}

