
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
int max;
max=a;
if(a<b&&c<b){max=b;}
else if(b<c&&a<c){max=c;}

printf("the maxinum is %d\n",max);
return 0;
}
