// Check if a string is a palindrome
#include <stdio.h>
int main() {
    char s[100];
    int i, len = 0, flag = 1;
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
        len++;
    for(i = 0; i < len / 2; i++)
        if(s[i] != s[len - 1 - i])
            flag = 0;
    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
