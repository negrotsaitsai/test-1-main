#include <iostream>
using namespace std;

int main(){

int n,i,j,k;

cin>>n;//��J�@�Ӿ��

for(i=n;i>0;i--)
{
  if(i<n)//�p�Gi�p��n��ܱq�ĤG��}�l�A�n����X�@�Ӫť�
   {
   for(k=0;k<(n-i);k++)//��k�ӭp�ơAk�̧ǻ��W�A�����W������On-i�A�]��i�b����A�Mn���t�Z�U�ӷU�j
      cout<<" ";//�L�X�ť�
   }
  for(j=(2*i-1);j>0;j--)//�M��L�X*���A�C�ƭ�n�O2����n��h1
      cout<<'*';
   
  cout<<endl;//�M��L�X����A�A�q��i-1�����ƶ}�l��Ӱj��
   
}


return 0;
} 
