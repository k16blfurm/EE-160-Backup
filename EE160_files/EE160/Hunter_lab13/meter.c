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
/**/ #define DEBUG 

float compute_usage(int num, int *vals, int use[], int *hi_idx)
{
int i;
int total;
int first;
float average;

#ifdef DEBUG
printf("here");
#endif

	for(i = 0; i < num; i++)
	{
	/*Get the first data point*/
	if(i = 0)
          first = use[i];

	/*add up all the data points*/
	total = total + use[i] - first;
	}

	/*compute the average*/
	average = (float)(total / num);

	return average;

}


