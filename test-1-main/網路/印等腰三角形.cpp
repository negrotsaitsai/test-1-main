int print_equilateral_triangle(int size) {
    int i, j;
    for (i = 1; i <= size; i++) { // �L�X��i�C
        for (j = 1; j <= size-i; j++) { // ��i�C ��size-i�ӪŮ�
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) { // �H��2*i-1��*
            printf("*");
        }
        printf("\n");
    }
}
