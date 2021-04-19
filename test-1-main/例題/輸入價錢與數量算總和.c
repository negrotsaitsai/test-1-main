#include <stdio.h>
int main()
{
	int price;
	int qty;
	int tot;
	printf("Pleas input product price value:");
	scanf("%d",&price);
	while(price<=0)
	{
		printf("\n不得為0，請重新輸入:");
		scanf("%d",&price);
	}
	printf("\nPlese input qty value:");
	scanf("%d",&qty);
	while(qty<=0)
	{
		printf("\n不得為0，請重新輸入:");
		scanf("%d",&qty);
	}
	tot = price * qty;
	printf("\ntot=%d",tot);
}

