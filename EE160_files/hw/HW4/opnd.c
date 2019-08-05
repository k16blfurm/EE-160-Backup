/*   File:	opnd.c
     by:	Blaine Furman	
     date:
*/

/*  
*/

#include "opnd.h"
#include "chrutil.h"
#include "exponent.h"
#include <stdio.h>
#include "display.h"
/*#define DEBUG*/
/*#define DEBUG2*/

int get_opnd(char ch)
{
int base = 0;
int old = 0;
int total_expon = 0;
int total = 0;
char expon;
int total_value = 0;

#ifdef DEBUG
printf("character is %c", ch);
#endif

while(ch != 'q')
{
    while(ch >= '0' && ch <= '9')
    {/*Converting character to integer*/
    
    	if(ch == '1')
      	 	base = 1;
    	if(ch == '2')
       		base = 2;
    	if(ch == '3')
       		base = 3;
    	if(ch == '4')
       		base = 4;
    	if(ch == '5')
       		base = 5;
    	if(ch == '6')
       		base = 6;
    	if(ch == '7')
       		base = 7;
    	if(ch == '8')
       		base = 8;
    	if(ch == '9')
       		base = 9;
    	if(ch == '0')
       		base = 0;
    	if(total > 0) /* adding up digits*/
      		total = (total * 10) + base;
    	else
		total = base;
#ifdef DEBUG
printf("total base is %d\n", total);
#endif
    /*Print the first number*/
    write_char(ch);
    /*Get the next character*/
    ch = getchar();
    /*if quit, return quit*/
    if(ch == 'q')
    return 'q';

    }
   
    /*When done with base values, go onto exponents*/
    while(is_exp(ch) == TRUE)
    {
        /*convert exponent characters to digits*/
    	expon = exp_value(ch);
   	/*write the character to display*/
 	write_exp(expon);
	/*do the first calculation of exponent*/
    	total_expon = (old * 10) + dig_to_int(expon);
	/*save the previous value of the exponent if no more exponents*/
    	old = total_expon;
	/*get the next character*/
    	ch = getchar();
#ifdef DEBUG
    printf("has an exponent %d", old);
#endif
    }
    /*not allowing user to enter in garbage numbers after exponent*/
    while(ch != ' ')
    {
    /*if quit, return quit*/
    ch = getchar(); 
    if(ch == 'q')
    return 'q';
    }

    if(ch == ' ')
    {
    /*send back the value if there are no more exponent or base values*/
    	if(ch == ' ' && total_expon == 0)
    	{
#ifdef DEBUG
printf("here in base");
#endif
	write_char(ch);
    		return total;
    	}
    	/*Calculate if there are both base and exponent values*/
    	else
    	{
#ifdef DEBUG
printf("total base is %d, total exponent is %d", total, old);
#endif
	/*calculate for the value of the total number*/
    	total_value = pos_power(total, old);
	write_char(ch);
	/*return final value*/
    	return total_value;
    	}

    }

}
	/*Sending back quit to driver*/
	if(ch == 'q')
	return 'q';

}



