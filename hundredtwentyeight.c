#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    if (!fp) return 0;

    char ch;
    int vowels = 0, consonants = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char c = tolower(ch);
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("%d %d", vowels, consonants);

    return 0;
}
