#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    scanf("%d", &m);

    if(m == JAN || m == MAR || m == MAY || m == JUL || m == AUG || m == OCT || m == DEC)
        printf("31\n");
    else if(m == APR || m == JUN || m == SEP || m == NOV)
        printf("30\n");
    else if(m == FEB)
        printf("28 or 29\n");
    else
        printf("Invalid\n");

    return 0;
}
