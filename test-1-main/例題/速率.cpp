#include <stdio.h>
int main()
{
    double v0, a, t, v;
    printf("初速度 加速度 時間\n");
    scanf ("%lf%lf%lf", &v0, &a, &t);
    v = v0+a*t;
    printf ("%f\n", v);
    return 0;
}
