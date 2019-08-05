/*      File : driver1.c       *
 *      By   : Blaine Furman    *
 *      login: bfurman, jpaust  *
 *      team : XxFazeClan420xX  *
 *      Date : 2/25/2018        */

/*  To compute the exponent of a values entered */

#include <stdio.h>
/* #define DEBUG */
#define PROMPTS
#define TRUE 1.0
#define FALSE 0.0

int is_leap(int year);

int main()
{
int year;
int value;

	#ifdef PROMPTS
	printf("Welcome to our leap year program\n");
	printf("Enter your years here(0 to quit)");
	#endif
	scanf("%d", &year);

	while(year > 0)
	{
	value = is_leap( year);
	if(value == 1){
	#ifdef PROMPTS
	printf("Congrats, your number is a leap year\n");
	#endif
		      }
	else if (value == 0){
	#ifdef PROMPTS
        printf("Darn, your number is not a leap year\n");
        #endif
			    }

	#ifdef PROMPTS
	printf("Enter your years here(0 to quit)");
	#endif
	scanf("%d", &year);
	}
}

int is_leap(int year)
{
int value = 0;

	if(year % 4 == 0)
	return TRUE;
	else
	return FALSE;

}
