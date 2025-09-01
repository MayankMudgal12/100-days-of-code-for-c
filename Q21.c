// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
#include <string.h>

int main() {
    int month_number, year;
    char input_buffer[100];

    while (1) {
        printf("Enter a month number (1-12) and a year, separated by a space (or 'q' to quit):\n");
        
        if (fgets(input_buffer, sizeof(input_buffer), stdin) == NULL || strcmp(input_buffer, "q\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (sscanf(input_buffer, "%d %d", &month_number, &year) != 2) {
            printf("Invalid input. Please enter a number for the month and a year.\n");
            continue;
        }

        if (month_number < 1 || month_number > 12) {
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            continue;
        }

        switch (month_number) {
            case 1:
                printf("January has 31 days.\n");
                break;
            case 2:
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                    printf("February in %d has 29 days (Leap Year).\n", year);
                } else {
                    printf("February in %d has 28 days.\n", year);
                }
                break;
            case 3:
                printf("March has 31 days.\n");
                break;
            case 4:
                printf("April has 30 days.\n");
                break;
            case 5:
                printf("May has 31 days.\n");
                break;
            case 6:
                printf("June has 30 days.\n");
                break;
            case 7:
                printf("July has 31 days.\n");
                break;
            case 8:
                printf("August has 31 days.\n");
                break;
            case 9:
                printf("September has 30 days.\n");
                break;
            case 10:
                printf("October has 31 days.\n");
                break;
            case 11:
                printf("November has 30 days.\n");
                break;
            case 12:
                printf("December has 31 days.\n");
                break;
            default:
                printf("An unexpected error occurred.\n");
                break;
        }
    }
    return 0;
}
