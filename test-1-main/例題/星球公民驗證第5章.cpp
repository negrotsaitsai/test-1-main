#include <stdio.h>
int main(){
	int d1,d2,d3,d4,d5,d6,d7,d8,d9;
	int Oddnumber;
	int Evennumber;
	int total;
	int Verificationcode;
	printf("請輸入d1,d2,d3,d4,d5,d6,d7,d8,d9(範圍1~9的數字)\n");
    scanf("%d%d%d%d%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9);
	printf("d1=%d,d2=%d,d3=%d,d4=%d,d5=%d,d6=%d,d7=%d,d8=%d,d9=%d\n",d1,d2,d3,d4,d5,d6,d7,d8,d9);
	Oddnumber=d1+d3+d5+d7;
	Evennumber=d2+d4+d6+d8;
	total=(Oddnumber*5)+Evennumber;
	Verificationcode=(total-7)%10;
	printf("Verification code=%d",Verificationcode);
} 
