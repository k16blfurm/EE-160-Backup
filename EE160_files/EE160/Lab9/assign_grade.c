/*      File : assign_grade.c   *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 3/12/17          */

/*  The function to assign letter grades to scores  */

#include <stdio.h>
#include "grader.c"

char assign_grade(int score)
/*this function evaluates the scores against the preset values of program*/
{
int value;

	/*Returns an A grade when between 100 and 90*/
	if(score >= 90 && score <= 100)
        return 'A';
	/*Returns a B grade when between 90 and 80*/
	if(score < 90 && score >= 80)
	return 'B';
	/*Returns a C grade when between 80 and 70*/
	if(score < 80 && score >= 70)
	return 'C';
	/*Returns a D grade when between 70 and 60*/
	if(score < 70 && score >= 60)
	return 'D';
	/*Returns a F grade when between 60 and 0*/
	if(score < 60 && score >= 0)
	return 'F';
	/*If score is not valid, returns Incorrect for score*/
	if(score > 100 || score < 0)
	return FALSE;
}
