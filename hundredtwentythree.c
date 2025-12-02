#include <stdio.h>

int main() {
    char fname[100];
    scanf("%s", fname);

    FILE *fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    int ch;
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (ch != ' ' && ch != '\n' && ch != '\t') {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
