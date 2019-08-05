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
int temptable(float, float, float);

int main()
{  /*  program constants   */
/*	float Fahrenheit; */
	float Celsius;
	float minus_fahrenheit = 32;
	float division = .5555556;
	float tocelcius;
	int Fahrenheit;
	float start, stop, step;
	float end;

	printf("Welcome to my temperature conversion program.\n");
	/*entering the start Fahrenheit*/
	printf("Enter your start, stop, and ");
	printf("step Fahreheit here (Enter two same tempetures to exit)");
	end = scanf("%f %f %f", &start, &stop, &step);
	/*entering your stop Fahrenheit*/

	/*the formula to convert start Fahrenheit to celcius*/
    	tocelcius = (start - minus_fahrenheit ) * ((float)5/(float)9);
	/* printf("tocelius = %f", tocelcius);*/
	float fahrenheit (float stop, float start); 
	/*protoyping statement*/

	while (end != EOF ){
	if(step > 0.001){

	if(stop < start){
	/*loop for the start Fahrenheit to keep adding by the step
	 until reaching the stop Fahrenheit*/
	while(stop >= start){
	start = start + step;
	tocelcius = (start - minus_fahrenheit ) * ((float)5/(float)9);
	printf("%f %f", start, tocelcius);
	}
	}
/*
	if(stop > start){
	printf("%f %f\n", start, tocelcius);
	}*/
	else printf("No table--step smaller than 0.001!");
 	}
    }
}


/* Algorithms for this program

1. Scanf the starting and stopping temperatures
2. Convert Fahrenheit to celcius with tocelius driver.
3. Assign numbers to variables.
4. Make start printf of table with starting temperature of celcius and 
fahrenheit
5. loop add 5 to fahrenheit until it reaches the stop temperature and print
the converstion of that to  the celsius conversion.
*/
