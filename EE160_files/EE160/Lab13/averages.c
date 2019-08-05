/*
 * A program to read values, compute their averages, and to print
 * the values greater than or less than the average.
 */
#include <stdio.h>
#include "table.h"

#define MAXVALS 100       /* max number of values we can process */

int tableFill(double a[], int max);
void tablePrintlarge(double a[], int num, double average);
void tablePrintsmall(double a[], int num, double average);
double tableAverage(double a[], int num);
int tableMatchingElements(double a[], int num, double target);

int main()
{

  double table[MAXVALS];     /* array to hold input values */
  int n;                     /* number of values in "table" */
  double average;            /* average input value */
  int equal;                 /* number of values the same as average */
 
	n = tableFill(table, MAXVALS);
	average = tableAverage(table, n);
	printf("Average of the %d values read is: %lf\n", n, average);
	equal = tableMatchingElements(table, n, average);
	printf("There are %d values equal to the average.\n", equal);
	printf("The values greater than the average:\n");
	tablePrintlarge(table, n, average);
	printf("The values less than the average:\n");
	tablePrintsmall(table, n, average);
}
