/*      File : temperature.c    *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 1/28/2018        */

/*  To compute the statistics of cost operating a car each time a user fills up gas */

#include <stdio.h>
#define A = 32
#define B = 5
#define C = 9

int main(void)

{  /*  program constants   */
	float Fahrenheit;
	float Celsius;
	float minus_fahrenheit = 32;
	float division = .5555556;
	float tocelsius(float Fahrenheit, A, B, C); /*addition of the tocelsius line*/
/*
	float a = 32;
	float b = 5;
	float c = 9;
*/	
	tocelsius = (Fahrenheit - A) * ( B / C);
	printf("Welcome to my temperature conversion program.\n");
	printf("Enter your Faherheit here:"); 
	scanf("%f", &Fahrenheit);
	
	while (Fahrenheit >= -499) {
	
	if (Fahrenheit >= -499)
		printf("Your fahrenheit is %f celcius", tocelsius);
		} 
	
	/*Old Program code
	Celsius = ( Fahrenheit - (float)32 ) * ((float)5/(float)9);
	*/
}

