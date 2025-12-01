// Transpose of a matrix
#include <stdio.h>
int main() {
    int r, c, a[100][100], t[100][100], i, j;
    scanf("%d", &r);
    scanf("%d", &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            t[j][i] = a[i][j];
    for(i = 0; i < c; i++)
        for(j = 0; j < r; j++)
            printf("%d ", t[i][j]);
    return 0;
}
