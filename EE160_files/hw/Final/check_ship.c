/*   File:      check_ship.c
     by:        Tep Dobry
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

int ships(int latitude, int longitude, double a[COLUMNS][ROWS]);
void show_ship(char ship_type, int latitude, int longitude);
/*int srnd(void);*/

int check(double a[][ROWS])
{ 
/*for checking if array works*/
int i, j, n;


	for(i = 0; i != COLUMNS; i++)
                for(n = 0; n != ROWS; n++)
                        if(a[i][n] <=  1)
                        {
                        printf("latitude is %d, long is %d", i, n);
			/*free(a[i][n]);*/
			}

	return 0;
}
