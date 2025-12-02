// Convert string to sentence case
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(i == 0 && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if(str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if(i != 0 && str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    printf("%s", str);
    return 0;
}
