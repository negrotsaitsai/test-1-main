#include <stdio.h>
int main(){
int score;
printf("Input your score:");
scanf("%d",&score);
if(score<=100&&score>=60){
    printf("Pass");
} else if(score>=0&&score<60){
printf("You are fail!");
}else if(score>100||score<0){
	printf("Error!");
}
return 0;
}
