// Maximum sum of contiguous subarray (Kadane's algorithm)
#include <stdio.h>
int main() {
    int n, arr[100], i, max_sum, curr_sum;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max_sum = curr_sum = arr[0];
    for(i = 1; i < n; i++) {
        if(curr_sum < 0) curr_sum = arr[i];
        else curr_sum += arr[i];
        if(curr_sum > max_sum) max_sum = curr_sum;
    }
    printf("%d", max_sum);
    return 0;
}
