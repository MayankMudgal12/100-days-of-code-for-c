// Return top student details from function
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student top_student(struct Student s[], int n) {
    int i, top = 0;
    for(i = 1; i < n; i++)
        if(s[i].marks > s[top].marks) top = i;
    return s[top];
}

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student s[n];
    for(i = 0; i < n; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    struct Student t = top_student(s, n);
    printf("%s %d %.2f", t.name, t.roll_no, t.marks);
    return 0;
}
