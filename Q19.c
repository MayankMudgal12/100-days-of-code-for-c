// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>
#include <string.h>

int main() {
    float side1, side2, side3;
    char user_input[100];

    // Loop to allow multiple calculations
    while (1) {
        printf("Enter the three side lengths of the triangle (or type 'exit' to quit):\n");

        // Get the first side
        printf("Side 1: ");
        if (fgets(user_input, sizeof(user_input), stdin) == NULL || strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        if (sscanf(user_input, "%f", &side1) != 1 || side1 <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
            continue;
        }

        // Get the second side
        printf("Side 2: ");
        if (fgets(user_input, sizeof(user_input), stdin) == NULL || strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        if (sscanf(user_input, "%f", &side2) != 1 || side2 <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
            continue;
        }

        // Get the third side
        printf("Side 3: ");
        if (fgets(user_input, sizeof(user_input), stdin) == NULL || strcmp(user_input, "exit\n") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        if (sscanf(user_input, "%f", &side3) != 1 || side3 <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
            continue;
        }
        
        // Check if the sides can form a valid triangle
        if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
            printf("These side lengths cannot form a valid triangle.\n");
        } 
        // Classify the triangle
        else if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    }

    return 0;
}
