51.有大括號與無大括號的區別：

迴圈體只能有一條語句， 如果需要執行的語句超過一條，就要加大括號將它們變為一條複合語句
//for迴圈如此，while迴圈也是如此． 
for(int i=1; i<5; i  ) 
printf(" A "); 
printf("B "); 
for(int i=1; i<5; i  ) 
printf(" A "); printf(" B "); 
//A輸入5次，B輸出1次 
while(1) 
printf("C"); 
printf("D"); 
//不停的輸出C ，但不會輸出D
2.列印星星：

package 基礎複習.com.heima;
public class 列印星星 {
@SuppressWarnings("unused")//避免警告提示
public static void main(String[] args) {
/*
* 題目1：
* 列印一個五行五列的星星
*     *****
*     *****
*     *****
*     *****
*     *****
* 1.使用第一個for迴圈列印一排數量為5的星星
*    *******
*    2.使用第二個for迴圈巢狀在第一個for迴圈的外面，使第一個for
*    迴圈迴圈五次（列印五次），並使用空字元換行。
*       3.println與print的區別：
*      println:將列印的結果直接輸出在下一行
*      print:將列印的結果直接輸出在本行
*/
for(int b = 0; b < 5 ; b   ) {
for(int a = 0; a < 5 ; a   ) {
System.out.print("*");
}
System.out.println("");
}
System.out.println("-----直角三角形的星星-----");
/*
* 題目二:
* 列印一個直角三角形的星星
*     *
*     **
*     ***
*     ****
*     *****
*     1.規律:
*             變數：                                     變數：
*        B迴圈第1次(j = 1)   A列印出 1(a = j) 
*        B迴圈第2次(j = 2)   A列印出 2(a = j)
*        B迴圈第3次(j = 3)   A列印出 3(a = j)
*        B迴圈第4次(j = 4)   A列印出 4(a = j) 
*        B迴圈第5次(j = 5)   A列印出 5(a = j)   
*/
for(int j = 0; j < 5 ; j   ) {
for(int a = 0; a <= j ; a   ) {
System.out.print("*");
}
System.out.println("");
}
System.out.println("------等腰三角形的星星-----");
/*
* 題目三：
* 列印一個等腰三角形的星星
*     *
*    ***
*   *****
*  *******
* ********* 
*  圖形解讀：
*   5行，空格，星星
*    行與空格的關係： 
*              【 空格列印的次數，就是總行數-每次執行的數】
*      執行第1行時，空格執行4
*      執行第2行時，空格執行3
*      執行第3行時，空格執行2
*      執行第4行時，空格執行1
*      執行第5行時，空格執行0
*    空格與星星的關係：
*  總行數4行
*    *      第一行:空格數 4 - 1 = 3個     星號數 1 * 2 - 1 = 1個
*   ***     第二行:空格數 4 - 2 = 2個     星號數 2 * 2 - 1 = 3個
*  *****    第三行:空格數 4 - 3 = 1個     星號數 3 * 2 - 1 = 5個
* *******   第四行:空格數 4 - 4 = 0個     星號數 4 * 2 - 1 = 7個
* 解讀下列程式碼：
*  A: 當i = 1  時 ，迴圈第一次時   B: j = 4 迴圈四次，列印4個空格  C:k = 1 迴圈一次，列印1個星星
*  A: 當i = 2  時 ，迴圈第二次時   B: j = 3 迴圈三次，列印3個空格  C:k = 3 迴圈三次，列印3個星星
*  A: 當i = 3  時 ，迴圈第二次時   B: j = 2 迴圈三次，列印2個空格  C:k = 5 迴圈五次，列印5個星星
*  A: 當i = 4  時 ，迴圈第二次時   B: j = 2 迴圈三次，列印1個空格  C:k = 7 迴圈七次，列印7個星星
*  A: 當i = 5  時 ，迴圈第二次時   B: j = 0 迴圈三次，列印0個空格  C:k = 9 迴圈九次，列印9個星星
*/
int max = 5;  // 總行數
A:for (int i = 1; i <= 5; i  ) {  // 控制行
B:for (int j = 1; j <= max - i; j  ) {  // 控制空格
System.out.print(" ");
}
C:for (int k = 1; k <= i * 2 - 1; k  ) {  // 控制"*"號
System.out.print("*");
}
System.out.print("\n");  // 換行
}
/*
* 題目四：
* 列印一個菱形星星
*     *
*    ***
*   *****
*  *******
* ********* 
*  *******
*   *****
*    ***
*     *
*     上半部分
*  圖形解讀：
*   5行，空格，星星
*    行與空格的關係： 
*              【 空格列印的次數，就是總行數-每次執行的數】
*      執行第1行時，空格執行4
*      執行第2行時，空格執行3
*      執行第3行時，空格執行2
*      執行第4行時，空格執行1
*      執行第5行時，空格執行0
*    空格與星星的關係：
*  總行數4行
*    *      第一行:空格數 4 - 1 = 3個     星號數 1 * 2 - 1 = 1個
*   ***     第二行:空格數 4 - 2 = 2個     星號數 2 * 2 - 1 = 3個
*  *****    第三行:空格數 4 - 3 = 1個     星號數 3 * 2 - 1 = 5個
* *******   第四行:空格數 4 - 4 = 0個     星號數 4 * 2 - 1 = 7個
* 解讀下列程式碼：
*  A: 當i = 1  時 ，迴圈第一次時   B: j = 4 迴圈五次，列印4個空格  C:k = 1 迴圈一次，列印1個星星
*  A: 當i = 2  時 ，迴圈第二次時   B: j = 3 迴圈四次，列印3個空格  C:k = 3 迴圈三次，列印3個星星
*  A: 當i = 3  時 ，迴圈第三次時   B: j = 2 迴圈三次，列印2個空格  C:k = 5 迴圈五次，列印5個星星
*  A: 當i = 4  時 ，迴圈第四次時   B: j = 1 迴圈二次，列印1個空格  C:k = 7 迴圈七次，列印7個星星
*  A: 當i = 5  時 ，迴圈第五次時   B: j = 0 迴圈一次，列印0個空格  C:k = 9 迴圈九次，列印9個星星
*/
//上半部分
System.out.println("-----菱形星星-----");
A:for (int i = 1; i <= 5; i  ) {  // 控制行
B:for (int j = 1; j <= max - i; j  ) {  // 控制空格
System.out.print(" ");
}
C:for (int k = 1; k <= i * 2 - 1; k  ) {  // 控制"*"號
System.out.print("*");
}
System.out.print("\n");  // 換行
}
//下半部分
/*
* 
*第一次A迴圈 i = 0
* B:j = 4時  ; j >=3 ;j-- 列印一個空格
* C:k = 7時  ; K >= 1 ; k   迴圈7次  列印七個星星
*第二次A迴圈 i = 1
* B:j = 4時  ; j >=2 ;j-- 列印二個空格
* C:k = 7時  ; K >= 3 ; k   迴圈5次  列印五個星星
*第三次A迴圈 i = 2
* B:j = 4時  ; j >=1 ;j-- 列印三個空格
* C:k = 7時  ; K >= 5 ; k   迴圈3次  列印三個星星
*第四次A迴圈 i = 3
* B:j = 4時  ; j >=0 ;j-- 列印四個空格
* C:k = 7時  ; K >= 7 ; k   迴圈1次  列印一個星星
*/
int max2 = 4;//最大行數
A:for (int i = 0; i < 4; i  ) {  // 控制行  
B:for (int j = 4; j >= max2-i ;j--)   // 控制空格
System.out.print(" ");
C:for (int k = 7; k > i * 2     ; k--) {  // 控制"*"號
System.out.print("*");
}
System.out.print("\n");  // 換行
}
}
}
