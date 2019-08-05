/*      File : exponent.c       *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 2/25/2018        */

/*  To compute the exponent of a values entered */

#include <stdio.h>
/* #define DEBUG */

float pos_power(float base, int exponent);

int main()
{
float base;
int exponent, end;
int value;

/*Prompt the user to enter the base and exponent value*/
printf("Welcome to my exponent program\n");
printf("Enter your base and exponent here:\n");
printf("Example:(2 3) (2 being the base and 3 being the exponent)\n");
/*Initial values*/
end = scanf("%f %d", &base, &exponent);

while( end != EOF)
	{
#ifdef DEBUG
printf("debug:Enter pos_power: base = %f exponent= %d\n", base, exponent);
#endif
	/*calculate for the exponent*/
	value = pos_power( base, exponent);
	/*Show the user the value calculated*/
	printf("Value is %d\n", value);
	/*Reenter the values*/
	end = scanf("%f %d", &base, &exponent);
#ifdef DEBUG
printf("debug:Exit pos_power: result = %f\n", value);
#endif
	}

}
/*
float pos_power(float base, int exponent)
{
int value = 0;
int exponent_loop = 0;

	if(exponent < 0)
	return  0;
	else if(exponent > 0)
	{
		value = 1;
		while(exponent_loop != exponent)
		{
		value = (base * value);
		exponent_loop = exponent_loop + 1;
	}
		}
	return value;
}
*/
