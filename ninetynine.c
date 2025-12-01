// Change the date format from dd/04/yyyy to dd-Apr-yyyy
#include <stdio.h>
int main() {
    char date[20];
    int day, month, year;
    scanf("%d/%d/%d", &day, &month, &year);
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%02d-%s-%d\n", day, months[month-1], year);
    return 0;
}
