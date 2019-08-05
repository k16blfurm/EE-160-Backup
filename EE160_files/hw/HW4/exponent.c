/* File : exponent.c                 *
 * By : Blaine Furman                *
 * login: bfurman                    *
 * team : XxFazeClan420xX            *
 * Date : 3/11/18
 * Members: Blaine Furman            */ 
/* A program to count from 1 to 20, one per line */
#include <stdio.h>
#include "exponent.h"

int is_exp(char ch)
{
/*  This function is given a character and returns true if it
	is a legal shifted exponent character, false otherwise.
*/
switch(ch)
{   case '!': 
    case '@':
    case '#':
    case '$': 
    case '%':
    case '^':
    case '&':
    case '*':
    case '(': 
    case ')': return TRUE;
    default:  return FALSE;
}

}

char exp_value(char ch)
{
/*  This function is given a legal shifted exponent character and converts
	it to its unshifted form, returning the cnverted character.
*/

switch(ch)
{    case '!': return '1';
     case '@': return '2';
     case '#': return '3';
     case '$': return '4';
     case '%': return '5';
     case '^': return '6';
     case '&': return '7';
     case '*': return '8';
     case '(': return '9';
     case ')': return '0';
}

}

float pos_power(float base, int exponent)
{
/*  This function is given a float base and integer exponent and
	raises the base to the exponent, returning the float result.
*/
int total;
int count = 2;

total = base;

while(count <= exponent)
{
	total = (base) * total;
	count++;
}
return total;
}
