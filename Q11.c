// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

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
            char* even_or_odd;
            char* sign;
            
            if (number % 2 == 0) {
                even_or_odd = "Even";
            } else {
                even_or_odd = "Odd";
            }
            
            if (number > 0) {
                sign = "Positive";
            } else if (number < 0) {
                sign = "Negative";
            } else {
                sign = "Zero";
            }
            
            printf("The number %d is %s and %s.\n", number, even_or_odd, sign);
            printf("-------------------------\n");
        } else {
            printf("Invalid input. Please enter a valid integer or 'exit'.\n");
            printf("-------------------------\n");
        }
    }
    
    return 0;
}
