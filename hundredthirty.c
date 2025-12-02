#include <stdio.h>

int main() {
    FILE *fp;
    int n;

    scanf("%d", &n);   // number of students

    fp = fopen("students.txt", "w");
    if (!fp) return 0;

    for (int i = 0; i < n; i++) {
        char name[50];
        int roll;
        int marks;
        scanf("%s %d %d", name, roll, marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (!fp) return 0;

    while (1) {
        char name[50];
        int roll, marks;
        if (fscanf(fp, "%s %d %d", name, &roll, &marks) != 3) break;
        printf("%s %d %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
