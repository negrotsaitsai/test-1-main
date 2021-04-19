#include <stdio.h>
int main(){
	int d1,d2,d3,d4,d5,d6,d7,d8,d9;
	int Oddnumber;
	int Evennumber;
	int total;
	int Verificationcode;
    scanf("%d%d%d%d%d%d%d%d%d",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9);
	Oddnumber=d1+d3+d5+d7;
	Evennumber=d2+d4+d6+d8;
	total=(Oddnumber*5)+Evennumber;
	Verificationcode=(total-7)%10;
	printf("Verification code=%d",Verificationcode);
}
