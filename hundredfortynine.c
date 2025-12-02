// Dynamic allocation of a student structure
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));
    fgets(s->name, sizeof(s->name), stdin);
    scanf("%d %f", &s->roll_no, &s->marks);
    printf("%s%d %.2f", s->name, s->roll_no, s->marks);
    free(s);
    return 0;
}
