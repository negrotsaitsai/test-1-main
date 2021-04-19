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
int med;
if(b<a<c||c<a<b){
    med=a;
}
if(a<c<b||b<c<a){
    med=c;
}
if(a<b<c||c<b<a){
    med=b;
}
printf("the median is %d\n",med);
return 0;
}
