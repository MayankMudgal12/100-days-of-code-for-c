#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) return 0;

    int x, sum = 0, count = 0;

    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("0 0");
        return 0;
    }

    printf("%d %.2f", sum, (float)sum / count);

    return 0;
}
