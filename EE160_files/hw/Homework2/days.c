/*	File: days.c
 *	By: Jared Paul M. Austria
 * 	Login: jpaust
 * 	Date: 03/05/2018
 * 	Team: XxFazeClan420xX
 * 	Members: Jared Paul M. Austria, Blaine Furman
*/

#include "days.h"
/* Given: Any particular month and year
 * Returns: Determines how many days are in the given month and year
*/

int days_in_month(int month, int year)
{
    int value = 0;
    while(month != 2){
        if(month == 1 || month ==  3 || (month == 5) || (month == 7)
                || month == 8 || month == 10 || month == 12){
            value = 31;
            return value;}
        else if (month == 4 || month == 6 || month == 9 || month == 11){
            value =  30;
            return value;}
    }
    value = 28;
    return value;
}

