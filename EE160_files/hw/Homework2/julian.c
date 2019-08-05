/*	File: julian.c
 *	By: Jared Paul M. Austria
 *	Login: jpaust
 *	Date: 03/05/2018
 *	Team: XxFazeClan420xX
 *	Members: Jared Paul M. Austria, Blaine Furman
*/

#include "julian.h"
/* Given: Any particular date (day/month/year)
 * Returns: Converts the given date into a julain date
*/

int julian_date(int day, int month, int year)
{
    int count_month = 0;
    int value;
    int total_value = 0;

    month = month - 1;
    while(month != count_month )
    {
        count_month = count_month + 1;
        value = days_in_month(count_month, year);
        total_value = value + total_value;
#ifdef DEBUG
        printf("count_month is %d\n", count_month);
        printf("value of days is %d\n", value);
#endif
    }
    total_value = total_value + day;
    return total_value;
}

