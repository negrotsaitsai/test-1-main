#include<stdio.h>
#include<float.h>

int main()
{
	float x;
	printf("Please input a floating number:");
	scanf("%f", &x);
	printf("%f can be represented by %e.", x, (double)x);
}
