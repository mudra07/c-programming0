/*Name: Mudra Jadhav
UIN: 251C016
Class: civil(fy)
Div: B*/

#include <stdio.h>

int main() {
    float physics_marks, chemistry_marks, maths_marks;
    float total_marks, average_marks;

    printf("Enter marks for Physics (out of 100): ");
    scanf("%f", &physics_marks);

    printf("Enter marks for Chemistry (out of 100): ");
    scanf("%f", &chemistry_marks);

    printf("Enter marks for Mathematics (out of 100): ");
    scanf("%f", &maths_marks);

    total_marks = physics_marks + chemistry_marks + maths_marks;
    average_marks = total_marks / 3.0;

    printf("\n--- Student Performance --- \n");
    printf("Total Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);

    if (physics_marks >= 40 && chemistry_marks >= 40 && maths_marks >= 40 && average_marks >= 50) {
       printf("Eligibility: Eligible for further studies/admission.\n");
    } else {
        printf("Eligibility: Not eligible based on current criteria.\n");
    }

    return 0;
}
