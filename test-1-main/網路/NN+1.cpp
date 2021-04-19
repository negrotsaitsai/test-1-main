/* 程式功能:  用遞迴求算1*2+2*3+3*4+…+(n-1)*n之和 */
#include <stdio.h>
int sum(int n);
int main() {
    int n;
    printf("Input the number n: ");
    scanf("%d",&n);
    printf("1*2+2*3+3*4+...+(n-1)*n=%d", sum(n));
}

int sum(int n) {
    if (n == 1) {
        return 0;
    } else {
        return sum(n-1)+n*(n-1);
    }
}

