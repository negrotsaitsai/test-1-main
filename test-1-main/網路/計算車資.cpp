/* �{���\��G�p��p�{���O�v */
#include <stdio.h>
int main(void) {
    int i, diff, cost;
    
    printf("�п�J���{(��쬰����):");
    scanf("%d", &i);
    if (i <= 1500)  /*���{�Ƥp�󵥩�1500����*/
        cost = 70;
    else {
        diff = i - 1500; /*�p�⨽�{�ƶW�L1500���ت����{�O�v*/
        if (diff%500 == 0) /*���{�Ƥ���500���ؤ��H500���ضO�v�p��*/
            cost = 70 + (diff / 500) * 5;
        else
            cost= 70 + ((diff / 500) + 1) * 5;
    }
    printf("�`�@���ꬰ: %d ��", cost);
    printf("\n");
    return 0;
}

