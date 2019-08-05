/* File : driver4.c                  *
 * By : Blaine Furman                *
 * login: bfurman                    *
 * team : XxFazeClan420xX            *
 * Date :4/10/18                      *
 * Members: Blaine Furman            */ 
/* This driver is for testing the sin value evaluator*/

#include <stdio.h>
#include "trig.h"
#include "exponent.h"
#include "util.h"
/*#define DEBUG*/

double Sin(float);

int main()
{
float num;
float value;
int flag;


/*Welcome user to program and prompt them to enter a value*/
printf("Welcome to my sin evaluator program\n");
printf("Enter in your angle you would like to find:");
flag = scanf("%f", &num);

	/*While not done with angles*/
	while(flag != EOF)
	{
	value = Sin(num);
	/*Show user value in radians*/
	printf("Your radians are  %f\n", value);

	/*Prompt the user for the next value*/
	printf("Enter in your angle you would like to find:");
	flag = scanf("%f", &num);
	}

	printf("\n");

}
