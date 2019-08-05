
/*	File:	dispalay.h
	by:	Tep Dobry
	date:	
*/

extern int REALLY_RANDOM;

void init_ocean(void);
/*  This function is given and returns nothing.  It initializes the
	display showing the ocean and torpedo count and score headings.  */

void show_boat(int latitude, int longitude);
/*  This funtion is given the latitude and longitude of the sumbarine
	and returns nothing.  It displays the submarine on the ocean.    */

void show_explosion(int latitude, int longitude);
/*  This funtion is given the latitude and longitude of a hit on a Phis
	and returns nothing.  It displays a permanent explosion on the
	ocean.                                                           */

void show_miss(int latitude, int longitude);
/*  This funtion is given the latitude and longitude of a torpedo miss
	and returns nothing.  It displays a permanent miss on the ocean. */

void show_ship(char ship_type, int latitude, int longitude);
/*  This function is given a character corresponding to a Phis type
	('T', 'F', or 'C'), and the longitude and latitude and returns
	nothing.  It shows a cell of that Phis type on the ocean.  It
	should be used at the end of the game to show the position of
	all Phis' on the board.                                          */

void update_torpedo(int how_many);
/*  This function is given an integer representing the number of
	torpedos remaining and returns nothing.  It updates the
	torpedo count on the screen.                                     */

void update_score(int score);
/*  This function is given an integer representing the current 
	score of the game and returns nothing.  It updates the
	score on the screen.                                             */

void write_message(char *s);
/*  This function is given a string and writes it to the bottom
	of the screen.  Only the first 17 characters are displayed.
	It returns nothing.                                              */

void clear_screen(void);
/*  This function is given and returns nothing.  It clears the screen
	and shuts down the display.  It should be used at the end of
	the program.                                                     */

