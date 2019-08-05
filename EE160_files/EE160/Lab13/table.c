// Name:  Blaine
// login: bfurman
// date: 4/25/18
// Team: XxFazeClan420xX
/*
 * Function to read values, compute their averages, and to print
 * the values greater than or less than the average.
 */

#include <stdio.h>
#include "table.h"


int tableFill(double a[], int max)
{
  double next;              /* next input value */
  int r;                    /* return from trying to read values */
  int cnt = 0;              /* count of values read */

	while ((r = scanf("%lf", &next)) != EOF)
	{
		if (r != 1)		 /* bad return from scanf */
		{
			printf("Error in the input after reading %d values.\n",
				cnt);
			break; 
		}
		if (cnt == max)		 /* no room to store this value */
		{
			printf("Array full after reading %d values.\n", cnt);
			break;
		}
		a[cnt++] = next;	/* save element in array */
	}
	return cnt;
}

void tablePrintlarge(double a[], int num, double average) 
{int i;

	for (i = 0; i < num; i++)
		if(a[i] > average)
		printf("%f\n", a[i]);
}

void tablePrintsmall(double a[], int num, double average) 
{int i;

       	for (i = 0; i < num; i++)
        	if(a[i] < average)
                printf("%f\n", a[i]);
}

double tableAverage(double a[], int num)
{
int i;
float total, final;

	for(i = total = 0; i < num; i++)
	{
	total = total + a[i];
	}
	final = total / num;
	return final;      /* does really compute the average */
}

int tableMatchingElements(double a[], int num, double target)
{
int i;
int count = 0;

	for(i = 0; i < num; i++)
        {
		if(a[i] == target)
		count = count + 1;
        }
	return count;
        /* number of values equal to the target */
}

