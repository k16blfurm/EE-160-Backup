/*      File : sum.c            *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 2/12/18  */

/*  A program to compute the sum of numbers given on the input  */

#include <stdio.h>

int main()
{

        /*  Initialize the sum             */
	float weight;
	float value;
	float sum_weight = 0.00;
	float end;
	float sum_pair = 0.0;
	float n;
	float sum_total;
        /*  Get the first input weight/value */
	printf("Enter an weight/value pair (EOF to Quit): ");
	end = scanf("%f %f", &weight, &value);
/*	printf("Print of n : %f", n); */
        /*  While there is more input      */
	while (end != EOF) {

                /*  Accumulate the sum of weight and sum
		of the weight/value pair     */
		sum_weight = weight + sum_weight;
		sum_pair = (weight * value) + sum_pair;

                /*  Get the next input     */
		printf("Enter an weight/value pair: ");
		end = scanf("%f %f", &weight, &value);
		n = n + 1;
	/*	printf("%f", n); printing debug for n counting*/
	}
        /*  Calculate Sum total */

	sum_total = sum_pair / sum_weight;
	
/*	Debug line for sum_weight and sum pair:
	printf("sum_weight: %f sum_pair: %f", sum_weight, sum_pair); */
	/*print results*/
	printf("\nThe weighted average of %.0f input values  %f\n", n,
	 sum_total);

}
