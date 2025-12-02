// Structure Student: read and print one student
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    fgets(s.name, sizeof(s.name), stdin);
    scanf("%d %f", &s.roll_no, &s.marks);
    printf("%s%d %.2f", s.name, s.roll_no, s.marks);
    return 0;
}
