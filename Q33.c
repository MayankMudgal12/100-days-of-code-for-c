// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, original_n, remainder, result = 0, count = 0;
    
    scanf("%d", &n);
    original_n = n;

    while (original_n != 0) {
        original_n /= 10;
        count++;
    }

    original_n = n;

    while (original_n != 0) {
        remainder = original_n % 10;
        result += pow(remainder, count);
        original_n /= 10;
    }

    if (result == n) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
