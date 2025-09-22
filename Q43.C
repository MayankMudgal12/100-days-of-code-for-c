Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int n, originalN, rem, sum = 0, i;
    long long fact;

    scanf("%d", &n);
    originalN = n;

    while (n > 0) {
        rem = n % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if (sum == originalN) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
