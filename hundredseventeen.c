// Merge two sorted arrays
#include <stdio.h>
int main() {
    int m, n, arr1[100], arr2[100], merged[200];
    int i = 0, j = 0, k = 0;
    scanf("%d", &m);
    for(i = 0; i < m; i++)
        scanf("%d", &arr1[i]);
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    i = 0; j = 0; k = 0;
    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) merged[k++] = arr1[i++];
        else merged[k++] = arr2[j++];
    }
    while(i < m) merged[k++] = arr1[i++];
    while(j < n) merged[k++] = arr2[j++];
    for(i = 0; i < k; i++) {
        printf("%d", merged[i]);
        if(i != k - 1) printf(" ");
    }
    return 0;
}
