/*Name : Mudra Jadhav
UIN : 251C016
Class : civil(fy)
Div : B*/
#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;   

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;
    printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, sum);

    return 0;
}
