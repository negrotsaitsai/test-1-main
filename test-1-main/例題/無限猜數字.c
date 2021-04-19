
#include <stdio.h>
int main(){
int answer=5;
int a;
printf("please enter the a");
do{
scanf("%d",&a);
if(a>answer){
printf(
"the a is larger than answer\n");
}else{
if(a<answer){
    printf(
"the a is smaller than answer\n");
}else{

    printf(
"correct\n");

}
}
}while(a!=answer);
return 0;
}
