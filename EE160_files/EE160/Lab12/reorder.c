
/* File:  reorder.c       *
 * by:    Blaine Furman   *
 * login: bfurman         *
 * team : XxFazeClan420xX *
 * Date : 4/18/18         *
 * Members: Blaine Furman */
/*  This file contains the the function for reordering three pointers in 
decreasing order*/

#include <stdio.h>
#include "reorder.h"
#include "swap_big.h"

void reorder(float *a, float *b, float *c)
{

	if(*a > *b)
		swap_big(a, b);
	if(*a > *c)
	        swap_big(a, c);
	if(*b > *c)
		swap_big(b, c);

}
