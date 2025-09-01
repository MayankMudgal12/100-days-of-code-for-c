// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>
#include <string.h>

int main() {
    char user_input[100];
    int number;

    while (1) {
        printf("Please enter an integer (or type 'exit' to quit): ");
        fgets(user_input, sizeof(user_input), stdin);
        
        if (strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (sscanf(user_input, "%d", &number) == 1) {
            if (number > 0) {
                printf("The number %d is Positive.\n", number);
            } else {
                if (number < 0) {
                    printf("The number %d is Negative.\n", number);
                } else {
                    printf("The number %d is Zero.\n", number);
                }
            }
            printf("-------------------------\n");
        } else {
            printf("Invalid input. Please enter a valid integer or 'exit'.\n");
            printf("-------------------------\n");
        }
    }

    return 0;
}
