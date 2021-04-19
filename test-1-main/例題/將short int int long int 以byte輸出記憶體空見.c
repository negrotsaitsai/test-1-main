#include<stdio.h>

int main()
{
	printf("short int: memory space = %lu bytes.\n", sizeof(short));
	printf("int: memory space = %lu bytes.\n", sizeof(int));
	printf("long int: memory space = %lu bytes.\n", sizeof(long int)*2);
}
