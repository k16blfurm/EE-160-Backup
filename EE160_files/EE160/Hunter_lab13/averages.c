/* file: averages.c      *
   by: Hunter Garrett    *
   login: hsgarr97       *
   date: 11/28/17        *
   team: coca_cola       *
*/

/*
 * A program to read values, compute their averages, and to print
 * the values greater than or less than the average.
 */

#include <stdio.h>
#include "avgutil.h"

int main()
{

  double table[MAXVALS];     /* array to hold input values */
  int n;                     /* number of values in "table" */
  double average;            /* average input value */
  int equal;                 /* number of values the same as average */
  int large;		     /* number of values larger than average */
  int small;		     /* number of values smaller than average */
 
	n = tableFill(table, MAXVALS);
	average = tableAverage(table, n);
	printf("Average of the %d values read is: %lf\n", n, average);
	equal = tableMatchingElements(table, n, average);
	printf("There are %d values equal to the average.\n", equal);

	large = tableLargerElements(table, n, average); 
	printf("There are %d values greater than the average:\n", large);
	tablePrintIfLarger(table, n, average);

	small = tableSmallerElements(table, n, average);
	printf("There are %d values less than the average:\n", small);
	tablePrintIfSmaller(table, n, average);
}
