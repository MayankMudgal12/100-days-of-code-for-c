// Find the longest word in a sentence
#include <stdio.h>
int main() {
    char str[200], word[100], longest[100];
    int i = 0, j, max_len = 0, len;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        j = 0;
        while(str[i] != ' ' && str[i] != '\0' && str[i]
        } != '\n') {
            word[j++] = str[i++];
        }