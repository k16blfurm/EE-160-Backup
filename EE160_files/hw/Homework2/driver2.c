/*      File : driver2.c        *
 *      By   : Blaine Furman    *
 *      login: bfurman, jpaust  *
 *      team : XxFazeClan420xX  *
 *      Date : 2/25/2018        */

/*  To compute the exponent of a values entered */

#include <stdio.h>
/* #define DEBUG */
#define FALSE 1.0
#define TRUE 0.0

int days_in_month(int month, int year);
int is_leap(int year);

int main()
{
    int month, year, value, month_count;
    int end1;

    printf("Welcome to our days in a month  program\n");
    printf("Enter your month  and years here:(ex: 02 1996)\n");
    end1 = scanf("%d %d", &month, &year);

    while(end1 != EOF)
    {
	month_count = days_in_month( month, year);
	value = is_leap(year);
	if(value == 0 && month_count == 28){
	    month_count = month_count + 1;
	}
	printf("month_count : %d\n", month_count);
	printf("Enter your month  and years here:(ex: 02 1996)\n");
	end1 = scanf("%d %d", &month, &year);

    }
}

int is_leap(int year)
{
    int value = 0;

    if(year % 4 == 0)
	return TRUE;
    else
	return FALSE;

}

int days_in_month(int month, int year)
{
    int value = 0;
    while(month != 2){
	if(month == 1 || month == 3 || (month == 5) || (month == 7) 
		|| month == 8 || month == 10 || month == 12){
	    value = 31;
	    return value;}
	else if (month == 4 || month == 6 || month == 9 || month == 11){
	    value = 30;
	    return value;}
    }
    value = 28;
    return value;
}
