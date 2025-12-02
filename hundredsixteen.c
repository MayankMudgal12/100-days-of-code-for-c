// Two sum problem
#include <stdio.h>
int main() {
    int n, nums[100], target, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1");
    return 0;
}
