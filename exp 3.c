/*name: Mudra Jadhav
UIN: 251C016
Class: civil(fy)
Div:B*/

#include <stdio.h>

int main()
{
     int choice;
     float num1,num2,result;
     start:
     printf("\nMRNU DRIVEN CALCULATOR\n");
     printf("1. addition\n");
     printf("2. subraction\n");
     printf("3. multiplication\n");
     printf("4. divion\n");
     printf("5. exit\n");
     printf("Enter your choice:");
     scanf("%d",&choice);
     

    if(choice == 5) {
        printf("Exiting the program. Goodbye!\n");
        return 0;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case 4:
        if(num2 != 0)
        result = num1 / num2;
     else {
    printf("Error! Division by zero not allowed.\n");
    goto start;  // Go back to menu
    }
    printf("Result = %.2f\n", result);
    break;
    default:
    printf("Invalid choice! Please try again.\n");
    goto start;
    }

    printf("\nDo you want to perform another operation? (1-Yes / 0-No): ");
    scanf("%d", &choice);
    if(choice == 1)
    goto start;
    else
    printf("Thank you for using the calculator!\n");

    return 0;
}

