/* 程式功能: 矩陣轉置 (transportation) */
/*輸入:m×n矩陣A */
/*輸出:矩陣B，B=AT */

#include <stdio.h>

int main() {
    int i, j, m=3, n=3;
    int B[4][4], A[4][4];
    printf("請依序輸入二維陣列A(3x3)的元素內容: ");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            B[i][j] = A[j][i]; /*作轉置的動作*/
            printf("%d ", B[i][j]); /*輸出轉置後的結果*/
        }
        printf("\n");
    }
}
