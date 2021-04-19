#include<stdio.h>
int main() {
    int a,i,j,k,m,n;
  printf("Enter height of a valley: ");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
        printf("\n");
        for(j=1;j<=i;j++){
            printf("*");
                }
                for(k=a;k>i;k--){
                printf(" ");
        }
        for(m=a;m>i;m--){
            printf(" ");
                }
                for(n=1;n<=i;n++){
                printf("*");
        }
    }
    printf("\n");
 return 0;
}

