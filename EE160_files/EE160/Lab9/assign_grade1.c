/*      File : assign_grade1.c         *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 3/12/17          */

/*  Function program for checking grades against user entered grades*/

#include <stdio.h>
#include "grader1.c"

char assign_grade(int score, int a, int b, int c, int d)
/*This function evaluates the entered grade score with the scores entered by
the user*/
{
int value;

	/*Returning A score when value entered by user is bewtween it an 100*/
	if(score >= a && score <= 100)
        return 'A';
	/*Returning B score when value entered by user is bewtween it and A*/
	if(score < a && score >= b)
	return 'B';
	/*Returning C score when value entered by user is bewtween it an B*/
	if(score < b && score >= c)
	return 'C';
	/*Returning D score when value entered by user is bewtween it an C*/
	if(score < c && score >= d)
	return 'D';
	/*Returning F score when value entered by user is bewtween 0 an D*/
	if(score < d && score >= 0)
	return 'F';
	/*Returning False when value is invalid*/
	if(score > 100 || score < 0)
	return FALSE;
}


