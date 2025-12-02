// Find the missing number in 0 to n
#include <stdio.h>
int main() {
    int n, arr[100], i, total, sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    total = n * (n + 1) / 2;
    for(i = 0; i < n; i++)
        sum += arr[i];
    printf("%d", total - sum);
    return 0;
}
