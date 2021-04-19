
#include <stdio.h>
int main (){

 int h,m,s;
 float dist,avgSpeed;
 printf("enter h,m,s\n");
scanf("%*c%*c%*c%d%*c%d%*c%d",&h,&m,&s);
 printf("DU:%2.2d:%2.2d:%2.2d\n",h,m,s);

 printf("enter dist\n");
 scanf(" %*c%*c%*c%f",&dist);
 printf("DT:%2.2f",dist);
 avgSpeed=dist/(float)(h+(m/60.0)+(s/3600.0));
 printf("¥­§¡³t«×=%2.2fkm/hr",avgSpeed);

}
