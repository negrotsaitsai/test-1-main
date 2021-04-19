#include<stdio.h>

int main(void){

int n,x,y,z;

printf("input n =>");

    scanf("%d",&n);

    for(x=(n/2),y=1;y<=n;x--,y+=2){

for(z=1;z<=x;z++)

printf(" ");

for(z=1;z<=y;z++)

printf("*");

printf("\n");

}

for(x=1,y=(n-2);y>=1;x++,y-=2){

for(z=1;z<=x;z++)

printf(" ");

for(z=1;z<=y;z++)

printf("*");

printf("\n");

}

return 0;

}


