/* File : driver4.c                  *
 * By : Blaine Furman                *
 * login: bfurman                    *
 * team : XxFazeClan420xX            *
 * Date :4/4/18                      *
 * Members: Blaine Furman, Jared Austria*/ 
/* This driver is for testing the digit to integer conversion for the 
calculator program*/

#include <stdio.h>
#include "presults.h"
#include "display.h"
#include "chrutil.h"
/*#define DEBUG*/

int main()
{
long num;
int flag;

	/*Prompt the user to enter in first number*/
	printf("Enter integers (EOF to quit):");

	/*Get first number*/
	flag = scanf("%d", &num);
#ifdef DEBUG
printf("number is %d", num);
#endif
	/*While more numbers to convert*/
	while(flag != EOF)
	{

	/*put the numbers in characters on the display*/
	put_result(num);
	/*clear the line*/
	printf("\n");

	/*Get next number*/
	flag = scanf("%d", &num);

	}

	printf("\n");
}
