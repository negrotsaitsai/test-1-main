#include <stdio.h>
int main(){
int number;
printf("Please input a number:");
scanf("%d",&number);
if(number<10&&number>1){
    printf("Your input is less than 10.");
} else if(number>10){
    printf("Your input is no less than 10.");
}else if(number<1){
	printf("Error!");
}

}
