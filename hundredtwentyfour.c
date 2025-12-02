#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%s %s", src, dest);

    FILE *fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Error: Cannot open source file\n");
        return 0;
    }

    FILE *fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error: Cannot open destination file\n");
        fclose(fs);
        return 0;
    }

    int ch;
    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);

    fclose(fs);
    fclose(fd);
    return 0;
}
