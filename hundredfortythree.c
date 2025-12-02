// Find student with highest marks
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n, i, top = 0;
    scanf("%d", &n);
    struct Student s[n];
    for(i = 0; i < n; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    for(i = 1; i < n; i++)
        if(s[i].marks > s[top].marks) top = i;
    printf("%s %d %.2f", s[top].name, s[top].roll_no, s[top].marks);
    return 0;
}
