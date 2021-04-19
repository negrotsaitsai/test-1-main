#include <stdio.h>

#include <complex> //要使用pow要include此

int main(void)

{

int a=0,b=0,c=0;

printf("\n請輸入基數： ");

scanf("%d",&a);

printf("\n請輸入次方： ");

scanf("%d",&b);

        //可以用int 或double來作pow

c = pow(a,b);

printf("%d 的 %d 次方是 %d \n",a,b,c );

}
