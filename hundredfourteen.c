// Length of longest substring without repeating characters
#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    int last_index[256], i, start = 0, max_len = 0, len;
    fgets(s, sizeof(s), stdin);
    for(i = 0; i < 256; i++) last_index[i] = -1;
    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if(last_index[(unsigned char)s[i]] >= start)
            start = last_index[(unsigned char)s[i]] + 1;
        len = i - start + 1;
        if(len > max_len) max_len = len;
        last_index[(unsigned char)s[i]] = i;
    }
    printf("%d", max_len);
    return 0;
}
