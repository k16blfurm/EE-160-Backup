
/* File:  calc.c          *
 * by:    Blaine Furman   *
 * login: bfurman         *
 * team : XxFazeClan420xX *
 * Date : 4/11/18         *
 * Members: Blaine Furman */
/*  This file contains the entirety of all four drivers in one that can 
computer basic calculations (full calculator)*/

#include <stdio.h>
#include "display.h"
#include "exponent.h"
#include "opnd.h"
#include "chrutil.h"
#include "presults.h"
#include "ops.h"
#include "compute.h"
/*#define DEBUG*/
/*#define DEBUG2*/
/*#define FINAL*/
/*#define FINAL2*/
/*#define FINAL1*/

int main()
{
    char ch;
    int old = 0;
    int base;
    int	 ans;
    int prev;
    char op;
    char base1;
    char expon;
    char total_expon;
    int conv, flag;
    int flag1;
    int flag2;
    int more;

    /*  Initialize the dispaly with a message  */
    write_message("A Simple Calculator");

    /*initialize variables*/
    flag1 = flag2 = FALSE;
    more = FALSE;

    /*Get first character*/
    ch = getchar();

    /*Quit if user wants to*/
    if(ch == 'q')
    {
    write_char(ch);
    return 0;
    }

    /*If invalid character, wait for next input*/
    while((ch < '0' || ch > '9') && ch != 'q')
        ch = getchar();

    /*While there are more calculations*/
    while(ch != 'q')
    {

        /*While there are more numbers in the equation*/
	while(ch != '=' && ch != 'q')
	{
        /*filter through garbage characters*/
        while((ch < '0' || ch > '9') && ch != 'q')
            ch = getchar();

	/*calculate for the first operand*/
        base = flag = get_opnd(ch);
        /*Quit if user wants to*/
        if(flag == 'q')
        {
            ch = 'q';
            /*write the quit to the display (quit program)*/
            write_char(ch);
            return 0;
        }

	/*compute if more than one operator*/
        if(more == TRUE)
        {
#ifdef FINAL1
	printf("here with ans %d, base %d", ans, base);
#endif
	/*Compute value*/
        ans = compute_result(ans, op, base);
      	}

	/*get the results if two operators*/
	if(flag1 == TRUE)
	{
#ifdef FINAL
	printf("here with previous %d, base %d\n", prev, base);
#endif
	/*Compute value*/
	ans = compute_result(prev, op, base);
#ifdef FINAL
printf("ans is %d", ans);
#endif
	/*flags for more operators*/
	more = TRUE;
	flag1 = FALSE;
	}

	/* save the old operand if first value*/
	if(flag1 == FALSE && flag2 == FALSE)
	{
#ifdef FINAL
	printf("here with previous %d, base %d\n", prev, base);
#endif
	prev = base;
	}

	/*if second operator, save first two operator's values*/
	if(more == TRUE)
	prev = ans;

	/*get next character*/
        ch = getchar();

        /*filter throught unwanted characters*/
        while(ch != '+' && ch != '-' && ch != 'x' && ch != '/' && ch != '=')
        {
	/*if quit, quit the program*/
      	if(ch == 'q')
        {write_char(ch);
        return 0;
        }
        ch = getchar();
        }

	/*if only one operator, return value*/
	if(ch == '=' && flag2 == FALSE )
	{ans = base;}

	/*flag for more than one operator*/
        if(more == FALSE)
	flag2 = TRUE;
        flag1 = TRUE;

	/* save the operator */
        op = ch;
	/*write operator to the display*/
        write_char(op);

	}
	
#ifdef FINAL2
printf("num is %d\n", ans);
#endif

	/*Display the result*/
	put_result(ans);

	/*Wait for user to clear the screen*/
	while(ch != 'q' && ch != '\r')
	ch = getchar();

	/*clear old answer*/
	ans = 0;

        /*Display a new screen*/
        write_char(ch);


	/*clear all old flags/numbers*/
	prev = 0;
	flag1 = FALSE;
	flag2 = FALSE;
	more = FALSE;

    }
	
}
