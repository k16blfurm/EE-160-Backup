/*      File : averager.c       *
 *      By   :                  *
 *      login:                  *
 *      team :                  *
 *      Date :                  */

/*
 * Read in a number of values to read and then print the average
 * of those values.
 */

#include <stdio.h>

int main()
{
  int expected;
  int count;
  double sum;
  int value;

        while (scanf("%d", &expected) != EOF)
        {
                sum = 0;
                for (count = 0; count < expected; count++)
                {
                        scanf("%d", &value);
                        sum += value;
                }
                printf("Average of %d values is %.2f\n",
                       count, count != 0 ? sum / count : 0.0);
        }
  
}
