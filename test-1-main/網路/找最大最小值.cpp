/* �{���\��: ��J10�ӼơA�ñq����X�̤j�P�̤p���� */
#include <stdio.h>
int main(void) {
    int i=1;
    float L, S, X;      /* L=�̤j�ơAS=�̤p�ơAX=��J��*/
    printf("��J�@�ƭ�: ");
    scanf("%f", &X);     /*����L��J�ƭ�*/
    L = S = X;
    do {
        printf("��J�@�ƭ�: ");
        scanf("%f",&X);
        if (X > L) {
            L = X; /*�Y��J���Ȥj��L�A�NL�]����J��X */
        }
        if (X < S) {
            S = X; /*�Y��J���Ȥp��S�A�NS�]����J��X */
        }
        i = i + 1;
    } while (i < 10);
    /*�L�X�`�M*/
    printf("�̤j�Ȭ� %f, �̤p�Ȭ� %f ", L, S) ;
    printf("\n") ;
}

