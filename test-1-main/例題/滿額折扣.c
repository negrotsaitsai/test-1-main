#include <stdio.h>
int main(){
int total;
int number;
scanf("%d",&number);
if(number>=8){
        total=number*300*0.8;
    }
if(number<8){
        total=number*300;
}
printf("Total:%d",&total);
  return 0;
}

