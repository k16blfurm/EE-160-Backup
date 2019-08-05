/*      File : countup.c        *
 *      By   :                  *
 *      login:                  *
 *      team :                  *
 *      Date :                  */

/*  A program to count from 1 to 20, one per line  */
#include <stdio.h>

int main()
{
  int count;

	count = 1;
	while (count < 21) /* I needed to switch 20 to 21 to be able to show the number 20 because the program stops at 19*/
	{
		printf("%2d\n", count); /* I also needed to add a line break so that whenever the loop continued, the number would keep starting on a new line*/
		count = count + 1;
	}
}
