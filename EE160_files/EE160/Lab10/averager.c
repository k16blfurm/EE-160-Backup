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
/*#define DEBUG*/

int main()
{
  int expected;
  int count;
  double sum;
  int value;
  int result;
  int flag;

	flag = scanf("%d", &expected);

        while (flag != EOF && flag != 0)
        {
#ifdef DEBUG
		printf("expected = %d\n", expected);
#endif	
                sum = 0;
		count = 1;

		result = scanf("%d", &value);
#ifdef DEBUG
printf("value is %d", value);
#endif
                while (count < expected && result != 0)
                {
			sum += value;
			count++;
			result = scanf("%d", &value);
#ifdef DEBUG
printf("value is %d", value);
#endif
	        }
		sum += value;
		if(result == 0)
		{
		printf("Error!  Can't read expected value #%d", count);
		break;
		}

                printf("Average of %d values is %.2f\n",
                       count, count != 0 ? sum / count : 0.0);

		flag = scanf("%d", &expected);
        }
  
	if(flag == 0)
		printf("Error!  Can't read number of expected values.");
}
