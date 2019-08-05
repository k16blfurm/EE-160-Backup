/* File : ops.c                      *
 * By : Blaine Furman                *
 * login: bfurman                    *
 * team : XxFazeClan420xX            *
 * Date : 4/5/18                     *
 * Members: Blaine Furman            */ 
/* Function to check if input is a valid operator and returns it as a 
character.*/

#include <stdio.h> 
#include "ops.h"
/*#define DEBUG*/

char get_op(void)
{
/*  This function reads the operator character from the input
        and echos it to dispaly.  It checks the validity of the
        operator and returns it as a character.
*/

char c;

/*Get operator*/
c = getchar();

#ifdef DEBUG
printf("operator is %c", c);
#endif

/*Flush garbage inputs*/
while(c == '\r')
c = getchar();

	/*If operator is invalid*/
	if(ILLEGAL_OP(c))
	   {
	   /*Return false*/
	   return FALSE;
	   }
	else
	{
	   /*If valid, return true*/
	   return c;
#ifdef DEBUG
	   printf("operator from ops.c %c", c);
#endif
	}
}
