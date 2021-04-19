#include "stdio.h"
int main()
{
int i,sum1=0,sum2=0;
for(i=1;i<=100;i++)
{
if(i%3==0 || i%5==0)
//狦琌ゲ斗琌3㎝5计玥эif(i%3==0 && i%5==0)
sum1+=i;
if(i%3==0 && i%5==0)
sum2+=i;
}
printf("1-100ぇ丁3㎝5计ぇ㎝:%d\n",sum1);
printf("1-100ぇ丁琌3㎝5计计ぇ㎝:%d\n",sum2);
}
