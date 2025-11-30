/*Name : Mudra Jadhav
UIN : 251C016
Class : civil(fy)
Div : B*/
#include <stdio.h>
#include <string.h>

struct student_record {
    char name[50];
    int roll_number;
    int total_marks;
};

int main() {
    struct student_record students[5];
    int i;

    printf("Enter data for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter total marks: ");
        scanf("%d", &students[i].total_marks);
    }

    int max_marks = -1;
    int topper_index = -1;

    for (i = 0; i < 5; i++) {
        if (students[i].total_marks > max_marks) {
            max_marks = students[i].total_marks;
            topper_index = i;
        }
    }

    printf("\n--- Topper Information ---\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %d\n", students[topper_index].total_marks);

    return 0;
}
