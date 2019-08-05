
/*   File:	random.c
     by:	Tep Dobry	
     date:
*/

/*  This file contains a test driver for experimenting with
	randomizing 
*/

#include <stdio.h>
#include "display.h"
#include <stdlib.h>
#include <time.h>
#include "move.h"
/*#define DEBUG*/

int ships(int latitude, int longitude, int a[][ROWS]);
void show_ship(char ship_type, int latitude, int longitude);
int random_ships(int a[][ROWS]);


int main(void)
{ 
int run, flag;
char ship = 'T'; 
int place;
int latitude, longitude, location;
int horizontal, vertical;
int up, down;
int n = 1;
int i;
int a[COLUMNS][ROWS];

	while((scanf("%d", &run)) != EOF)
	{
	/*free(a[COLUMNS][ROWS]);*/
	clear_screen();
	init_ocean();
		for( i = 0 ; i < n ; i++ ) {
		/*clear latitude && longitude*/
		longitude = 0;
		latitude = 0;
		/*Only work when in the play area*/
		latitude  = (rand() % 13) + 1;
		longitude = (rand() % 4) + 1 ;
		printf("latitude is %d, Longitude is %d", 
                latitude, longitude);
		/*clear buffer for ship orentation*/
		horizontal = 0;
		horizontal = rand() % 2;
#ifdef DEBUG
		printf("latitude is %d, Longitude is %d, hori = %d", 
			latitude, longitude, horizontal);
#endif

	/*saving ship config for game*/
	/**/ships(latitude,longitude,a);
	
	if(latitude >= 1 && longitude >= 1 && 
		latitude <= 14 && longitude <= 5)
	
	show_ship(ship, longitude, latitude);
	{
	if(horizontal == 1)
	{
		up = longitude + 1;
		show_ship(ship, up, latitude);
		/**/ships(latitude,up,a);
#ifdef DEBUG
 	printf("latitude is %d, Longitude is %d, hori = %d",
                latitude, longitude, horizontal);
#endif
		down = longitude - 1;
		show_ship(ship, down, latitude);
		/**/ships(latitude,down,a);
#ifdef DEBUG
        printf("latitude is %d, Longitude is %d, hori = %d",
                latitude, longitude, horizontal);
#endif
	
	}

	if(horizontal == 0)
	{

		up = latitude + 1;
		show_ship(ship, longitude, up);
		/**/ships(up,longitude,a);
#ifdef DEBUG
        printf("latitude is %d, Longitude is %d, hori = %d",
                latitude, longitude, horizontal);
#endif

		down = latitude - 1;
		show_ship(ship, longitude, down);
		/**/ships(down,longitude,a);

#ifdef DEBUG
        printf("latitude is %d, Longitude is %d, hori = %d",
                latitude, longitude, horizontal);
#endif

	}
	}
	}

	}
}
