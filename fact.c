#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n ;
    printf("enter the input number:");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, factorial(n));
    return 0;
}
