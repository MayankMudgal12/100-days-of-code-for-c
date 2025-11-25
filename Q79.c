#include <stdio.h>

int main() {
    int rows, cols, i, j, start_row, start_col;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    for(start_col = 0; start_col < cols; start_col++) {
        i = 0;
        j = start_col;
        while(i < rows && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    for(start_row = 1; start_row < rows; start_row++) {
        i = start_row;
        j = cols - 1;
        while(i < rows && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
