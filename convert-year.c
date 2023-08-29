#include <stdio.h>

int main()
{
    int year, month, day, num, remaining_day;
    printf("Input no. of days: ");
    scanf("%d", &num);
    year = num / 365;
    remaining_day = num % 365;
    month = remaining_day / 30;
    day = remaining_day % 30;
    printf("%i Year(s)\n", year);
    printf("%i Month(s)\n", month);
    printf("%i Day(s)", day);
    return 0;
}
