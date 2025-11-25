#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, largest, second_largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second_largest = INT_MIN;

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if(second_largest == INT_MIN)
        printf("No second largest element (all elements may be equal).\n");
    else
        printf("Second largest element is %d\n", second_largest);

    return 0;
}
