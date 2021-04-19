#include<stdio.h>

int main()
{
	int num16;
	int num161;
	printf("Please input an integer in decimal:");
	scanf("%d", &num16);
	printf("Decimal(%d) = Hexadecimal(%x).\n", num16, num16);
	printf("Please input an integer in decimal:");
	scanf("%o", &num161);
	printf("Octal(0%o) = Hexadecimal(%x).\n", num161, num161);
}

