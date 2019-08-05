/*      File : grader1.c         *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 3/12/17          */

/*  Driver program for mygrader2 */

#include <stdio.h>
#include "assign_grade1.h"

char assign_grade(int score, int a, int b, int c, int d);

int main()
{
    int score;
    char grade;
    int count_fail = 0;
    int count_pass = 0;
    int count_illegal = 0;
    int a, b, c, d;
    int end = 0;
    int end_program = 0;

       /*Entering in data for grade scale*/
       scanf("%d %d %d %d", &a, &b, &c, &d);

	      /*Prompting the user if their grade scale is incorrect*/
       	      if(100 >= a && a > b && b > c && c > d && d >= 0){
	       /*Telling user when grade scale is correct*/
	       printf("valid grading scale: continuing to compilation\n");
					 }
	      else{
		/*Telling user when grade scale is incorrect*/
		 printf("invalid grading scale\n");
		 return 0;}
 
	/*Entering in first score value until Dat file is finished*/
       while(scanf("%d", &score) == 1 )
       {
	      /*Evalutating scores against entered values from earlier*/
	      grade = assign_grade(score, a, b, c, d);
	      /*print the first score*/
              printf("%d: ", score);
	      if(grade == FALSE){
	      /*telling the user if their score is invalid*/
	      printf("illegal score\n");
	      /*counting the illegal scores*/
	      count_illegal = count_illegal + 1;
				}
	      if(grade == 'A' || grade == 'B' || grade == 'C')
	      {
	      /*showing the user the grade of their score (between A & C)*/
              printf("%c\n", grade);
	      /*counting pass scores*/
	      count_pass= count_pass + 1;
	      }

	      else if(grade == 'D' || grade == 'F')
	      {
	      /*showing the user their score when scores are D & F*/
	      printf("%c\n", grade);
	      /*counting fail scores*/
              count_fail= count_fail + 1;
	     /*Entering next score*/
	      }
       }
    /*Showing the user the amount of Passing, Failing, and Illegal scores*/
    printf("Passing scores: %d\n", count_pass);
    printf("Failing scores: %d\n", count_fail);
    printf("Illegal scores: %d\n", count_illegal);

}

/*
char assign_grade(int score, int a, int b, int c, int d)
{
int value;

	if(score >= a && score <= 100)
        return 'A';
	if(score < a && score >= b)
	return 'B';
	if(score < b && score >= c)
	return 'C';
	if(score < c && score >= d)
	return 'D';
	if(score < d && score >= 0)
	return 'F';
	if(score > 100 || score < 0)
	return FALSE;
}


*/
