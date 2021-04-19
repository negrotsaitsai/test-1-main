#include <stdio.h>
 
main()
{
float f,c;
printf("請輸入華氏");
scanf("%f",&f);
c=5.0*(f-32.0)/9.0;
printf("華氏:%f --> 攝氏:%f",f,c);
getchar();
}
