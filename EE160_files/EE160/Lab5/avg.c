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
	float num;
	float sum_total = 0.00;
	float end;
	float  n;
	float average;
        /*  Get the first input            */
	printf("Enter an integer value: ");
	end = scanf("%f", &num);

/*	printf("Print of n : %f", n); */
        /*  While there is more input      */
	while (end != EOF) {

                /*  Accumulate the sum     */
		sum_total = num + sum_total;

                /*  Get the next input     */
		printf("Enter an integer value: ");
		end = scanf("%f", &num);
		n = n + 1;
/*		printf("Print of n : %f", n); Debug of prining n*/
	}
        /*  Print the results              */
	average = ( sum_total / n);
/*	printf("print of n %f", n); Debug for n counting*/
	printf("\nThe average of %f input values  %f\n", n,  average);

}
