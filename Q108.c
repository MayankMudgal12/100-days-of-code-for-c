#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[n];

    for(int i = 0; i < n; i++) {
        int prod = 1;
        for(int j = 0; j < n; j++) {
            if(i != j)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    for(int i = 0; i < n; i++) {
        if(i != n-1)
            printf("%d, ", answer[i]);
        else
            printf("%d\n", answer[i]);
    }

    return 0;
}
