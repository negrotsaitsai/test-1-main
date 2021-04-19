#include <stdio.h>
 
int main()
{
    int base, exponent;
    long long result = 1;
    printf("Please input number:");
    scanf("%d", &base);
    printf("Please input the power of the number:");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("%d to the power of %d is %lld",base,exponent,result);
 
    return 0;
}
