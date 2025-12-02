// Find kth smallest element in an array
#include <stdio.h>
int main() {
    int n, arr[100], i, j, temp, k;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    printf("%d", arr[k - 1]);
    return 0;
}
