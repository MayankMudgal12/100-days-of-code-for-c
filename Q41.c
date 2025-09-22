// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped_num;
    scanf("%d", &n);
    
    if (n >= 0 && n <= 9) {
        printf("%d\n", n);
        return 0;
    }
    
    last = n % 10;
    
    digits = (int)log10(n) + 1;
    
    int power_of_10 = (int)pow(10, digits - 1);
    
    first = n / power_of_10;
    
    if (first == last) {
        printf("%d\n", n);
        return 0;
    }
    
    int middle = n - (first * power_of_10) - last;
    
    swapped_num = last * power_of_10 + middle + first;
    
    printf("%d\n", swapped_num);
    
    return 0;
}
