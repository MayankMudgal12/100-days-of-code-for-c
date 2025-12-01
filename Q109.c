#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int windowSum = 0;
    for(int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    for(int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d\n", maxSum);

    return 0;
}
