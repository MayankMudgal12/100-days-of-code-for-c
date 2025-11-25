#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num, temp;
    int freq[10] = {0};
    int digit, maxFreq = 0, result = 0, i;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    temp = llabs(num); // Handle negative numbers

    while(temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("The digit that occurs the most is %d\n", result);

    return 0;
}
