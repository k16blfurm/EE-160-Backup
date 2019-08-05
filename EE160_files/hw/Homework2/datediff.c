/*	File: datediff.c
 *	By: Jared Paul Austria, Blaine Furman
 *	Login: bfurman, jpaust
 *	Team: XxFazeClan420xX
 *	Date: 02/28/2018
 */

/* */

#include <stdio.h>

#define TRUE 1.0
#define FALSE 0.0

int is_leap(int year);
int days_in_month(int month, int year);
int julian_date(int day, int month, int year);

int main()
{
    int start_day, start_month, start_year;
    int final_day, final_month, final_year;
    int number_days;
    int start_julian, final_julian;
    int end1, end2;
    int value;
    int days = 0;

    /* Ask for starting and final dates */
    printf("Weclome to my date difference program!\n");
    printf("Enter your starting date (ex: 12 12 2018):\n");
    end1 = scanf("%d %d %d", &start_day, &start_month, &start_year);
    printf("Enter your final dates (ex: 12 12 2018):\n");
    end2 = scanf("%d %d %d", &final_day, &final_month, &final_year);

    while((end1 != EOF) && (end2 != EOF))
    {
	/* Conversion of starting days, months, and years into Julian dates */
	start_julian = julian_date(start_day, start_month, start_year);

	if((value == TRUE) && ((start_month >= 3) || ((start_month >= 2)
			&& (start_day >= 28))))
	{
	    start_julian = 1 + start_julian;
	}

	/* Conversion of final days, months, and years into Julian dates */
	final_julian = julian_date(final_day, final_month, final_year);

	if((value == TRUE) && ((final_month >= 3) || ((final_month >= 2)
			&& (final_day >= 28))))
	{
	    final_julian = 1 + final_julian;
	}

	while(start_year != final_year)
	{
		value = is_leap(start_year);
		if(value == 1.0)
			days = days + 366;
		else if (value == 0){
			days = days + 365;}
		start_year = start_year +1;
	}

	/* Compuation of date difference */
	number_days = final_julian - start_julian + days;

	/* Display output */
	printf("The date difference is %d days\n", number_days);

	days = 0;
	/* Ask user for inputs until user terminates program */
	printf("Entering your starting dates (ex: 12 12 2018):\n");
	end1 = scanf("%d %d %d", &start_day, &start_month, &start_year);
	printf("Enter your final dates (ex: 12 12 2018):\n");
	end2 = scanf("%d %d %d", &final_day, &final_month, &final_year);
    }
}

/* Prototype function */
/* Determines whether or not given year is a leap year */
int is_leap(int year)
{
    int value = 0;
    if(year % 4 == 0)
	return TRUE;
    else
	return FALSE;
}

/* Prototype function */
/* Determines how much days given a particular month and year */
int days_in_month(int month, int year)
{
    int value = 0;
    while(month != 2){
	if(month == 1 || month ==  3 || (month == 5) || (month == 7)
		|| month == 8 || month == 10 || month == 12){
	    value = 31;
	    return value;}
	else if (month == 4 || month == 6 || month == 9 || month == 11){
	    value =  30;
	    return value;}
    }
    value = 28;
    return value;
}

/* Prototype Function */
/* Converts a given day/month/year into a julian date */
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
