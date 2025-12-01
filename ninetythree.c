// Check if two strings are anagrams of each other
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0}, i;
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    for(i = 0; str1[i] != '\0'; i++)
        freq1[(unsigned char)str1[i]]++;
    for(i = 0; str2[i] != '\0'; i++)
        freq2[(unsigned char)str2[i]]++;
    for(i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
