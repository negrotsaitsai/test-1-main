#include <stdio.h>
int main(){
int day;
printf("0 for Sunday,1 for Monday,...,6 for Saturday:",day);
scanf("%d",&day);
switch(day){
case 0:
printf("You have to wake up on 8:30");
break;
case 1:
printf("You have to wake up on 10:00");
break;
case 2:
printf("You have to wake up on 8:30");
break;
case 3:
printf("You have to wake up on 8:30");
break;
case 4:
printf("You have to wake up on 7:30");
break;
case 5:
printf("You have to wake up on 8:30");
break;
case 6:
printf("You have to wake up on 10:00");
break;
}
return 0;
}
