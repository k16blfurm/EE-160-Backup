/*	File : ship_init.c
	by   : Blaine Furman
	login: bfurman
	team : XxFazeClan420xX
	date : 4/28/18 
*/

/*  This funcion initializes ships on the board*/

#include <stdio.h>
#include "display.h"
#include <stdlib.h>
#include <time.h>
#include "move.h"
#define CRUISERS 2
#define FRIGATES 3
/*#define DEBUG*/

int ships(int latitude, int longitude, int a[][ROWS]);
void show_ship(char ship_type, int latitude, int longitude);
int random_ships(int a[][ROWS]);
int random_set(int a[][ROWS], char battleship);

int ship_init(int a[][ROWS])
{
int i, n;
int flag;
char battleship, cruiser, frigates;

	/*Assign ships*/
	battleship = 'T';
	cruiser = 'F';
	frigates = 'C';
	/*Create Tabblephis*/
	random_set(a, battleship);
	/*Create Fruisers*/
	for(i = 0; i < CRUISERS; i++) 
	{	flag = random_set(a, cruiser);
		/*reinitialize map if ships overlap*/
		if(flag == FALSE)
			return FALSE;
	}
	/*Create Crigates*/
	for(i = 0; i < (FRIGATES); i++)
	{	flag = random_set(a, frigates);
		/*reinitialize map if ships overlap*/
		if(flag == FALSE)
                	return FALSE;
	}
	//Return True for layout
	flag = TRUE;

}
