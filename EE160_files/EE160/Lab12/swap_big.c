/*	File:  swap_big.c
	by:    Blaine Furman
	date: 4/16/18
	team: XxFazeClan420xX
	login: bfurman
	mod :
*/

/*  This file contains the functions used to look at pointers
*/

#include <stdio.h>
#include "swap_big.h"
#include "swap.h"
/*#define DEBUG*/

void swap_big(float *a, float *b)
{

#ifdef DEBUG
	printf("value *a is %f, value *b is %f\n", *a, *b);
#endif
	if(*a > *b)
	{
#ifdef DEBUG
	   printf("a is greater that b\n");
#endif
	/*swap the variables*/
	swap( a, b);
	}
	if(*b > *a)
	{
#ifdef DEBUG
	  printf("b is greater than a\n");
#endif
	}

}
