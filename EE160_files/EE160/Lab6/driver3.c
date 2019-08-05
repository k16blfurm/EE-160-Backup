/*      File : driver3.c        *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 2/25/2018        */

/*  Driver for exponents: calculates the exponent value for only 
positive values */

#include <stdio.h>

float pos_power(float base, int exponent)
{
int value = 0;
int exponent_loop = 0;

	/*The values that are negative we don't compute*/
        if(exponent < 0)
        return  0;
	/*While exponent value entered is postive, we compute the value*/
        else if(exponent > 0)
        {
                value = 1;
                while(exponent_loop != exponent)
                {
                value = (base * value);
                exponent_loop = exponent_loop + 1;
        }
                }
	/*Finish with sending the value to the other tile*/
        return value;
}

