/*      File : grader.c         *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 3/12/17          */

/*  A program to assign letter grades to scores  */

#include <stdio.h>
#include "assign_grade.h"


char assign_grade(int score);

int main()
{
    int score;
    char grade;
    int count_fail = 0;
    int count_pass = 0;
    int count_illegal = 0;
    int a, b, c, d;

       /*initializes first entered score*/
       while(scanf("%d", &score) == 1)
       {
	      /*sends first score to get evaluated against preset scores*/
	      grade = assign_grade(score);
	      /*prints value of grade*/
              printf("%d: ", score);
	      if(grade == FALSE){
	      /* when score is not a valid value, tells user*/
	      printf("illegal score\n");
	      count_illegal = count_illegal + 1;
				}
	      if(grade == 'A' || grade == 'B' || grade == 'C')
	      {
	      /*prints the value when  A, B, or C*/
              printf("%c\n", grade);
	      count_pass= count_pass + 1;
	      }
	      /*prints value when D or F*/
	      else if(grade == 'D' || grade == 'F')
	      {
	      printf("%c\n", grade);
              count_fail= count_fail + 1;
	      }
       }
/*
    printf("Passing scores: %d\n", count_pass);
    printf("Failing scores: %d\n", count_fail);
    printf("Illegal scores: %d\n", count_illegal);
*/
}

/*
char assign_grade(int score)
{
int value;

	if(score >= 90 && score <= 100)
        return 'A';
	if(score < 90 && score >= 80)
	return 'B';
	if(score < 80 && score >= 70)
	return 'C';
	if(score < 70 && score >= 60)
	return 'D';
	if(score < 60 && score >= 0)
	return 'F';
	if(score > 100 || score < 0)
	return FALSE;
}
*/
