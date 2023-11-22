#include <stdio.h>

int main() {
    
    int days;

    printf("Enter days: ");
    scanf("%d", &days);

    int years = days / 365;
    int weeks = (days % 365) / 7;
    days = ((days % 365) % 7);

    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, days);

    return 0;
}
