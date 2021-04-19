/* 祘Α: 块タ俱计N计琌借计 */
#include <math.h>
#include <stdio.h>
main() {
    long N;
    int i;
    int key =0;
    
    printf("块タ俱计N:");
    scanf("%ld", &N);
    if (N == 1) {       /*2计獶借计*/
        printf("%ld獶借计\n", N);
    } else {
        if (N <= 3) {       /* 2 ㎝ 3 借计*/
            printf("%ld琌借计\n", N);
        } else {
            for (i=3; i <= N/2; i++) {
                if (N % i == 0) {
                    printf("%ld獶借计\n", N);
                    return N;
                }
            }
            printf("%ld琌借计\n", N);
        }
    }
}
