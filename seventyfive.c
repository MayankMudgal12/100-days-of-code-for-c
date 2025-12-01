// Add two matrices
#include <stdio.h>
int main() {
    int r, c, a[100][100], b[100][100], s[100][100], i, j;
    scanf("%d", &r);
    scanf("%d", &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            s[i][j] = a[i][j] + b[i][j];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            printf("%d ", s[i][j]);
    return 0;
}
