/* �{���\��Gc(Bubble Sort)�G��J�ƭӼƭȡA�åH��w�ƧǪk�Ѥp�ܤj�N�ƭȱƧ� */

#include <stdio.h>      /* ��w�ƧǪk Bubble Sort */

int main(void) {
    int data[50];
    int i,j,n,temp;

    printf("��J�ƭȪ��ӼơG ");    /*��Jn */
    scanf("%d" ,&n);
    printf("\n");
    if (n > 49) {
        printf("�п�J�p��49���Ʀr\n");
        return n;
    }
    for (i = 1;i <= n;i++) {      /*��J n �Ӽƭ� */
        printf("�п�J�ƭȡG");
        printf("data[%d]=", i);
        scanf("%d", &data[i]);
    }
    for (i=1; i <= n; i++) {
        for (j = n; j > i; j--) {
            if (data[j-1] > data[j]) {  /*�Y data[j-1] > data[j]�A�h��ӭȥ洫 */
                temp = data[j-1];
                data[j-1] = data[j];
                data[j] = temp;
            }
        }
    }
    printf("\n��ƱƧǫᬰ\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", data[i]);
    }
}

