// Compare two student structures
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;
    fgets(s1.name, sizeof(s1.name), stdin);
    scanf("%d %f", &s1.roll_no, &s1.marks);
    getchar();
    fgets(s2.name, sizeof(s2.name), stdin);
    scanf("%d %f", &s2.roll_no, &s2.marks);

    if(strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks)
        printf("Identical");
    else
        printf("Not Identical");
    return 0;
}
