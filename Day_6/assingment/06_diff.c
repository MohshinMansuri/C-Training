#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int calculate_days(struct Date d) {
    return d.year * 365 + d.month * 30 + d.day;
}

int main() {
    struct Date date1, date2;
    int days1, days2, diff;

    // Input two dates
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Calculate difference in days
    days1 = calculate_days(date1);
    days2 = calculate_days(date2);
    diff = days1 > days2 ? days1 - days2 : days2 - days1;

    // Output result
    printf("Difference in days: %d\n", diff);

    return 0;
}


