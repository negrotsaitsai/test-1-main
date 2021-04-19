#include <stdio.h>
int main()
{
	int width;
	int height;
	int rectangle;
	printf("Please input width value:" );
	scanf("%d",&width);
	while(width<=0)
	{
	printf("不得為0，請重新輸入:" );
	scanf("%d",&width);
	}
	printf("\nPlease input height value:" );
	scanf("%d",&height);
	while(height<=0)
	{
	printf("不得為0，請重新輸入:");
	scanf("%d",&height)	;
	}
	//scanf("%d%d",&width,&height);
	rectangle = width*height;
	printf("\nrectangle =%d ",rectangle );
}

