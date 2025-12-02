// Check if two strings are anagrams
#include <stdio.h>
#include <string.h>
int main() {
    char s[200], t[200];
    int freq[26] = {0}, i;
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        freq[s[i] - 'a']++;
    for(i = 0; t[i] != '\0' && t[i] != '\n'; i++)
        freq[t[i] - 'a']--;
    for(i = 0; i < 26; i++)
        if(freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    printf("Anagram");
    return 0;
}
