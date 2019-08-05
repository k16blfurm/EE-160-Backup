/* file: avgutil.c       *
   by: Hunter Garrett    *
   login: hsgarr97       *
   date: 11/28/17        *
   team: coca_cola       *
*/

/* This file contains the functions for averages.c
 */

#include <stdio.h>
#include "avgutil.h"

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

void tablePrintIfLarger(double a[], int num, double averages)
{
  int i;
	
        for (i = 0; i < num; i++)
	{
	if(a[i] > averages)
	printf("%f\n", a[i]);
	}
}

void tablePrintIfSmaller(double a[], int num, double averages)
{
  int i;

        for (i = 0; i < num; i++)
	{
	if(a[i] < averages)
        printf("%f\n", a[i]);
	}
}

double tableAverage(double a[], int num)
{
	int i;
	double total = 0;

	for (i = 0; i < num; i++)
	{
        total = total + a[i];
	}

	total = total / num;
	return total;
}

int tableMatchingElements(double a[], int num, double target)
{
	int same = 0;
	int i;

	for (i = 0; i < num; i++)
	{
	if(a[i] == target)
	same++;
	}
	return same;        /* number of values equal to the target */
}

int tableLargerElements(double a[], int num, double target)
{
        int same = 0;
        int i;

        for (i = 0; i < num; i++)
        {
        if(a[i] > target)
        same++;
        }
        return same;        /* number of values equal to the target */
}

int tableSmallerElements(double a[], int num, double target)
{
        int same = 0;
        int i;

        for (i = 0; i < num; i++)
        {
        if(a[i] < target)
        same++;
        }
        return same;        /* number of values equal to the target */
}

