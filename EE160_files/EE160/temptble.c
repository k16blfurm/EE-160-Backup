/*      File : temperature.c    *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 1/28/2018        */

/*  To compute the statistics of cost operating a car each time a user fills
 up gas */

#include <stdio.h>

float tocelius(float Fahrenheit);
int temptable(float start, float stop);

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
	printf("Enter your start Fahreheit here (Enter two same tempetures");
	printf(" to exit):");
	scanf("%f", &start);
	printf("Now the stop Fahrenheit.\n");
	scanf("%f", &stop);

float fahrenheit (float stop, float start);
	while (start < stop){
    	tocelcius = ( Fahrenheit - minus_fahrenheit ) * ((float)5/(float)9);
        start = start + 5;
        
        printf("%f", start);
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
