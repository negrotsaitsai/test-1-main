#include <stdio.h>
int main(){
int a;
printf("enter a");
scanf("%d",&a);
int b;
printf("enter b");
scanf("%d",&b);
int c;
printf("enter c");
scanf("%d",&c);
int min;
min=a;
if(min>b){min=b;}
if(min>c){min=c;}
printf("the mininum is %d\n",min);
return 0;

}


