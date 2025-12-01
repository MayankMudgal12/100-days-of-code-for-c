// Sum of each row of a matrix
#include <stdio.h>
int main() {
    int r, c, a[100][100], rowSum[100], i, j;
    scanf("%d", &r);
    scanf("%d", &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(j = 0; j < c; j++)
            rowSum[i] += a[i][j];
    }
    for(i = 0; i < r; i++)
        printf("%d ", rowSum[i]);
    return 0;
}
