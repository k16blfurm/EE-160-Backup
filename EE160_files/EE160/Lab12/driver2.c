
/* File:  driver2.c       *
 * by:    Blaine Furman   *
 * login: bfurman         *
 * team : XxFazeClan420xX *
 * Date : 4/18/18         *
 * Members: Blaine Furman */
/*  This file contains the driver for swaping three pointers to increasing 
order*/

#include <stdio.h>
#include "swap.h"
#include "swap_big.h"
#include "reorder.h"
#define DEBUG
/*#define PROMPT*/

void reorder(float *a, float *b, float *c);

int main()
{
float a;
float b;
float c;
int flag;

#ifdef PROMPT /*Prompt user to enter value*/
printf("Enter in your floats here(EOF to quit)\n");
#endif

/*Initialize flag*/
flag = scanf("%f %f %f", &a, &b, &c);

        /*While not end of file*/
        while(flag != EOF)
           {
           /*Send the pointers to be swapped*/
           reorder( &a, &b, &c);

#ifdef DEBUG
printf("float *a is %f, float *b is %f\n, float *c is %f\n", a, b, c);
#endif

           #ifdef PROMPT /*Prompt user to enter value*/
           printf("Enter in your floats here(EOF to quit)\n");
           #endif

           /*Get next values*/
           flag = scanf("%f %f %f", &a, &b, &c);
           }









}
