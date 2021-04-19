#include <stdio.h>
int main(){
int n;
printf("n=");
scanf("%d",&n);
int count;
for(count=1;count<=n;count++){
    if(n%count==0){
        printf("count=%d\n",count);
    }
}
return 0;
}

