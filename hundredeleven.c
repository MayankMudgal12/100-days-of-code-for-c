// First negative integer in each subarray of size k
#include <stdio.h>
int main() {
    int n, arr[100], k, i, j, found;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(arr[i + j] < 0) {
                printf("%d", arr[i + j]);
                found = 1;
                break;
            }
        }
        if(!found) printf("0");
        if(i != n - k) printf(" ");
    }
    return 0;
}
