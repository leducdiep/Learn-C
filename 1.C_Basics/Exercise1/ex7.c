#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Input number of days from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years
    years = days / 365;
    
    // Calculate remaining days after extracting years
    remainingDays = days % 365;

    // Calculate weeks
    weeks = remainingDays / 7;

    // Calculate remaining days after extracting weeks
    remainingDays = remainingDays % 7;

    // Display the result
    printf("Years: %d, Weeks: %d, Days: %d\n", years, weeks, remainingDays);

    return 0;
}
