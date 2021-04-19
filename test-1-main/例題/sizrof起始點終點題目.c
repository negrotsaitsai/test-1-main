#include<stdio.h>

int main()
{
	int x = 500;
	long int address;
	printf("An int variable is declare with value equals to 500 and it is\n");
	address=((long int)&x)+sizeof(int)-1;
	printf("allocated at memory address %p - %#016lX.\n",&x,address);
}
