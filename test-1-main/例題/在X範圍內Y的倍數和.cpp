#include "stdio.h"
int main()
{
int i,sum1=0,sum2=0;
for(i=1;i<=100;i++)
{
if(i%3==0 || i%5==0)
//�p�G�O�����P�ɬO3�M5�����ơA�h�קאּif(i%3==0 && i%5==0)
sum1+=i;
if(i%3==0 && i%5==0)
sum2+=i;
}
printf("1-100������3�M5�����Ƥ��M��:%d\n",sum1);
printf("1-100�������P�ɬO3�M5�����ƪ��Ƥ��M��:%d\n",sum2);
}
