/* File : trig.c                     *
 * By : Blaine Furman                *
 * login: bfurman                    *
 * team : XxFazeClan420xX            *
 * Date :4/4/18                      *
 * Members: Blaine Furman            */ 
/* This function is for converting sin() to angles*/

#include <stdio.h>
#include "trig.h"
#include "util.h"
#include "exponent.h"
/*#define DEBUG*/

double Sin(float num)
{
float count;
float result;
float value;
float total;
float numer;
int exp = 1;
float denom;
int count2 = 1;
int flag;
float old;
float diff;

result = 1;
count = 1;
total = 0;
flag = TRUE;
old = 0;

while(flag != FALSE)
	{
	/*Get the numerator*/
	numer = pos_power(num, count);
#ifdef DEBUG
printf("your numerator is %f\n", numer);
#endif
	/*Get the denominator*/
	denom = factorial(count);
#ifdef DEBUG
printf("your denominator is %f\n", denom);
#endif
	/*get the value for this value*/
	if((count2 % 2) == 0)
	{
	value = (((-1) * numer) / denom);
#ifdef DEBUG
printf("here in positive value is %f\n", value);
#endif
	old = value + old;
	}
	if((count2 % 2) == 1)
	{
	value = (numer / denom);
#ifdef DEBUG
printf("here in negative value is = %f\n", value);
#endif
	diff = value - old;
	}
#ifdef DEBUG
printf("old is %f", value);
#endif
	
	/*printf("diff is %f", diff);*/

	if(diff <= 0.00005)
	{
		flag = FALSE;
	}


	old = value;

	/*Increment count/total*/
	count = count + 2;
	total = value + total;
	++count2;
	}

	return total;


}
