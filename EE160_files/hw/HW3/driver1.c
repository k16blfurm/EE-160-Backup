/* File : driver1.c *
 * By : Blaine Furman, Jared Austria *
 * login: bfurman, jpaust *
 * team : XxFazeClan420xX *
 * Date : 3/11/18
 * Members: Blaine Furman, Jared Austia */ 
/* A program to tell the user if their letter entered is a valid hawaiian 
   Character*/
#include <stdio.h>
#include "letters.h"

int main(void)
{
char letter;
int vowel, consonant;

/*Prompt the user to enter their letter*/
printf("Welcome to my Hawaiian Language checker\n");
printf("Enter your word below(EOF to quit)\n");
/*Get the first letter*/
letter = getchar();

while(letter != EOF)
	{
	/*Check if the letter is a valid vowel*/
	vowel = is_vowel(letter);
	/*Check if the letter is a valid consonant*/
	consonant = is_h_consonant(letter);

	/*Print the letter is a vowel in the Hawaiian Language*/
	if(vowel == TRUE && consonant == FALSE){
		printf("Your letter is a vowel\n");}
	/*Print the letter is a consonant in the Hawaiian Language*/
	if(vowel == FALSE && consonant == TRUE){
		printf("Your letter is a consonant\n");}
	/*Print if it is neither*/
	else if(vowel == FALSE && consonant == FALSE){
		printf("Your letter is neither a vowel or consonant\n");}
	/*Promt the user to enter another character*/
	printf("Enter another character\n");
	/*Get the next letter*/
	letter = getchar();
	while(letter == '\n' || letter == ' ')
        {letter = getchar();}
	}

}
/*
int is_vowel(char letter)
{

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
	  default : return FALSE;
	}
}
int is_h_consonant(char letter)
{
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
	  default : return FALSE;
	}
}
*/
