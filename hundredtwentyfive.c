#include <stdio.h>

int main() {
    char filename[100], line[200];
    scanf("%s", filename);
    getchar(); 

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file\n");
        return 0;
    }

    fgets(line, sizeof(line), stdin);
    fputs(line, fp);

    fclose(fp);
    return 0;
}
