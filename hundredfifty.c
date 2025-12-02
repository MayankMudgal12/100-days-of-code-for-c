// Pointer to struct: modify and display
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;
    fgets(p->name, sizeof(p->name), stdin);
    scanf("%d %f", &p->roll_no, &p->marks);
    printf("%s%d %.2f", p->name, p->roll_no, p->marks);
    return 0;
}
