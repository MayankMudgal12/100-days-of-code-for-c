// Print all sub-strings of a string
#include <stdio.h>
int main() {
    char str[100];
    int i, j, k;
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for(j = i; str[j] != '\0' && str[j] != '\n'; j++) {
            for(k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
