#include <iostream>
using namespace std;

int main(){

int n,i,j,k;

cin>>n;//輸入一個整數

for(i=n;i>0;i--)
{
  if(i<n)//如果i小於n表示從第二行開始，要先輸出一個空白
   {
   for(k=0;k<(n-i);k++)//用k來計數，k依序遞增，但遞增的條件是n-i，因為i在遞減，和n的差距愈來愈大
      cout<<" ";//印出空白
   }
  for(j=(2*i-1);j>0;j--)//然後印出*號，每排剛好是2倍的n減去1
      cout<<'*';
   
  cout<<endl;//然後印出換行，再從第i-1的次數開始整個迴圈
   
}


return 0;
} 
