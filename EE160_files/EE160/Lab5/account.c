/*      File : temperature.c    *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 1/28/2018        */

/*  To compute the statistics of cost operating a car each time a user fills
 up gas */

#include <stdio.h>

int main(void)

{
    float acc_amount, annual_interest;
    int years;
    int compounded_years = 0;
    float calc_acc_amt;
    float initial_amount;
    float interest;
    int compounded_monthly = 12;
    int compounded_day = 365;
    
    printf("Welcome to my Accounting Investment Accumulation program\n");
    /* entering you initial amount*/
    printf("Enter your initial amount here (Enter 0 to quit):");
    scanf("%f", &acc_amount);
    /*Starting the account investment program when intital amount isn't 0*/
    while(acc_amount != 0){
        
        /*Now for entering your interest, the value of the interest rate
	 and years compounded*/
        printf("Now enter your interest rate");
	printf(" (1 for Yearly, 2 for Monthly, 3 by day):");
	scanf("%f", &interest);
	printf("Now enter the value of the interest");
        scanf("%f", &annual_interest);
        printf("Now lastly enter your number of");
	printf(" years compounded(in years):");
        scanf("%d", &years);

	/*printf("interest %f", interest );*/
	/*Evaluating if accumulating by day*/
	if (interest == 3){
	annual_interest = annual_interest / (compounded_day);
	years = years * compounded_day;}
	/*debug printf("here in 3");}*/
	/*evaluating if accumulation by month*/ 
	else if (interest == 2){
	annual_interest = annual_interest / (compounded_monthly);
	years = years * compounded_monthly;}
	/*debug printf("here in 2");}*/

	/*printf("number of times interested: %d", years);
	debug for times interested*/
        /*Computation for accumulated interest in respect to time*/
        while(years !=  compounded_years){
            acc_amount = acc_amount + acc_amount * annual_interest;
            compounded_years = compounded_years + 1;
        }
        
        /*printing of account amount*/
        printf("Account amount is %f", acc_amount);
        /*reinitialization of intial amount starting at the beginning*/
        printf("\nEnter your intial amount here (Enter 0 to quit):");
        scanf("%f", &acc_amount);
	years = 0;
	compounded_years = 0;
    }}

