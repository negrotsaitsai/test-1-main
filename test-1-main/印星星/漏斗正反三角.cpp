
#include <iostream>
using namespace std;

int main(){
       
        int n,i,j,k;
       
        cin>>n;
       
        for(i=n;i>0;i--)
        {
                if(i<n) // �Yi==n�ɡA�O���Ĥ@�C�A���L�X�Ů�A�ҥH�]�w�q i<n �ɶ}�l�X�{�Ů�
                for(k=0;k<n-i;k++) //�Ů欰�C�C���W�A���W���ƥإѥ��C�ƴ�l�C�ƨM�w n-i�A�Ҧp�ĤG�C���O n��Ѿl�C�� i�A�Y5-4=1 �ӪŮ�C
                {
                        cout<<' ';
                }
                for(j=2*i-1;j>0;j--)// j�q2*i(�@�}�l i==n)-1�_�l�A����C�L�C
                {
                        cout<<'*';
                }
                if(i==0) break;// �@�� i�w���0�ɡA�N���n�A�i��U�������s��A�n�α��U�@�Ө�ƪ����T���C
                cout<<endl;
               
}


   for(i=2;i<=n;i++) //i�q2�}�l�A�h�|�ٲ����u�L�@�� * �����Ĥ@�C �C�ӥB�ni<=n�A�p�G�u�O i<n �h�̫�|�֦L�@�C�C
        {
         for(k=0;k<n-i;k++) // �Ů欰�C�C����A����ƥإѥ��C�ƴ�{�C�� n-i�A�M�W�Ҫ� i ���Ѿl�C�Ƥ��P�A�ҥH�Ů�|�U�ӷU�֡C
         cout<<' ';
         for(j=0;j<2*i-1;j++) // �]�� i�O�{�C�ơA�Ѥ��ܦh�A�ҥH * ���]�] i ���W�[�ӻ��W�A�ӤW�� i �@�}�l�N�O n�A�ҥHi--�N�O��ܳѾl�C�ơC
          cout<<'*';
         cout<<endl;
     }

return 0;
}

  
