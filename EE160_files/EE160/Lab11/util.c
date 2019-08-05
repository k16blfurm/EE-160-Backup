
/*    File: exp.c
      by:   Tep Dobry
      login: tep
      date:
      Mod:
*/

/*  This file contains support functions.  */

#include <stdio.h>
#include "util.h"
#include "exp.h"


float factorial( float n)
/*  Given:  and integer, n
    Returns:  n!
*/
{  float count;		/*  loop counter  */
   float result = 1;	/*  result        */

   count = 1;
     /*  for each integer from 1 to n  */
     while(count != n)
        { result = result * count;
	  count = count + 1;
	}
	result = result * count;
	return result;
	  /* multiply the next integer  */
}

int close_enough(double x, double y)
/*  Given:  two doubles
    Returns:  True if they are within some ERROR of each other
              False otherwise
*/
{
     if(absolute(x-y) < ERROR)
          return TRUE;
     return FALSE;
}

double absolute(double x)
/*  Given:  a double
    Returns: the absolute value
*/
{
     if( x < 0 )
          return -x;
     return x;
}
