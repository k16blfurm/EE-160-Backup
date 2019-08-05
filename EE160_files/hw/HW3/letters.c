/* File : driver1.c *
 * By : Blaine Furman, Jared Austria *
 * login: bfurman, jpaust *
 * team : XxFazeClan420xX *
 * Date : 3/11/18
 * Members: Blaine Furman, Jared Austia */ 
/* This file contains the functions to tell if a letter entered is valid in
   the Hawaiian language*/

#include <stdio.h>
#include "letters.h"

int is_vowel(char letter)
{ /*This function tests if the letter is a valid vowel in the hawaiian 
    Language*/

	switch(letter)
	{ case 'a':
	  case 'e':
	  case 'i':
	  case 'o':
	  case 'u':
	  case 'A':
	  case 'E':
	  case 'I':
	  case 'O':
	  case 'U': return TRUE;
	  /*If valid, returns true*/
	  default : return FALSE;
	  /*If not, returns false*/
	}
}
int is_h_consonant(char letter)
{
/*This function tests if the letter is a valid vowel in the hawaiian 
    Language*/

	switch(letter)
	{ case 'h':
	  case 'k':
	  case 'l':
	  case 'm':
	  case 'n':
	  case 'p':
	  case 'w':
	  case '`':
	  case 'H':
	  case 'K':
	  case 'L':
	  case 'M':
	  case 'N':
	  case 'P':
	  case 'W': return TRUE;
	  /*If valid, returns true*/
	  default : return FALSE;
	  /*If not, returns false*/
	}
}
