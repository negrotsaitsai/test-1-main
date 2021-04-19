#include <stdio.h>
int main(){
int a,b;
char op;
float answer;
scanf("%d%c%d",&a,&op,&b);
switch(op){
case '*':
    answer=a*b;
break;
case '-':
    answer=a-b;
break;
case '+':
    answer=a+b;
break;
case '/':
    answer=a/b;
break;
}
printf("A=%f",answer);
return 0;
}
