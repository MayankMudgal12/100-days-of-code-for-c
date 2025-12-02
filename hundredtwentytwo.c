#include <stdio.h>

int main() {
    char fname[100];
    scanf("%s", fname);

    FILE *fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    char line[500];

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
