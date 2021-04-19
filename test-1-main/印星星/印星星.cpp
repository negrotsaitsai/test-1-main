#include<stdio.h>
int main() {
    int a,i,j;
  printf("Enter height of a left right-triangle: ");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
        printf("\n");
        for(j=1;j<=i;j++){
            printf("*");
        }
    }
    printf("\n");
 return 0;
}
