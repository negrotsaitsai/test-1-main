#include <stdio.h> 
#include <stdlib.h> 

int gcd(int m, int n) {
    while(n != 0) { 
        int r = m % n; 
        m = n; 
        n = r; 
    } 
    return m;
}

int lcm(int m, int n) {
    return m * n / gcd(m, n);
}

int main(void) { 
    int m, n; 
    printf("Please input two numbers¡G"); 
    scanf("%d %d", &m, &n); 
    printf("The LMC of %d and %d is %d\n",m,n,lcm(m, n)); 
    
    return 0; 
} 
