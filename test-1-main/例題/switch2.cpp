#include <stdio.h>
int main(){
char id;
printf("Grade (A-E):",id);
scanf("%c",&id);
switch(id){
case 'A': 
printf("Excellent");
break;
case 'B':
printf("Good");
break;
case 'C':
printf("Average");
break;
case 'D':
printf("Poor");
break;
case 'E':
printf("Failure");
break;
default:
printf("Error");
case 'a': 
printf("Excellent");
break;
case 'b':
printf("Good");
break;
case 'c':
printf("Average");
break;
case 'd':
printf("Poor");
break;
case 'e':
printf("Failure");
break;
}

}
