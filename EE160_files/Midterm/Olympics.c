/*      File : Olympics.c       *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 2/6/2018        */

/*  To compute the statistics of cost operating a car each time a user fills
 up gas */

#include <stdio.h>
/*#define PROMPT*/


int main()
{
/*Initialize count & total*/
float total = 0;
int count = 0;
float scores, min, max;
int end1;

	#ifdef PROMPT /*Welcome user to the Program/entry of data*/
	printf("Welcome to my olympics panel program");
	printf("Enter judge scores (EOF to Quit)");
	#endif
	/*Get 1st data point as scores*/
	end1 = scanf("%f", &scores);
	/*Assign min and max scores to intial score entered*/
	max = scores;
	min = scores;

/*While there are judge scores*/
while(end1 != EOF)
{
	/*Calculate judge score total*/
	total = scores + total;
	/*Update Assigned Minimium scores*/
	if(scores < min){
		min = scores;
			}
	/*Update Assigned Maximium scores*/
	else if(scores > max){
		max = scores;
			     }

	/*Update count amount of judge scores entered*/
	count = count + 1;
	/*Get next score*/
	end1 = scanf("%f", &scores);
}
/*Caculate total scores minus min & max scores*/
total = total - min - max;
/*Print Results*/
printf("%d judges awarded %2.2f points\n", count, total);

}
