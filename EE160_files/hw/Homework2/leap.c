/*	File: leap.c
 *	By: Jared Paul M. Austria
 *	Login: jpaust
 *	Date: 03/05/2018
 *	Team: XxFazeClan420xX
 *	Members: Jared Paul M. Austria, Blaine Furman
 */

#include "leap.h"

#define TRUE 1.0
#define FALSE 0.0

int is_leap(int year)
/* Given: Any particular year (ex: 1996)
 * Retuns: Determination whether given year is a leap year or not
*/
{
    int value = 0;
    if(year % 4 == 0)
	return TRUE;
    else
	return FALSE;
}
