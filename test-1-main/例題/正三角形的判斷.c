#include <stdio.h>
int main(){
int side1,side2,side3;
printf("ENTER side1,side2,side3");
scanf("%d,%d,%d",&side1,&side2,&side3);
if(side1==side2==side3){
    printf("Equilateral triangle");
}
return 0;
}
