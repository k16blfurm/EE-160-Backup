/*	File:  driver1.c
	by:    Tep Dobry
	date:
	mod :
*/

/*  This file contains the driver for swaping pointers
*/

#include <stdio.h>
#include "swap_big.h"
/*#define PROMPT*/
#define DEBUG

int main()
{
float a;
float b;
int flag;

#ifdef PROMPT /*Prompt user to enter value*/
printf("Enter in your floats here(EOF to quit)\n");
#endif

/*Initialize flag*/
flag = scanf("%f %f", &a, &b);

	/*While not end of file*/
	while(flag != EOF)
	   {
	   /*Send the pointers to be swapped*/
	   swap_big( &a, &b);

#ifdef DEBUG
printf("float *a is %f, float *b is %f\n", a, b);
#endif

	   #ifdef PROMPT /*Prompt user to enter value*/
	   printf("Enter in your floats here(EOF to quit)\n");
	   #endif

	   /*Get next values*/
	   flag = scanf("%f %f", &a, &b);
	   }


}
