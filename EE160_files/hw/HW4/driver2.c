/* File:  driver2.c       *
 * by:	  Blaine Furman   *
 * login: bfurman         *
 * team : XxFazeClan420xX *
 * Date : 3/11/18
 * Members: Blaine Furman */

/*  This file contains a test driver for experimenting with
	the exponent values of the calculator with the display
*/

#include <stdio.h>
#include "display.h"
#include "exponent.h"
#include "opnd.h"
#include "chrutil.h"
#define DEBUG
/*#define DEBUG2*/

int main()
{
char ch;
int old = 0;
int base;
char base1;
char expon;
char total_expon;
int conv, flag;

	/*  Initialize the dispaly with a message  */
        write_message("Display Test");

	/*Get the first character*/
	ch = getchar();

	/*If character not valid, continue getting character*/
	while((ch < '0' || ch > '9') && ch != 'q')
        ch = getchar();
       /*While not quiting program*/
       while(ch != 'q')
       {
	
	/*filter through characters*/
        while((ch < '0' || ch > '9') && ch != 'q')
        ch = getchar();

#ifdef DEBUG2 
	printf("this is the character %c", ch);
#endif
	/*Calculate base*/
	base = flag = get_opnd(ch);
#ifdef DEBUG
	/*print the results*/
	if(flag != 'q')
        printf("num is %d\n", base);
#endif
	/*if user entered quit, quit program*/
	if(flag == 'q')
	{
	ch = 'q';

	/*write the quit to the display*/

	write_char(ch);
	return 0;
	}
	/*Wait for user to clear the screen*/
        while(((ch = getchar()) != '\r') && (ch != 'q'))
	{
#ifdef DEBUG2
	printf("ch is %c", ch);
#endif
        ch = getchar();
	}

	/*Clear the screen*/
        write_char(ch);

	}
}
