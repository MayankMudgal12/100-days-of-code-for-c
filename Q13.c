// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>
#include <string.h>

int main() {
    char user_input[100];
    int year;

    while (1) {
        printf("Please enter a year (or type 'exit' to quit): ");
        fgets(user_input, sizeof(user_input), stdin);
        
        if (strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (sscanf(user_input, "%d", &year) == 1) {
            if (year >= 0) {
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                    printf("The year %d is a Leap Year.\n", year);
                } else {
                    printf("The year %d is not a Leap Year.\n", year);
                }
            } else {
                printf("Please enter a valid, non-negative year.\n");
            }
            printf("-------------------------\n");
        } else {
            printf("Invalid input. Please enter a valid integer or 'exit'.\n");
            printf("-------------------------\n");
        }
    }

    return 0;
}
