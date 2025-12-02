// Struct with enum Gender
#include <stdio.h>
enum Gender {MALE, FEMALE, OTHER};
struct Person {
    char name[50];
    enum Gender gender;
};
int main() {
    struct Person p;
    fgets(p.name, sizeof(p.name), stdin);
    int g;
    scanf("%d", &g);
    p.gender = g;
    if(p.gender == MALE) printf("Male");
    else if(p.gender == FEMALE) printf("Female");
    else printf("Other");
    return 0;
}
