// Diagonal traversal of a matrix
#include <stdio.h>
int main() {
    int r, c, a[100][100], i, j, start;
    scanf("%d", &r);
    scanf("%d", &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(start = 0; start < r; start++)
        for(i = start, j = 0; i >= 0 && j < c; i--, j++)
            printf("%d ", a[i][j]);

    for(start = 1; start < c; start++)
        for(i = r - 1, j = start; i >= 0 && j < c; i--, j++)
            printf("%d ", a[i][j]);

    return 0;
}
