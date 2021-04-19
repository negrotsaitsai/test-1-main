#include <stdio.h>
int main(){
int number;
int n;
printf("n=");
scanf("%d",&n);
 for(number=1,number<n&&n%number!=0,++number){
 if(number==n){
    printf("yes\n");
 } else{
     printf("no\n");
 }
return 0;
}
}
