/* 程式功能：c(Bubble Sort)：輸入數個數值，並以氣泡排序法由小至大將數值排序 */

#include <stdio.h>      /* 氣泡排序法 Bubble Sort */

int main(void) {
    int data[50];
    int i,j,n,temp;

    printf("輸入數值的個數： ");    /*輸入n */
    scanf("%d" ,&n);
    printf("\n");
    if (n > 49) {
        printf("請輸入小於49的數字\n");
        return n;
    }
    for (i = 1;i <= n;i++) {      /*輸入 n 個數值 */
        printf("請輸入數值：");
        printf("data[%d]=", i);
        scanf("%d", &data[i]);
    }
    for (i=1; i <= n; i++) {
        for (j = n; j > i; j--) {
            if (data[j-1] > data[j]) {  /*若 data[j-1] > data[j]，則兩個值交換 */
                temp = data[j-1];
                data[j-1] = data[j];
                data[j] = temp;
            }
        }
    }
    printf("\n資料排序後為\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", data[i]);
    }
}

