/*      File : maxmin.c         *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 2/25/2018        */

/*  This file contains the functions for the counting and sorting programs
(driver1 & driver2*/

#include <stdio.h>
#define TRUE 1.0
#define FALSE 2.0

float max(float a, float b)
/*Given: two values ( a and b)

 Return: The sorting of either of them to be more or less than the other*/
{
	if(a < b)
	return TRUE;
	else
	return FALSE;
}

float min(float a, float b)
/*Given: two values ( a and b)

 Return: The sorting of either of them to be less or more than the other*/
{

	if(a < b)
	return  TRUE;
	else
	return  FALSE;
}
