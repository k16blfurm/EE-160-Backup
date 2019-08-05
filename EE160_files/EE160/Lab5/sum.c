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

        /*  Get the first input            */
	printf("Enter your first sum:");
	end = scanf("%f", &num);

        /*  While there is more input      */
	while (end != EOF) {

                /*  Accumulate the sum     */
		sum_total = num + sum_total;

                /*  Get the next input     */
		printf("Enter your next sum: ");
		end = scanf("%f", &num);
	}
        /*  Print the results              */
	printf("\nThe sum of your numbers entered are: %f\n", sum_total);

}
