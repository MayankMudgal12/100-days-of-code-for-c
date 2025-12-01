#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int ceilIndex = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("%d\n", ceilIndex);

    return 0;
}
