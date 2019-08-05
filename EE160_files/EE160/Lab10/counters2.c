/*      File : counters.c       *
 *      By   :                  *
 *      login:                  *
 *      team :                  *
 *      Date :                  */

/*
 * A set of counting functions written using while loops.
 */

#include <stdio.h>

void count_up(int n);
void count_down(int n);
void count_some(int start, int finish, int incr);

int main()
{
        count_up(10);            /* count up from 1 to 10  */
        count_down(10);          /* count down from 10 to 1 */
        count_some(5, 15, 3);    /* count from 5 to 15 by 3 */
        count_some(15, 5, -3);   /* count from 15 to 5 by -3 */

}

void count_up(int n)
{
  int i;

        for (i = 1; i <= n; i = i + 1)
        { 
                printf("%d\n", i);
        }
}

void count_down(int n)
{
  int i;

        for (i = n; i >= 1; i = i - 1)
        { 
                printf("%d\n", i);
        }
}

void count_some(int start, int finish, int incr)
{
        if (incr == 0)
                return;           /* do nothing if no increment */
                /* count up */
        if( incr > 0 ){
	for (incr > 0; start <= finish; start += incr)
           { 
              printf("%d\n", start);
           } return;
	}
        /* count down  */
	if(incr < 0){
        for (incr < 0; start >= finish; start += incr)
           { 
                printf("%d\n", start);
           } return;
	            }
}
