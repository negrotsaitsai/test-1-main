#include<stdio.h>
 
int main()
{
    int ab;
    int a;
    int b;
    while(scanf("%d",&ab)!=EOF)
    {
        a=ab/10;
        b=ab%10;
        printf("%d\n",b*10+a);
    }
    return 0;
}
