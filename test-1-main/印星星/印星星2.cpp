#include<stdio.h>
int main() {
    int a,i,j,k,m,n;

  for(i=1;i<=3;i++){
        printf("\n");
        for(j=3;j<i;j--){
            printf(" ");
                }
                for(k=1;k<=i;k++){
                printf("*");
        }
        for(m=2;m<=i;m++){
            printf("*");
                }
                for(n=3;n>i;n--){
                printf(" ");
        }
    }
    
    printf("\n");
 return 0;
}

