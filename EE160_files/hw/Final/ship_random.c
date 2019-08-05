/*     File : ship_random.c
 *     By   : Blaine Furman
 *     login: bfurman
 *     team : XxFazeClan420xX
 *     Date: 4/28/18          */

/*  This file contains the function for Ranomizing all of the ships in the game
(Tabblephis, Fruisers, Crigates).*/

#include <stdio.h>
#include "display.h"
#include <stdlib.h>
#include <time.h>
#include "move.h"
/*#define DEBUG*/

int ships(int latitude, int longitude, int a[][ROWS], char ship);
void show_ship(char ship_type, int latitude, int longitude);
int random_ships(int a[][ROWS]);


int random_set(int a[][ROWS], char ship)
{
int run, flag;
int place;
int latitude, longitude, location;
int horizontal, vertical;
int up = 0; 
int down = 0;
int n = 1;
int i;

	for( i = 0 ; i < n ; i++ )
	{
	/*clear latitude && longitude*/
		longitude = 0;
		latitude = 0;
	/*Randomize the ship location*/
		latitude  = (rand() % 14) + 1;
		longitude = (rand() % 4) + 1 ;
	/*Default to Crigates*/
		horizontal = 2;

	/*Make orentation when Tabblephis or Fruiser*/
		if(ship == 'T')
		{	/*Randomize for Tabblephis*/
			vertical = TRUE;
			horizontal = rand() % 2;
		}
		if(ship == 'F')
		{	/*Randomize for Fruisers*/
			horizontal = rand() % 2;
			vertical = FALSE;
		}

		/*Check if location  has existing ships*/
		if(a[longitude][latitude] >= ONE)
		{	return FALSE; // Return False if ship's location are bad

	/*saving ship location*/
	ships(latitude,longitude,a, ship);
	
	/*If horizontal orientation*/
	if(horizontal == 1)
	{
		/*If Tabblephis*/
		if(vertical == TRUE)
		{
			up = longitude + 1;
		/*If overwritting another ship location*/
		if(a[up][latitude] >= ONE)
                        return FALSE; //Return to get reinitialized

		/*Attach one ship to the orginal ship*/
		ships(latitude,up,a,ship);
		}
		/*If Frigate or Tabblephis, add another part of the ship*/
		down = longitude - 1;

		/*If overwritting another ship location*/
		if(a[down][latitude] >= ONE) 
                        return FALSE; //Return to get reinitialized

		/*Attach one ship to the orginal ship(save ship location)*/
		ships(latitude,down,a,ship);
	}
	
	/*If vertical orientation*/
	if(horizontal == 0)
	{	 /*If Tabblephis*/
		if(vertical == TRUE)
		{
			up = latitude + 1;

			/*If overwritting another ship location*/
			if(a[longitude][up] >= ONE)
                        	return FALSE;  //Return to get reinitialized

			/*Save ship location*/
			ships(up,longitude,a,ship);
		}

		/*If Frigate or Tabblephis, add another part of the ship*/
		down = latitude - 1;
		
		/*If overwritting another ship location*/
		if(a[longitude][down] >= ONE)
                        return FALSE;  //Return to get reinitialized
		ships(down,longitude,a,ship);


	}
	}
	}
	return TRUE;

}
