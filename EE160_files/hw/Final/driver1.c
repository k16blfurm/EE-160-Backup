/*      File : driver1.c        *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 4/28/2018        */

/*  This file contains the driver for the game TabblePhis. It initializes 
displays (menu, gameboard, etc.) and gets user's inputs. */

#include <stdio.h>
#include "display.h"
#include "ship_init.h"
#define ROWS 15
#define COLUMNS 6

void init_ocean(void);
void show_boat(int latitude, int longitude);
int move(int *ship_lat, int *ship_long, char *type, char fire);
void update_torpedo(int how_many);
void show_explosion(int latitude, int longitude);
void show_miss(int latitude, int longitude);
int ship_init(int a[][ROWS]);
int menu(void);

int main()
{
int torpedos = 0; 
int flag =  0;
int diff, score, latitude, longitude;
int layout = FALSE;;
int ship[COLUMNS][ROWS];
int sub[COLUMNS + 1][ROWS + 1];
int done;
int *ship_lat;
int *ship_long; 
char ship_type, mov, fire;
char *type;
char *s;
int set = 5;
int i = 0; 
int n = 0;

	while(flag != EOF)
	{
	/*Initialize the Menu*/
	flag = menu();
	
	/*Quit the program if q is entered*/
	if(flag == 'q')
		return 0;

	/*Initialize & Clear old gameboards*/
	for(i = 0; i != COLUMNS; i = i + 1)
	{	for(n = 0; n != ROWS; n = n + 1) 
		{
		ship[i][n] = 0;
		sub[i][n] = 0;
		}
	}

	/*Start the submarine at the top-left of the gameboard*/
	latitude = 0;
	longitude = 0;
	/*Assign the ship's location*/
	ship_lat = &latitude;
	ship_long = &longitude;
	/*Ask the user for their difficulty*/
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t   Enter your difficulty here:\n");
	printf("\t\t1 for easy(40 torpedos), 2 for hard (30 torpedos)\n"
		"\t\t\t3 for veteran(15 torpedos)\n\n\n\n\n\n\n\n\n\n");
	/*Get the difficulty*/
	flag = scanf("%d", &diff);

	/*If easy difficulty*/
	if(diff == 1)
	{torpedos = 100;} //Give them 40 torpedos

	/*If hard difficulty*/
	if(diff == 2)
	{torpedos = 30;}//Give tem 30 torpedos

	/*If Veteran Difficulty*/
	if(diff == 3)
	{torpedos = 15;} //Only give tem 15 torpedos

	/*Initialize the score to zero*/
	score = 0;

	/*Initialize the ocean*/
	init_ocean();
	/*Show where the boat is on the ocean*/
	show_boat(latitude, longitude);
	/*Show the torpedo count*/
	update_torpedo(torpedos);

	/*While the Enemy Boats don't overlap with one another*/
	while(layout == FALSE)
	{
		/*Create Random Enemy Ship layout*/
		layout = ship_init(ship);
		/*If one of the Ships overlap one another*/
		if(layout == FALSE)
		{/*Re-Initialize & Clear the ship layout*/
        	for(i = 0; i != COLUMNS; i = i + 1)
        	{	for(n = 0; n != ROWS; n = n + 1) 
                	{
                	ship[i][n] = 0;
                	sub[i][n] = 0;
                	}
        	}
		}
	}
	
	//Reinitialize the ship randomizer for the next game
        layout = FALSE;
	/*Send score to display*/
	update_score(score);
	/*Play the game while torpedos are not depleated & the 
	game hasn't been won*/
	while(torpedos != 0 && fire != 'q' && score != 20)
	{

	/*Get rid of the last ships coordinates*/
        sub[longitude][latitude] = FALSE;

	/*Make sure the boat doesn't go over the edges of the board*/
	if(latitude < 0)
		latitude = 0;
	if(longitude < 0)
		longitude = 0;
 	if(latitude >= ROWS)
		latitude = (ROWS - 1);
	if(longitude >= COLUMNS)
		longitude = (COLUMNS - 1);
	
	/*Show the submarine*/
	show_boat(longitude, latitude);

	/*Save an action by the user*/
	fire = getchar();

	/*If User enter's quit*/
	if(fire == 'q') 
	{
	/*Clear the Screen and quit the program*/
	clear_screen();
	return 0;
	}

	/*Move the sub  by what the user entered*/
	move(ship_lat, ship_long, type, fire);

	/*Save the ships current */
	sub[longitude][latitude] = TRUE;

	/*If user fires a torpedo*/
	if(fire == '\r')
	{
		/*Decrease torpedo count*/
		torpedos = torpedos - 1;
		/*If User hits a ship*/
		if(sub[longitude][latitude] <= ship[longitude][latitude])
		{	/*If user hit a Tabblephis*/
			if(ship[longitude][latitude] == THREE)
				/*Give them three points*/
				score = score + 3;
			/*If user hit a Fruiser*/
			if(ship[longitude][latitude] == TWO)
				/*Give them two points*/
                        	score = score + 2;
			/*If user hit a Crigate*/
			if(ship[longitude][latitude] == ONE)
                        	/*Give them one points*/
				score = score + 1;
			/*Display an Explosion on-screen*/
			show_explosion(longitude, latitude);
			/*Update the score on-screen*/
			update_score(score);

			/*Save the ship as destroyed*/
			ship[longitude][latitude] = -1;
			/*Congragulate the User for a hit*/
			s = "Good Shot!!!";
			write_message(s);
		}

		/*If user failed to hit any ships*/
		else if(ship[longitude][latitude] == 0)
			{/*Show a miss on the display*/
			show_miss(longitude, latitude);
			/*Tell them to try again*/
			s = "Try Again!!!";
			write_message(s);
			}
	}
	/*Display the remaining torpedos*/
	update_torpedo(torpedos);

	}

	/*If the user failed to complete the mission*/
	while(flag != '1' && flag != 'q' && score != 20)
	{
	/*Show Ships to player after they lost*/
	for(i = 0; i < (COLUMNS - 1); i++)
        	for(n = 0; n < (ROWS - 1); n++) 
                {
			/*if ship is Tabblephis*/
                	if(ship[i][n] == THREE)
			{	ship_type = 'T'; 
				/*Show the remaining Tabblephis to mock them*/
				show_ship(ship_type , i , n);
			}

			/*if ship is Fruiser*/
			if(ship[i][n] == TWO)
                        {	ship_type = 'F'; 
				/*Show the remaining Fruisers  to mock them*/
                        	show_ship(ship_type , i , n);
                        }

			/*if ship is Crigate*/
			if(ship[i][n] == ONE)
                        {	ship_type = 'C'; 
				/*Show the remaining Crigates to mock them*/
                        	show_ship(ship_type , i , n );
                        }
        	}
		/*Tell the user they lost and to press 1 to get back to the
		menu screen*/
		s = "You lost, press 1";
		write_message(s);
		/*Get the user's input*/
		flag = getchar();
	}
	/*If user won the game*/
	if(score == 20)
	{	while(flag != '1' && flag != 'q')
		{//Tell them they won!!!
		s = "You won! Press 1";
		write_message(s);
		/*Get the user's input*/
		flag = getchar();
		}
	}

	/*Clear the old board*/
	clear_screen();

	}

	/*Clear the screen*/
	clear_screen();
	printf("\n");


}
