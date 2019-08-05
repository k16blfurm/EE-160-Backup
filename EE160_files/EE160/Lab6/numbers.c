
/*      File : numbers.c    *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 1/28/2018        */

/* To count/sum numbers that the user enters and tell them whether they are
postive, negative, even, odd, postive even, or negative odd*/
#include <stdio.h>
/*Debug statement for all numbers
#define DEBUG
*/
int main(void)

{
int number;
float positive = 0;
int sum_positive = 0;
float positive_even = 0;
int sum_positive_even = 0;
float negative_odd = 0;
int sum_negative_odd = 0;
float even = 0;
int sum_even = 0;
float negative = 0;
int sum_negative = 0;
float odd = 0;
int sum_odd = 0;
float all = 0;
int sum_all = 0;

/*Welcoming the User to my Program*/
printf("Welcome to my number counter\n");
/*Entering the first number*/
printf("Enter you number here:");
scanf("%d", &number);
/*Initializing the counting when a number other than 0 is entered*/
while(number != 0){
	/*adding sum/count of all numbers*/
	all = all + 1;
	sum_all = sum_all + number;

	if(number > 0){
	 /*adding sum/count of positive numbers*/
	positive = positive + 1;
	sum_positive = number + sum_positive;
	#ifdef DEBUG
	printf("debug:%d is positive(count = %f, total = %f)\n", number, positiv	e, sum_positive);
	#endif
		if (number % 2 == 0){
			/*adding sum/count of postive/even numbers*/
			positive_even = positive_even + 1;
			sum_positive_even = sum_positive_even + number;
			#ifdef DEBUG
	      printf("debug:%d is positive and even (count = %f, total = %f)\n", 			number, positive_even, sum_positive_even);
			#endif
			/*adding sum/count of even numbers*/
			even = even + 1;
			sum_even = sum_even + number;
	  		#ifdef DEBUG
              printf("debug:%d is even (count = %f, total = %f)\n",
                        number, even, sum_even);
                        #endif
			  	   }
		else if (number % 2 != 0){
			 /*adding sum/count of odd numbers*/
			odd = odd + 1;
		 	sum_odd = sum_odd + number;
			#ifdef DEBUG
              printf("debug:%d is odd (count = %f, total = %f)\n",
                        number, odd, sum_odd);
                        #endif
					}
			}
	/*Counting/adding of negative numbers*/
	if (number < 0){
		if(number % 2 == 0){
			 /*adding sum/count of even numbers*/
			even = even + 1;
			sum_even = sum_even + number;
			#ifdef DEBUG
              printf("debug:%d is even (count = %f, total = %f)\n",
                        number, even, sum_even);
                        #endif
			    }
		else if (number % 2 != 0){ 
			 /*adding sum/count of negative odd numbers*/
			negative_odd = negative_odd + 1;
			sum_negative_odd = sum_negative_odd + number;
			#ifdef DEBUG
              printf("debug:%d is negative odd (count = %f, total = %f)\n",
                        number, negative_odd, sum_negative_odd);
                        #endif
			 /*adding sum/count of odd numbers*/
			odd = odd + 1;
			sum_odd = sum_odd + number;
			#ifdef DEBUG
              printf("debug:%d is odd (count = %f, total = %f)\n",
                        number, odd, sum_odd);
                        #endif
			    		  }
		 /*adding sum/count of negative numbers*/
		sum_negative = sum_negative + number;
		negative = negative + 1;
                #ifdef DEBUG
                        printf("debug:%d is negative (count = %f, total = %f)\n",
                        number, negative, sum_negative);
                #endif

				}
	/*Reasking the user to enter in another number unless they enter zero*/
	printf("Enter your numbers here:");
	scanf("%d", &number);
		}
/*Showing the user what numbers they have entered and the sum/count of them*/
printf("Positive numbers are %f and sum of them are %d\n", positive,
	sum_positive);
printf("Negative numbers are %f and sum of them are %d\n", negative,
	sum_negative);
printf("Postive Even numbers %f and sum of them are %d\n", positive_even,
	sum_positive_even);
printf("Negative odd numbers are %f and sum of them are %d\n", negative_odd,
	sum_negative_odd);
printf("Even numbers are %f and sum of them are %d\n",  even, sum_even);
printf("Odd numbers are %f and sum of them are %d\n", odd, sum_odd);
printf("All numbers are %f and sum of them are %d\n", all, sum_all);
}

