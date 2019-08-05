/*  File:	compute.c
    by:		Blaine Furman
    date:
*/

/*  */
/*#define DEBUG*/
#include "compute.h"

int compute_result(int opnd1,char op,int opnd2)
{
int result;

	/*Compute values if addition*/
	if(op == '+')
	{
	/*Calculate results*/
	result = opnd1 + opnd2;
#ifdef DEBUG
printf("result %d, opnd1 %d, opnd2 %d", result, opnd1, opnd2);
#endif
	/*Return results*/
	return result;
	}

	/*Compute values if subtraction*/
	if(op == '-')
	{
	/*Calculate results*/
	result = opnd1 - opnd2;
	/*Return results*/
	return result ; 
	}

	/*Compute values if multiplication*/
	if(op == 'x')
	{
	/*Calculate results*/
	result = opnd1 * opnd2;
	/*Return results*/
	return result;
	}

	/*Compute values if division*/
	if(op == '/')
	{
	/*Calculate results*/
	result = opnd1 / opnd2;
	/*Return results*/
	return result;
	}
	
	/*If operator is enter, just return*/
	else if(op == '=')
	return 0;


}
