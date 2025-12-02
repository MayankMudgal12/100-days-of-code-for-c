// Find the repeated element in array
#include <stdio.h>
int main() {
    int n, arr[100], i, xor_all = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xor_all ^= arr[i];
    }
    for(i = 1; i < n; i++)
        xor_all ^= i;
    printf("%d", xor_all);
    return 0;
}
