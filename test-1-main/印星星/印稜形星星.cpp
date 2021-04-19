#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, j = 0;
	for (i = 1; i <=4; i++)
	{
		for (j =4-i; j>0; j--)
		{
			printf(" ");
		}
		for (j = 1; j < 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j < i+1; j++)
		{
			printf(" ");
		}
		for (j = 8-(2*i+1); j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
