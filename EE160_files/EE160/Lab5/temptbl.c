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
	float temp_count;

	printf("Welcome to my temperature conversion program.\n");
	/*entering the start Fahrenheit*/
	printf("Enter your start, stop, and ");
	printf("step Fahreheit here (EOF to exit)");
/*	printf("start stop step"); */
/*	Entering start, stop and step fahrenheits*/
	end = scanf("%f %f %f", &start, &stop, &step);

	/*the formula to convert start Fahrenheit to celcius*/
    	tocelcius = (start - minus_fahrenheit ) * ((float)5/(float)9);
	/* printf("tocelius = %f", tocelcius);*/
	float fahrenheit (float stop, float start); 
	/*protoyping statement*/
    while (end != EOF ){
	temp_count = 0;
/* start conversion when step is greater that 0.001*/
    if(step >= 0.001){

		if(stop <= start){
	/*Evaluating stop to start table when true*/
			while(start >= stop){

		stop = stop + step;
		tocelcius = (stop - minus_fahrenheit ) * ((float)5/(float)9);

		printf("%f %f\n", stop, tocelcius);
		temp_count = 1 + temp_count;
					    }
		printf("Computed %.0f temperatures\n", temp_count);
				}
		else if(stop >= start){
        /*Evaluating start to stop table when true*/
                        while(start <= stop){

                start = start + step;
                tocelcius = (start - minus_fahrenheit ) * ((float)5/(float)9);

                printf("%f %f\n", start, tocelcius);
		temp_count = 1 + temp_count;
                                            }
		printf("Computed %.0f temperatures\n", temp_count);
                                }

 			}
	/*Showing that steps smaller that 0.001 aren't allowed*/
        else printf("No table--step smaller than 0.001!\n");
	/*Reask for start stop and step values*/
	printf("Enter start, stop and step:");
        end = scanf("%f %f %f", &start, &stop, &step);
    }
    printf("\n");
}



