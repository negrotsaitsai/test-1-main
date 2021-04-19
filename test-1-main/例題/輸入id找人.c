#include <stdio.h>
int main(){
int id;
printf("id=");
scanf("%d",&id);
switch(id){
case 5:
printf("x");
break;
case 8:
printf("g");
break;
case 2:
printf("t");
break;
default:
printf("not found");
}
return 0;
}
