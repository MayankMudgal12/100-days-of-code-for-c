#include <stdio.h>

int main() {
    char name[100];
    int age;

    fgets(name, sizeof(name), stdin);
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) return 0;

    fprintf(fp, "%s", name);
    fprintf(fp, "%d\n", age);

    fclose(fp);

    printf("Data saved successfully\n");
    return 0;
}

