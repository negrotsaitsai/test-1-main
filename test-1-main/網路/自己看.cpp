/* 程式功能: 輸入兩個數M及N，計算M取N的值，亦即M!/(N!(M-N)!) */

#include <stdio.h>

long factorial(int n);

int main(void) {
    long M, N, C;

    printf("輸入兩個正數值M,N，且M須大於等於N");
    printf("\n");
    printf("M=");
    scanf("%ld",&M) ;     /*由鍵盤輸入數值*/
    printf("N=");
    scanf("%ld",&N);

    C = factorial (M)/( factorial (N)* factorial (M-N)); /*呼叫遞迴程式*/

    /*印出總和*/
    printf("M取N=%ld",C);
    return N;
}

long factorial(int n) { /*遞迴程式部分*/
    if (n==1) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}
