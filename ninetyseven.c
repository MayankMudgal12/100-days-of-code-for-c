// Print the initials of a name
#include <stdio.h>
int main() {
    char name[200];
    int i;
    fgets(name, sizeof(name), stdin);
    for(i = 0; name[i] != '\0'; i++) {
        if(i == 0 && name[i] != ' ')
            printf("%c", name[i]);
        else if(name[i-1] == ' ' && name[i] != ' ' && name[i] != '\n')
            printf("%c", name[i]);
    }
    printf("\n");
    return 0;
}
