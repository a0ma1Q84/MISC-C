/********************************************************************************************************
* https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php       *
*                                                                                                       *
* Exercise 08 : Write a C program to convert specified days into years, weeks and days.                 *
* Note: Ignore leap year.                                                                               *
********************************************************************************************************/

#include <stdio.h>

#define DAYS_IN_YEAR 365
#define DAYS_IN_WEEK 7

int main(void) {
    int days, weeks, years;

    days = 1329;

    // Calculate the number of years
    years = days / DAYS_IN_YEAR;

    // Calculate the number of weeks
    weeks = (days % DAYS_IN_YEAR) / DAYS_IN_WEEK;

    // Calculate the number of remaining days
    days = days - ((years * DAYS_IN_YEAR) + (weeks * DAYS_IN_WEEK));

    // Display the results
    printf("Years: %d years\n", years);
    printf("Weeks: %d weeks\n", weeks);
    printf("Days : %d days\n", days);

    return 0;
}
