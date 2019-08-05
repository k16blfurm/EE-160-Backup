/*      File : temperature.c    *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 1/28/2018        */

/*  To convert Fahrenheit to Celcius*/

#include <stdio.h>
 

int main()
{  /*  program constants   */
/*	float Fahrenheit; */
	float Celsius;
	float minus_fahrenheit = 32;
	float division = .5555556;
	float tocelcius;
	float Fahrenheit;

	printf("Welcome to my temperature conversion program.\n");
	/*Entering your Fahrenheit*/
	printf("Enter your Fahreheit here (Enter below -500 to exit):");
	/*Inputing Fahrenheit from user to a number*/
	scanf("%f", &Fahrenheit);

	float tocelius(float Fahrenheit); /*prototyping statement*/

	/*while loop for Fahrenheit to continue to loop until -500 or less
	is entered*/
	while (Fahrenheit > -500){

	/*formula for conversion of Fahrenheit to Celcius*/
	tocelcius = ( Fahrenheit - minus_fahrenheit ) * ((float)5/(float)9);
	/*Printing the conversion*/
	printf("\nHere is your conversion:%f\n", tocelcius);
	/*Loop back for entering Fahrenheit again*/
	printf("Enter your Fahrenheit here (Enter below -500 to exit:");
	scanf("%f", &Fahrenheit);
}
	}

