/*      File : driver1.c       *
 *      By   : Blaine Furman, Jared Paul M. Austria    *
 *      login: bfurman, jpaust  *
 *      team : XxFazeClan420xX  *
 *      Date : 2/25/2018        */

/*  To compute the exponent of a values entered */

#include <stdio.h>
/*#define DEBUG*/ 
#define PROMPTS
#define TRUE 1.0
#define FALSE 0.0

int is_leap(int year);
int days_in_month(int month, int year);
int julian_date(int day, int month, int year);

int main()
{
    int day, month, year;
    int total_value;
    int end1;
    int value;

#ifdef PROMPTS
    /* Ask for input to be converted in a Julian date */
    printf("Welcome to my Julian Calendar\n");
    printf("Enter your days, months and years:\n");
    printf("(12 12 1996)");
#endif
    end1 = scanf("%d %d %d", &day, &month, &year);

    while(end1 != EOF)
    {
	/* Converion of date into Julian date */
	total_value = julian_date(day, month, year);
	/* Leap year */
	value = is_leap(year);
#ifdef DEBUG
printf("value is %d", value);
#endif
	if((value == TRUE) && ((month >= 3) || ((month >= 2) && (day >= 28)))){
	total_value = 1 + total_value; }
	/* Display output (Julian date) */
	printf("Here is your days; %d\n", total_value);
	/* Ask for input again until user quits program */
	printf("Enter your days, months and years:");
        printf("(12 12 1996)\n"); 
	end1 = scanf("%d %d %d", &day, &month, &year);
    }
}

/* Protoype Function */
/* Converts a date "days/months/years into a Julian date */
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

/* Prototype Function */
/* Determines if the given year is a leap year or not */
int is_leap(int year)
{
    int value = 0;

    if(year % 4 == 0)
	return TRUE;
    else
	return FALSE;
}

/* Prototype Function  */
/* Determines the number of days given the month and year */
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

