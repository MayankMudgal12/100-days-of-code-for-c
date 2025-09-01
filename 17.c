// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    char exit_choice;

    while (1) {
        printf("Enter coefficients a, b, and c (or 'q' to quit):\n");
        if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
            scanf(" %c", &exit_choice);
            if (exit_choice == 'q' || exit_choice == 'Q') {
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            }
            printf("Invalid input. Please enter three numbers.\n");
            while (getchar() != '\n');
            continue;
        }

        if (a == 0) {
            printf("The coefficient 'a' cannot be zero for a quadratic equation. This is a linear equation.\n");
            continue;
        }
        
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
        } else if (discriminant == 0) {
            root1 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2lf\n", root1);
        } else {
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and distinct.\n");
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
            printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
        }
    }
    return 0;
}
