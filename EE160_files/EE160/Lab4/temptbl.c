/*      File : temptble.c       *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 1/28/2018        */

/* To calculate the tempeture to celcius of a start and stop temperature
while also make a table of it from start to stop in increments of 5 degrees
Fahrenheit*/

#include <stdio.h>

float tocelius(float );
int temptable(float, float);

int main()
{  /*  program constants   */
/*	float Fahrenheit; */
	float Celsius;
	float minus_fahrenheit = 32;
	float division = .5555556;
	float tocelcius;
	int Fahrenheit;
	float start, stop;

	printf("Welcome to my temperature conversion program.\n");
	/*entering the start Fahrenheit*/
	printf("Enter your start Fahreheit here (Enter two same tempetures");
	printf(" to exit):");
	scanf("%f", &start);
	printf("Now the stop Fahrenheit.\n");
	/*entering your stop Fahrenheit*/
	scanf("%f", &stop);

	/*the formula to convert start Fahrenheit to celcius*/
    tocelcius = (start - minus_fahrenheit ) * ((float)5/(float)9);
	/* printf("tocelius = %f", tocelcius);*/
float fahrenheit (float stop, float start); 
	/*protoyping statement*/

	while (start < stop){

	/*loop for the start Fahrenheit to keep adding 5 until reaching 
	the stop Fahrenheit*/
	start = start + 5;
	tocelcius = tocelcius + 2.7777777;
	/*magic number to continously add to celcius (by 2.777777 which is
	the increment of celcius per 5 Fahrenheit) and stop looping 
	when start Fahrenheit = stop Fahrenheit*/
	printf("%f %f\n", start, tocelcius);
    }
}


/* Algorithms for this program

1. Scanf the starting and stopping tempetures
2. Convert Fahrenheit to celcius with tocelius driver.
3. Assign numbers to variables.
4. Make start printf of table with starting temperature of celcius and 
fahrenheit
5. loop add 5 to fahrenheit until it reaches the stop temperature and print
the converstion of that to  the celsius conversion.
*/
