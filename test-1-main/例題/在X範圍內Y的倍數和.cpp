#include "stdio.h"
int main()
{
int i,sum1=0,sum2=0;
for(i=1;i<=100;i++)
{
if(i%3==0 || i%5==0)
//如果是必須同時是3和5的倍數，則修改為if(i%3==0 && i%5==0)
sum1+=i;
if(i%3==0 && i%5==0)
sum2+=i;
}
printf("1-100之間的3和5的倍數之和為:%d\n",sum1);
printf("1-100之間的同時是3和5的倍數的數之和為:%d\n",sum2);
}
