#include <stdio.h>
#include <stdlib.h>
int hanshu(double x,double y,double n);
int hanshu(double x,double y,double n)
{
    if(abs(x)+abs(y)==n-1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Please input length of the diamond:");
    scanf("%d",&n);
    double x,y;
    for (x=n-1; x>=-n+1; x--)
    {
        for (y = -n+1; y<=n-1; y++)
        {
            if(y>=0&&hanshu(x,y,n)==1)
            {
                printf("%c\n",'*');break;
            }
            else if(hanshu(x,y,n)==1)
                printf("%c",'*');
            else
                printf("%c",' ');
        }
    }
    return 0;
}
