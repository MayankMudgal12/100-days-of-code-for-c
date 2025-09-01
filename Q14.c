// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char user_input[100];
    char ch;

    while (1) {
        printf("Please enter a single alphabet character (or type 'exit' to quit): ");
        fgets(user_input, sizeof(user_input), stdin);
        
        if (strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (strlen(user_input) == 2 && isalpha(user_input[0])) {
            ch = tolower(user_input[0]);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                printf("The character '%c' is a Vowel.\n", user_input[0]);
            } else {
                printf("The character '%c' is a Consonant.\n", user_input[0]);
            }
            printf("-------------------------\n");
        } else {
            printf("Invalid input. Please enter a single alphabet character or 'exit'.\n");
            printf("-------------------------\n");
        }
    }

    return 0;
}
