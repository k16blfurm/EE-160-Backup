/*      File : temperature.c    *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 1/28/2018        */

/*  To compute the statistics of cost operating a car each time a user fills
 up gas */

#include <stdio.h>
/* #define DEBUG */ 
#define FALSE 2.0
#define TRUE 1.0

float max(float a, float b);
float min(float a, float b);

int main()
{
	float n1, n2;
	int end1; 
	float end2;
	float value;

	/*Welcoming the user to the program*/
	printf("Welcome to my max and min program\n");
	printf("Enter two values to see which ones are bigger than the other\n");
	printf("example: 6 7\n");
	/*User entering the initial values*/
	end1 = scanf("%f %f", &n1, &n2); 

	while(end1 != EOF )
	{
		/*Sorting the values entered*/
		value = max( n1, n2);
		if(value == TRUE){
		/*showing the user which number is greater*/
		printf("The maximum number is %f and min is %f\n", n2, n1 );
		}
		else if(value == FALSE){
		/*showing the user which number is greater*/
		printf("The maximum number is %f and min is %f\n", n1, n2 );
		}
#ifdef DEBUG
printf("value is %f\n", value);
#endif
	float min(float n1, float n2);
		/*Sorting the values entered*/
		if(value == TRUE){
		 /*showing the user which number is less*/
        	printf("The minimum number is %f and max is %f\n", n1, n2 );
        	}
		else if(value == FALSE){
		 /*showing the user which number is less*/
                printf("The minimum number is %f and max is %f\n", n2, n1 );
                }
#ifdef DEBUG
printf("value is %f\n", value);
#endif 
	/*Reinitialize numbers*/
	printf("Enter two values to see which ones are");
	printf(" bigger than the other\n");
	end1 = scanf("%f %f", &n1, &n2);
	}
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

