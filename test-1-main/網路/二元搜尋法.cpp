/* �{���\��: �G���j�M�k (binary search) */
#include <stdio.h>

/* �j�Mx�����bA�}�C������m */
int BinarySearch(int A[], int x, int left, int right);

int main(){
    int x;      /* ���j�M������ */
    int result; /* ���j�M����������m */

    /* �ƧǹL���}�C */
    int DATA[11] = {0, 1, 5, 6, 8, 9, 12, 14, 15, 19, 25};

    /* �}�C���j�p */
    /* sizeof(DATA)��44, sizeof(int)��4, �Gsize��11, �ꬰDATA���j�p */
    int size = sizeof(DATA)/sizeof(int);

    /* ���ܨϥΪ̿�J���j�M������ */
    printf("Input the searched element: ");
    scanf("%d", &x);
    /* �G���j�M�k */
    result = BinarySearch(DATA, x, 0, size);

    /* �L�Xx�����bDATA�}�C������m */
    printf("The searched element x is at %d.", result);
}

/* �j�Mx�����bA�}�C������m */
int BinarySearch(int A[], int x, int left, int right) {
    if (left <= right) {
        int middle = (left+right)/2;    /* �p�⤤����m */
        /* ���A[middle]�Mx���j�p */
        if ( x < A[middle] ) {
            return BinarySearch(A, x, left, middle-1);
        }
        if ( x > A[middle] ) {
            return BinarySearch(A, x, middle+1, right);
        }
        if ( x == A[middle] ) {
            return middle;
        }
    }  /* end of if */
    return -1 ;  /* ����� */
}   /* end of BinarySearch */

