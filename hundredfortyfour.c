// Function that prints structure members
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void print_student(struct Student s) {
    printf("%s %d %.2f", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);
    print_student(s);
    return 0;
}
