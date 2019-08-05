/*      File : countup.c        *
 *      By   : Blaine Furman, Jared Austria  *
 *      login: bfurman, jpaust  *
 *      team : XxFazeClan420xX  *
 *      Date : 2/10/18
 *     Members:	Blaine Furman, Jared Austia  */

/*  A program to count from 1 to 20, one per line  */
#include <stdio.h>

int round_to_int(float value);

int main()
{
	int round_to_int;
	float value;

	printf("Welcome to our float to int conversion program\n");
	printf("Enter your float number here:");
	scanf("%f", &value);

	while( value != 0){

	round_to_int = value + 0.5;

	printf("Here is your rounded float number: %d \n", round_to_int);

	printf("Enter your float number here:");
       	scanf("%f", &value);
}}
