// Store and read employee data using binary file
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    fp = fopen("employee.dat", "wb");
    fgets(e.name, sizeof(e.name), stdin);
    scanf("%d %f", &e.id, &e.salary);
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    fread(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("%s%d %.2f", e.name, e.id, e.salary);
    return 0;
}
