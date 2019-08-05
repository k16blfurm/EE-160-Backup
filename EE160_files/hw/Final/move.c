/*   File : move.c
 *   By   : Blaine Furman
 *   login: bfurman
 *   team : XxFazeClan420xX
 *   Date : 4/28/2018
/* A small program to move the ship */

#include <stdio.h>

int move(int *ship_lat, int *ship_long, char *type, char fire)
{
char path;
int flag;

		/*If user entered entered an action*/
		switch(fire)
		{
		/*Move the ship in a certain direction*/
		case 'h': return *ship_lat = (*ship_lat - 1);
		case 'j': return *ship_long = (*ship_long - 1);
		case 'k': return *ship_long = (*ship_long + 1);
		case 'l': return *ship_lat = (*ship_lat + 1); 
		/*Return a fire if user entered that action*/
		case '\r': return '\r';
		default: return 0;
		}

}
