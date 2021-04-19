#include <stdio.h>
int main(){
int v[3];
v[0];
v[1];
v[2];
printf("enter v[0]");
scanf("%d",&v[0]);
printf("enter v[1]");
scanf("%d",&v[1]);
printf("enter v[2]");
scanf("%d",&v[2]);
int max;
max=v[0];
if(v[0]<v[1]){max=v[1];}
if(v[0]<v[2]){max=v[2];}
printf("the maxinum is %d\n",max);
return 0;
}

