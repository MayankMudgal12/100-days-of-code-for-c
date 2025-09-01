// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    while (1) {
        printf("Enter a character (or '!' to quit): ");
        ch = getchar();

        if (ch == '\n') {
            continue;
        }

        if (ch == '!') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (ch >= 'A' && ch <= 'Z') {
            printf("The character '%c' is an uppercase alphabet.\n", ch);
        } else if (ch >= 'a' && ch <= 'z') {
            printf("The character '%c' is a lowercase alphabet.\n", ch);
        } else if (ch >= '0' && ch <= '9') {
            printf("The character '%c' is a digit.\n", ch);
        } else {
            printf("The character '%c' is a special character.\n", ch);
        }

        while (getchar() != '\n');
    }

    return 0;
}
