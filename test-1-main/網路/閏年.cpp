#include <stdio.h>
int main() {
    int year;
    printf("Please input the year:"); // ���ܨϥΪ̿�J���
    scanf("%d", &year); // ��J�~��year
    if (year%400 == 0 || (year%4 == 0 && year%100 != 0)) {
        printf("%d�O�|�~\n", year);
    } else {
        printf("%d���O�|�~\n", year);
    }
}
