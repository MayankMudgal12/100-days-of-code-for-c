#include <stdio.h>

int main() {
    int n, i, key, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];

    printf("Enter %d sorted elements (ascending order):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(key < arr[i]) {
            pos = i;
            break;
        }
    }
    if(pos == -1)
        pos = n;

    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = key;
    n++;

    printf("Array after
