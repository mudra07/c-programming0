/*Name : Mudra Jadhav
UIN : 251C016
Class : civil(fy)
Div : B*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr; 
    printf("Original array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ptr = arr + (n - 1); 

    printf("Array elements in reverse order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr); 
        ptr--;
    }
    printf("\n");

    return 0;
}
