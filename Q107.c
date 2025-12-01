#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int pge = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                pge = arr[j];
                break;
            }
        }
        if(i != n-1)
            printf("%d, ", pge);
        else
            printf("%d\n", pge);
    }

    return 0;
}
