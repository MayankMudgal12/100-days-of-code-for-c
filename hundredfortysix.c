// Employee structure with nested Date structure
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;
};

int main() {
    struct Employee e;
    fgets(e.name, sizeof(e.name), stdin);
    scanf("%d %f %d %d %d", &e.id, &e.salary, &e.joining.day, &e.joining.month, &e.joining.year);
    printf("%s%d %.2f %02d-%02d-%04d", e.name, e.id, e.salary, e.joining.day, e.joining.month, e.joining.year);
    return 0;
}
