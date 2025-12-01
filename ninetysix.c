// Reverse each word in a sentence without changing the word order
#include <stdio.h>
int main() {
    char str[200];
    int i, start, end;
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if(i == 0 || str[i-1] == ' ') {
            start = i;
            while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
                i++;
            end = i - 1;
            int j;
            for(j = end; j >= start; j--)
                printf("%c", str[j]);
            if(str[i] == ' ')
                printf(" ");
        }
    }
    printf("\n");
    return 0;
}
