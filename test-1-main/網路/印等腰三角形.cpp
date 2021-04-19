int print_equilateral_triangle(int size) {
    int i, j;
    for (i = 1; i <= size; i++) { // 印出第i列
        for (j = 1; j <= size-i; j++) { // 第i列 有size-i個空格
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) { // 以及2*i-1個*
            printf("*");
        }
        printf("\n");
    }
}
