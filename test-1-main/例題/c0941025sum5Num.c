#include <stdio.h>
int a1,b1,c1,d1,e1;
int sum;


//argc = argument count
//argv = argument variables
int main()
{

	//printf("%d+%d+%d+%d+%d=%d\n",a1,b1,c1,d1,e1),sum;
	int sum;
	scanf("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1);
	printf("%d\n%d\n%d\n%d\n%d\n",a1,b1,c1,d1,e1);
	sum=a1+b1+c1+d1+e1;
	printf("%d+%d+%d+%d+%d=%d\n",a1,b1,c1,d1,e1,sum);
}
