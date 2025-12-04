/*Name : Mudra Jadhav
UIN : 251C016
Class : civil(fy)
Div : B*/
#include <stdio.h>

long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}
long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial does not exist for negative numbers.\n");
    } else {
        printf("Factorial (Iterative) = %lld\n", factorial_iterative(num));
        printf("Factorial (Recursive) = %lld\n", factorial_recursive(num));
    }

    return 0;
}
