#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = 0;
    for(int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0, pivot = -1;

    for(int i = 0; i < n; i++) {
        if(leftSum == totalSum - leftSum - arr[i]) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("%d\n", pivot);

    return 0;
}
