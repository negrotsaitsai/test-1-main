#include <stdio.h>
#include <stdlib.h>

 

int main(int argc, char *argv[]) {


int i,j,k;
for(i = 1;i <= 9;i+=3,printf("\n"))
for(j = 1;j <= 9;j++,printf("\n"))
for(k=i;k < i+3;k++)
printf("%2dx%2d=%2d ",k,j,k*j);


return 0;
}
