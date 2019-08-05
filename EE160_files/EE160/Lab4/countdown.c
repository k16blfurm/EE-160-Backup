/*      File : countdown.c      *
 *      By   :                  *
 *      login:                  *
 *      team :                  *
 *      Date :                  */

/*  A program to count from 10 down to 1, one per line and print "blastoff"  */
#include <stdio.h>
int main()
{
	int count; /* I had to add int count to the top of this argument because it wasn't properly initializing it*/

        count = 10;

        while( count >= 0)
        {
                printf("%d\n", count);
		count = count - 1; /* I had to add this line because if I didn't the program would continously loop. After adding this line, the program continous to substract 1 until it gets to zero, printing Blastoff.*/

        }
        printf("BLASTOFF!\n");

}

