// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>
#include <string.h>

int main() {
    float num1, num2, num3;
    char user_input[100];

    while (1) {
        printf("Enter the first number (or type 'exit' to quit): ");
        if (fgets(user_input, sizeof(user_input), stdin) == NULL || strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        if (sscanf(user_input, "%f", &num1) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }

        printf("Enter the second number: ");
        if (fgets(user_input, sizeof(user_input), stdin) == NULL || strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        if (sscanf(user_input, "%f", &num2) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }

        printf("Enter the third number: ");
        if (fgets(user_input, sizeof(user_input), stdin) == NULL || strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        if (sscanf(user_input, "%f", &num3) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }

        if (num1 >= num2) {
            if (num1 >= num3) {
                printf("The largest number is: %.2f\n", num1);
            } else {
                printf("The largest number is: %.2f\n", num3);
            }
        } else {
            if (num2 >= num3) {
                printf("The largest number is: %.2f\n", num2);
            } else {
                printf("The largest number is: %.2f\n", num3);
            }
        }
    }

    return 0;
}
