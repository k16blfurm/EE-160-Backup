/* File: driver3.c        *
 * by:   Blaine Furman    *
 * login: bfurman         *
 * team : XxFazeClan420xX *
 * Date : 4/3/18
 * Members: Blaine Furman */
/* This function is for testing computation with different operators */

#include <stdio.h>
#include "ops.h"
#include "compute.h"
/*#define DEBUG*/

int main()
{
int ch;
int num, ans;
char op;
int ch2;
int flag;
int result;

/*Prompt the user to enter first operand*/
printf("Enter first operand (EOF to quit):");

/*Get first operand*/
flag = scanf("%d", &ch);
#ifdef DEBUG
printf("%d", ch);
#endif
/*While there are more functions*/
while(flag != EOF)
{
	/*prompt the user to enter the operator*/
	printf("Enter operator:");

	/*get and test the operator*/
	op = get_op();

	/*if operator is invaid, get another*/
	while(op == FALSE)
	 op = get_op();

	/*Prompt the user to enter a second operand*/
	printf("Enter second operand:");

	/*Get the second operand*/
	flag = scanf("%d", &ch2);

#ifdef DEBUG
printf("First operand %d, Second operand %d, operator %c", ch, ch2, op);
#endif

	/*Compute results*/
	ans = compute_result(ch, op, ch2);

	/*Print the results*/
	printf("The answer is %d\n", ans);

	/*Prompt the user to enter another operand for a new function*/
	printf("Enter first operand (EOF to quit):");

	/*Get first operand*/
        flag = scanf("%d", &ch);
}

printf("\n");
}


