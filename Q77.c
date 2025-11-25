
#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0)
            break;
    }

    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
