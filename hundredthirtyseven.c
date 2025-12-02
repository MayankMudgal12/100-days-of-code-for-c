// User roles using enum
#include <stdio.h>
enum Role {ADMIN, USER, GUEST};
int main() {
    enum Role role;
    scanf("%d", &role);
    if(role == ADMIN) printf("Welcome Admin");
    else if(role == USER) printf("Welcome User");
    else if(role == GUEST) printf("Welcome Guest");
    else printf("Invalid role");
    return 0;
}
