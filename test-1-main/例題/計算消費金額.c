#include <stdio.h>
int main(){
int id;
int total;
printf("d=");
do{
scanf("%d",&id);
switch(id){
case 1:
    total+=90;
break;
case 2:
    total+=50;
break;
case 3:
    total+=75;
break;
}
}while(id!=0);

printf("TOTAL=%d\n",total);
return 0;
}
