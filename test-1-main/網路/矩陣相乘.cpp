/* �{���\��: �x�}�ۭ� */
/* ��J:3��2�x�}A�A 2��2�x�}B */
/* ��X:3��2�x�}  , i = 1��3, j = 1 �� 2 */

#include <stdio.h>
#define m 3
#define n 2
#define p 2

int main() {
    int A[m+1][n+1], B[n+1][p+1], C[m+1][p+1];
    int i, j, k;

    printf("�Ш̧ǿ�J�G���}�CA(3x2)���������e: ");
    for (i =1 ; i<= 3; i++) {
        for(j=1;j<=2;j++) {
            scanf("%d",&A[i][j]);
        }
    }/*end for*/

    printf("�Ш̧ǿ�J�G���}�CB(2x2)���������e: ");
    for (i=1;i<=2;i++) {
        for(j=1;j<=2;j++) {
            scanf("%d",&B[i][j]);
        }
    }/*end for*/

    for (i=1; i<=m; i++) {
        for (j=1; j<=p; j++) {
            C[i][j]=0; /*��l�ư}�CC */
            for(k = 1; k <= n; k++) {
                C[i][j] = C[i][j] +A[i][k] * B[k][j]; /*�}�CA���W�}�CB,�s�J�}�CC */
            }
            printf("%d ", C[i][j]); /*��X�}�CC */
        }
        printf("\n");
    }
}

