#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#define ODD_NUM 2

int main(void)
{
// int num_ar[100] = {0};

int num, i, j, num_out;


printf("Please type in a number(1-100):");

scanf("%d", &num);

int num_ar[num+1];


for(i=0,j=1; j<=num; j++,i++)// fill 1~num to num_ar[]

{

if (j<=2)

num_ar[i] = j;

else

num_ar[i] = (j%ODD_NUM==0) ? 0 : j;

}


for(i=0; i<num; i++)

{

while((num_out = num_ar[i]) > ODD_NUM)

{

for (j=2; (j * j) <= num_out; j++)

{

if(num_out % j == 0)

num_ar[i] = 0;

}

break;

}

}

printf("the Prime Number between 1-%d is:\n", num);

for(i=0; i<num; i++)

{

if((num_out = num_ar[i]) != 0)

printf("%d ", num_out);

}

return 0;
}

