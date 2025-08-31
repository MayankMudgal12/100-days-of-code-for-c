// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/


#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    amount = principal * pow(1 + rate / 100, time);
    compound_interest = amount - principal;

    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal: $%.2f\n", principal);
    printf("Annual Interest Rate: %.2f%%\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("------------------------------------\n");
    printf("Simple Interest: $%.2f\n", simple_interest);
    printf("Compound Interest: $%.2f\n", compound_interest);
    printf("------------------------------------\n");

    return 0;
}
