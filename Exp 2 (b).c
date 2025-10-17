/*Name : Mudra Jadhav
UIN : 251C016
Class : civil(fy)
Div : B*/
#include <stdio.h>

int main() {
    int num1, num2, sum = 0, i;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (i = num1; i <= num2; i++) {
        if (i % 2 != 0) { 
            sum += i;    
        }
    }

    printf("The sum of all odd numbers between %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
