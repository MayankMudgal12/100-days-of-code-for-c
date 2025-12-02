#include <stdio.h>

enum Status { SUCCESS = 1, FAILURE, TIMEOUT };

int main() {
    enum Status s;
    scanf("%d", &s);

    if(s == SUCCESS)
        printf("Operation Successful\n");
    else if(s == FAILURE)
        printf("Operation Failed\n");
    else if(s == TIMEOUT)
        printf("Operation Timed Out\n");
    else
        printf("Invalid Input\n");

    return 0;
}
