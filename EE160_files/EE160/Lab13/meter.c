/*      File : meter.c          *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 4/24/2018        */

/*  Given the count of meter readings available, 
        and the array of meter readings.  It computes the water
        usage for each hourly interval in the array use, and
        returns (directly) the average usage for the day and
        (indirectly) the index of the highest water usage value.  */ 

#include <stdio.h>
#include "meter.h"
/* #define DEBUG */

float compute_usage(int num, int *vals, int use[], int *hi_idx)
{
int i;
int total = 0;
int first;
float average;
int largest;

	for(i = 0; i < (num - 1); i++)
	{
	use[i] = (vals[i+1] - vals[i]);
	total = use[i] + total;
	/*Get the first data point*/
		if(use[i] > largest)
          	{
		largest = use[i];
		*hi_idx = i;
		}
	}

	/*compute the average*/
	average = (float)(total /i);

	return average;

}


