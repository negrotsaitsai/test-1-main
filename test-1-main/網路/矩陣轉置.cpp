/* �{���\��: �x�}��m (transportation) */
/*��J:m��n�x�}A */
/*��X:�x�}B�AB=AT */

#include <stdio.h>

int main() {
    int i, j, m=3, n=3;
    int B[4][4], A[4][4];
    printf("�Ш̧ǿ�J�G���}�CA(3x3)���������e: ");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            B[i][j] = A[j][i]; /*�@��m���ʧ@*/
            printf("%d ", B[i][j]); /*��X��m�᪺���G*/
        }
        printf("\n");
    }
}
