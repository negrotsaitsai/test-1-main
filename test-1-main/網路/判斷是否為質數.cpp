/* �{���\��: ��J�@�ӥ����N�A�çP�O���ƬO�_����� */
#include <math.h>
#include <stdio.h>
main() {
    long N;
    int i;
    int key =0;
    
    printf("��J�@�����N:");
    scanf("%ld", &N);
    if (N == 1) {       /*�p��2���ƫD���*/
        printf("%ld�D���\n", N);
    } else {
        if (N <= 3) {       /* 2 �M 3 �����*/
            printf("%ld�O���\n", N);
        } else {
            for (i=3; i <= N/2; i++) {
                if (N % i == 0) {
                    printf("%ld�D���\n", N);
                    return N;
                }
            }
            printf("%ld�O���\n", N);
        }
    }
}
