// Print initials of a name with the surname displayed in full
#include <stdio.h>
#include <string.h>
int main() {
    char name[200];
    int i, last_space = -1;
    fgets(name, sizeof(name), stdin);
    int len = 0;
    while(name[len] != '\0' && name[len] != '\n') len++;
    for(i = 0; i < len; i++)
        if(name[i] == ' ')
            last_space = i;
    for(i = 0; i < last_space; i++) {
        if(i == 0 || name[i-1] == ' ')
            printf("%c.", name[i]);
    }
    for(i = last_space+1; i < len; i++)
        printf("%c", name[i]);
    printf("\n");
    return 0;
}
