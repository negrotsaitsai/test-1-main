/* 程式功能：反射矩陣 */
#include <stdio.h>
int main(void) {
    int a[9][9], b[9][9];
    int i, j, m, n;
    
    printf("請輸二維矩陣a的大小 m * n 的 m 與 n 值 : ");
    scanf("%d  %d",&m,&n);
    printf("請輸入矩陣a的元素值(按列順序):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d",&a[i][j]); /*輸入矩陣a的元素值*/
            b[i][n-j-1] = a[i][j]; /* b為矩陣a的反射矩陣*/
        }
    }
    printf("\n");
    printf("矩陣a的反射矩陣b如下:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("   %d",b[i][j]);
        }
        printf("\n");
    }
}

