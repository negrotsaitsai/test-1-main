51.���j�A���P�L�j�A�����ϧO�G

�j����u�঳�@���y�y�A �p�G�ݭn���檺�y�y�W�L�@���A�N�n�[�j�A���N�����ܬ��@���ƦX�y�y
//for�j��p���Awhile�j��]�O�p���D 
for(int i=1; i<5; i  ) 
printf(" A "); 
printf("B "); 
for(int i=1; i<5; i  ) 
printf(" A "); printf(" B "); 
//A��J5���AB��X1�� 
while(1) 
printf("C"); 
printf("D"); 
//��������XC �A�����|��XD
2.�C�L�P�P�G

package ��¦�Ʋ�.com.heima;
public class �C�L�P�P {
@SuppressWarnings("unused")//�קKĵ�i����
public static void main(String[] args) {
/*
* �D��1�G
* �C�L�@�Ӥ��椭�C���P�P
*     *****
*     *****
*     *****
*     *****
*     *****
* 1.�ϥβĤ@��for�j��C�L�@�Ƽƶq��5���P�P
*    *******
*    2.�ϥβĤG��for�j��_���b�Ĥ@��for�j�骺�~���A�ϲĤ@��for
*    �j��j�餭���]�C�L�����^�A�èϥΪŦr������C
*       3.println�Pprint���ϧO�G
*      println:�N�C�L�����G������X�b�U�@��
*      print:�N�C�L�����G������X�b����
*/
for(int b = 0; b < 5 ; b   ) {
for(int a = 0; a < 5 ; a   ) {
System.out.print("*");
}
System.out.println("");
}
System.out.println("-----�����T���Ϊ��P�P-----");
/*
* �D�ؤG:
* �C�L�@�Ӫ����T���Ϊ��P�P
*     *
*     **
*     ***
*     ****
*     *****
*     1.�W��:
*             �ܼơG                                     �ܼơG
*        B�j���1��(j = 1)   A�C�L�X 1(a = j) 
*        B�j���2��(j = 2)   A�C�L�X 2(a = j)
*        B�j���3��(j = 3)   A�C�L�X 3(a = j)
*        B�j���4��(j = 4)   A�C�L�X 4(a = j) 
*        B�j���5��(j = 5)   A�C�L�X 5(a = j)   
*/
for(int j = 0; j < 5 ; j   ) {
for(int a = 0; a <= j ; a   ) {
System.out.print("*");
}
System.out.println("");
}
System.out.println("------���y�T���Ϊ��P�P-----");
/*
* �D�ؤT�G
* �C�L�@�ӵ��y�T���Ϊ��P�P
*     *
*    ***
*   *****
*  *******
* ********* 
*  �ϧθ�Ū�G
*   5��A�Ů�A�P�P
*    ��P�Ů檺���Y�G 
*              �i �Ů�C�L�����ơA�N�O�`���-�C�����檺�ơj
*      �����1��ɡA�Ů����4
*      �����2��ɡA�Ů����3
*      �����3��ɡA�Ů����2
*      �����4��ɡA�Ů����1
*      �����5��ɡA�Ů����0
*    �Ů�P�P�P�����Y�G
*  �`���4��
*    *      �Ĥ@��:�Ů�� 4 - 1 = 3��     �P���� 1 * 2 - 1 = 1��
*   ***     �ĤG��:�Ů�� 4 - 2 = 2��     �P���� 2 * 2 - 1 = 3��
*  *****    �ĤT��:�Ů�� 4 - 3 = 1��     �P���� 3 * 2 - 1 = 5��
* *******   �ĥ|��:�Ů�� 4 - 4 = 0��     �P���� 4 * 2 - 1 = 7��
* ��Ū�U�C�{���X�G
*  A: ��i = 1  �� �A�j��Ĥ@����   B: j = 4 �j��|���A�C�L4�ӪŮ�  C:k = 1 �j��@���A�C�L1�ӬP�P
*  A: ��i = 2  �� �A�j��ĤG����   B: j = 3 �j��T���A�C�L3�ӪŮ�  C:k = 3 �j��T���A�C�L3�ӬP�P
*  A: ��i = 3  �� �A�j��ĤG����   B: j = 2 �j��T���A�C�L2�ӪŮ�  C:k = 5 �j�餭���A�C�L5�ӬP�P
*  A: ��i = 4  �� �A�j��ĤG����   B: j = 2 �j��T���A�C�L1�ӪŮ�  C:k = 7 �j��C���A�C�L7�ӬP�P
*  A: ��i = 5  �� �A�j��ĤG����   B: j = 0 �j��T���A�C�L0�ӪŮ�  C:k = 9 �j��E���A�C�L9�ӬP�P
*/
int max = 5;  // �`���
A:for (int i = 1; i <= 5; i  ) {  // �����
B:for (int j = 1; j <= max - i; j  ) {  // ����Ů�
System.out.print(" ");
}
C:for (int k = 1; k <= i * 2 - 1; k  ) {  // ����"*"��
System.out.print("*");
}
System.out.print("\n");  // ����
}
/*
* �D�إ|�G
* �C�L�@�ӵ٧άP�P
*     *
*    ***
*   *****
*  *******
* ********* 
*  *******
*   *****
*    ***
*     *
*     �W�b����
*  �ϧθ�Ū�G
*   5��A�Ů�A�P�P
*    ��P�Ů檺���Y�G 
*              �i �Ů�C�L�����ơA�N�O�`���-�C�����檺�ơj
*      �����1��ɡA�Ů����4
*      �����2��ɡA�Ů����3
*      �����3��ɡA�Ů����2
*      �����4��ɡA�Ů����1
*      �����5��ɡA�Ů����0
*    �Ů�P�P�P�����Y�G
*  �`���4��
*    *      �Ĥ@��:�Ů�� 4 - 1 = 3��     �P���� 1 * 2 - 1 = 1��
*   ***     �ĤG��:�Ů�� 4 - 2 = 2��     �P���� 2 * 2 - 1 = 3��
*  *****    �ĤT��:�Ů�� 4 - 3 = 1��     �P���� 3 * 2 - 1 = 5��
* *******   �ĥ|��:�Ů�� 4 - 4 = 0��     �P���� 4 * 2 - 1 = 7��
* ��Ū�U�C�{���X�G
*  A: ��i = 1  �� �A�j��Ĥ@����   B: j = 4 �j�餭���A�C�L4�ӪŮ�  C:k = 1 �j��@���A�C�L1�ӬP�P
*  A: ��i = 2  �� �A�j��ĤG����   B: j = 3 �j��|���A�C�L3�ӪŮ�  C:k = 3 �j��T���A�C�L3�ӬP�P
*  A: ��i = 3  �� �A�j��ĤT����   B: j = 2 �j��T���A�C�L2�ӪŮ�  C:k = 5 �j�餭���A�C�L5�ӬP�P
*  A: ��i = 4  �� �A�j��ĥ|����   B: j = 1 �j��G���A�C�L1�ӪŮ�  C:k = 7 �j��C���A�C�L7�ӬP�P
*  A: ��i = 5  �� �A�j��Ĥ�����   B: j = 0 �j��@���A�C�L0�ӪŮ�  C:k = 9 �j��E���A�C�L9�ӬP�P
*/
//�W�b����
System.out.println("-----�٧άP�P-----");
A:for (int i = 1; i <= 5; i  ) {  // �����
B:for (int j = 1; j <= max - i; j  ) {  // ����Ů�
System.out.print(" ");
}
C:for (int k = 1; k <= i * 2 - 1; k  ) {  // ����"*"��
System.out.print("*");
}
System.out.print("\n");  // ����
}
//�U�b����
/*
* 
*�Ĥ@��A�j�� i = 0
* B:j = 4��  ; j >=3 ;j-- �C�L�@�ӪŮ�
* C:k = 7��  ; K >= 1 ; k   �j��7��  �C�L�C�ӬP�P
*�ĤG��A�j�� i = 1
* B:j = 4��  ; j >=2 ;j-- �C�L�G�ӪŮ�
* C:k = 7��  ; K >= 3 ; k   �j��5��  �C�L���ӬP�P
*�ĤT��A�j�� i = 2
* B:j = 4��  ; j >=1 ;j-- �C�L�T�ӪŮ�
* C:k = 7��  ; K >= 5 ; k   �j��3��  �C�L�T�ӬP�P
*�ĥ|��A�j�� i = 3
* B:j = 4��  ; j >=0 ;j-- �C�L�|�ӪŮ�
* C:k = 7��  ; K >= 7 ; k   �j��1��  �C�L�@�ӬP�P
*/
int max2 = 4;//�̤j���
A:for (int i = 0; i < 4; i  ) {  // �����  
B:for (int j = 4; j >= max2-i ;j--)   // ����Ů�
System.out.print(" ");
C:for (int k = 7; k > i * 2     ; k--) {  // ����"*"��
System.out.print("*");
}
System.out.print("\n");  // ����
}
}
}
