/*	File  : ships.c
	by    : Blaine Furman
	login : bfurman
	team  : XxFazeClan420xX
	date  : 4/28/18
*/

/*  This file contains the functions used to store ship score values
*/

#include <stdio.h>
#include "move.h"

int ships(int latitude, int longitude, int a[][ROWS], char ship)
{
int store;
int i = 0;
int n = 0;

			/*If ship is a Tabblephis*/
			if(ship == 'T')
			{/*Save a score of 3*/
			a[longitude][latitude] = THREE;
			}
			/*If ship is a Fruiser*/
			if(ship == 'F')
			{/*Save a score of 2*/
			a[longitude][latitude] = TWO;
			}
			/*If ship is a Crigates*/
			if(ship == 'C')
			{/*Save a score of 1*/
			a[longitude][latitude] = ONE;
			}



}
