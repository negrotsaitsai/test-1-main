/* �{���\��G�Ϯg�x�} */
#include <stdio.h>
int main(void) {
    int a[9][9], b[9][9];
    int i, j, m, n;
    
    printf("�п�G���x�}a���j�p m * n �� m �P n �� : ");
    scanf("%d  %d",&m,&n);
    printf("�п�J�x�}a��������(���C����):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d",&a[i][j]); /*��J�x�}a��������*/
            b[i][n-j-1] = a[i][j]; /* b���x�}a���Ϯg�x�}*/
        }
    }
    printf("\n");
    printf("�x�}a���Ϯg�x�}b�p�U:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("   %d",b[i][j]);
        }
        printf("\n");
    }
}

