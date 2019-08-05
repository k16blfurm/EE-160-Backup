/*	File: julian.h
 *	By: Jared Paul M. Austria, Blaine Furman
 *	Login: jpaust, bfurman
 *	Team: XxFazeClan420xX
 *	Date: 03/01/2018
 *	Members: Jared Paul M. Austria, Blaine Furman
*/

/* Header file delcaring date functions */

int is_leap(int year);
/*
 * Given: Any given year (ex: 1996).
 * Return: Displays whether or not the given year is a leap year.
*/

int days_in_month(int month, int year);
/*
 * Given: Any random month and year.
 * Return:How many days are in that month in that given year.
*/

int julian_date(int day, int month, int year);
/*
 * Given: A given date (days/months/year).
 * Return: Converts the given date into a julian date (x days).
*/
