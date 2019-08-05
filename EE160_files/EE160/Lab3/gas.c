/*      File : cars.c           *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 1/28/2018        */

/*  To compute the statistics of cost operating a car each time a user fills up gas */

#include <stdio.h>
int main()
{  /*  program constants   */
	float cost_per_gallon = 3.12; /* cost per gallon   */
	int gallons;                  /* gallons used      */
	float Cost_per_mile;          /* Cost per mile(gas)*/
	float mph_for_fillup;         /* Miles per gallon for recent fillup*/
	float cost_of_fillup;         /* Cost of total fillup */
	int miles;                    /* Miles traveled entered by user*/

		printf("Number of Gallons used:\n");
		scanf("%d", &gallons); /*entering gallons*/

		printf("Miles since last fillup:\n");
		scanf("%d", &miles); /*entering miles traveled*/

		cost_of_fillup = gallons * cost_per_gallon; /*calculating for cost of fillup*/
		mph_for_fillup = miles / gallons; /*mpg for this recent full tank*/
		Cost_per_mile =  cost_of_fillup / miles; /*Cost per mile of gas*/

/* printing everything*/
		printf("\n\n Number of Gallons Used: %d", gallons);
		printf("\n Cost of Gallons: %1.2f\n", cost_per_gallon);
		printf("Cost of  fillup: %1.2f\n", cost_of_fillup);
		printf("Cost per mile: %1.2f\n", Cost_per_mile);
		printf("Mpg since last fillup: %1.2f\n", mph_for_fillup);
}
