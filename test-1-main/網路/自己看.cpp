/* �{���\��: ��J��Ӽ�M��N�A�p��M��N���ȡA��YM!/(N!(M-N)!) */

#include <stdio.h>

long factorial(int n);

int main(void) {
    long M, N, C;

    printf("��J��ӥ��ƭ�M,N�A�BM���j�󵥩�N");
    printf("\n");
    printf("M=");
    scanf("%ld",&M) ;     /*����L��J�ƭ�*/
    printf("N=");
    scanf("%ld",&N);

    C = factorial (M)/( factorial (N)* factorial (M-N)); /*�I�s���j�{��*/

    /*�L�X�`�M*/
    printf("M��N=%ld",C);
    return N;
}

long factorial(int n) { /*���j�{������*/
    if (n==1) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}
