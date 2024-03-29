/*	File:  roman.c
	by:    Tep Dobry
	date:
	mod :
*/

/*  This file contains the functions used to read and convert a number
	in roman numerals.
*/

#include <stdio.h>
#include "roman.h"
#include "romanutil.h"

int get_roman(void)
/*  This function reads the next number in roman numerals from the input
	and returns it as an integer  */
{  char rdigit;
   int  num = 0;
   int  dig_value, last_dig_value = M;

	/*  get the first digit  */
	rdigit = getchar();
	/*  while it is a roman digit  */

	while( is_roman(rdigit))
	{	
		/*  convert roman digit to its value  */
		dig_value = convert_roman(rdigit);
		/*  if previous digit was a prefix digit  */
		if(dig_value > last_dig_value){
			/*  adjust total  */
			if((rdigit == '\t') || (rdigit ==  ' '))
			num = num;
			else 
			num = num - 2 * last_dig_value + dig_value;}
		/*  otherwise accumulate the total  */
		else num = num + dig_value;
		/*  save this digit as previous  */
		last_dig_value = dig_value;
		/*  get next digit  */
		rdigit = getchar();
	}

	/*  return EOF if detected  */
	if(rdigit == EOF) return EOF;

	/*  return the number  */
	return num;
}


