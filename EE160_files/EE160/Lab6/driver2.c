/*      File : driver2.c        *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 2/25/2018        *

To get the maximium and minimum of values entered*/

#include <stdio.h>
/* #define DEBUG */ 
#define FALSE 2.0
#define TRUE 1.0

float max(float a, float b);
float min(float a, float b);
int main()
{
float numbers;
float max1;
float min1;
float value;
int end;

/*Prompt the user to start entering their numbers*/
printf("Welcome to the min and max program I created:\n");
printf("Enter your numbers(EOF to Quit)\n");
end = scanf("%f", &numbers);
/*Initialize the original number */
min1 = numbers;
max1 = numbers;

while (end != EOF)
	{
	/*Makes the number entered by user the max one if larger than
	the previous numbers entered*/
	if (numbers > max1){
	value = max( numbers, max1);
	if (value == FALSE)
	max1 = numbers;
	}
	/*Makes the number the minimium when the opposite is true*/
	else if (numbers < min1){
	value = min( numbers, min1);
	if (value == TRUE)
	min1 = numbers;
	}
#ifdef DEBUG
 printf("min value is %f and max is %f\n", min1, max1);
#endif
	/*User enters another number*/
	end = scanf("%f", &numbers);
	}
	/*Show the user what the maximium and minimium numbers 
	were entered*/
	printf("maximum is %2.1f and minimum is %2.1f\n", max1, min1);
}

/*
float max(float a, float b)
{
	if(a < b)
	return TRUE;
	else
	return FALSE;
}

float min(float a, float b)
{
	if(a < b)
	return  TRUE;
	else
	return  FALSE;
}
*/
