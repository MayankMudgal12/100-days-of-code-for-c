// Enum stores integer values
#include <stdio.h>
enum Status {SUCCESS = 1, FAILURE = 0, TIMEOUT = 5};
int main() {
    enum Status s;
    for(s = SUCCESS; s <= TIMEOUT; s++)
        printf("%d ", s);
    return 0;
}
