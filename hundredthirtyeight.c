// Print enum names and values
#include <stdio.h>
enum Color {RED, GREEN, BLUE};
int main() {
    enum Color c;
    const char *names[] = {"RED", "GREEN", "BLUE"};
    for(c = RED; c <= BLUE; c++)
        printf("%s = %d\n", names[c], c);
    return 0;
}
