#include <stdio.h>
int main(){
int integer1,integer2;
printf("enter integer1");
scanf("%d",&integer1);
printf("enter integer2");
scanf("%d",&integer2);
if(integer1>=integer2){
max=integer1;
}
if(integer2>=integer1){
max=integer2;
}
printf("the maxinum:%d.\n",max);
return 0;
}
