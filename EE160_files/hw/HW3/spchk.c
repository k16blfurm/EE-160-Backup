/* File : driver1.c *
 * By : Blaine Furman, Jared Austria *
 * login: bfurman, jpaust *
 * team : XxFazeClan420xX *
 * Date : 3/11/18
 * Members: Blaine Furman, Jared Austia */ 
/* A program to count from 1 to 20, one per line */
#include <stdio.h>
/*#define DEBUG*/
#define DEBUG_1
#include "letters.h"
/*#define PROMPT*/

int main(void)
{/* This function reads documents/entered (words, sentences, paragraphs) 
     and finds invalid Hawaiian words in them*/
char letter, old_letter, nothing;
int vowel, consonant;
int old_letter_vowel, old_letter_consonant;
int valid;
int not_valid;

#ifdef PROMPT /*If prompt is on, ask user to enter their sentence or doc*/
printf("Welcome to my Hawaiian Language checker\n");
printf("Enter your word below(EOF to quit)\n");
#endif
/*Get first letter from file*/
letter = getchar();

 /*Clearing various unwanted characters from words*/
while(letter == '\n' || letter == '.' || letter == ',' || letter == '"'
      || letter == '!' || letter == '(' || letter == ')')
      {letter = getchar();}

while(letter != EOF)
	{
	/*Comparing character from file to see if they are valid vowels or 
	  consonants*/
	vowel = is_vowel(letter);
	consonant = is_h_consonant(letter);

	if((old_letter_consonant == TRUE) && letter != ' ' && 
	consonant == TRUE ){
	not_valid = TRUE;}

	/*If letter is either a (valid) vowel or consonant in Hawaiian 
	  Language, return true*/
	if(vowel == TRUE || consonant == TRUE){
		valid = TRUE;
#ifdef DEBUG
printf("Valid character %c\n", letter);
#endif
		}
	/*If it isn't, return false*/
	else if(vowel == FALSE && consonant == FALSE && letter != ' '){
#ifdef DEBUG
printf("invalid character %c", letter);
#endif
		not_valid = TRUE;}

	/*Display the letter*/
	printf("%c", letter);

	/*Holding the previous letter to compare if there are two consonants
	  next to each other*/
	if(letter != ' ' && letter != '.' && letter != ','){
	/*Saving the old character and testing if its a valid 
	  vowel/consonant*/
	old_letter = letter;
	old_letter_vowel = is_vowel(old_letter);
#ifdef DEBUG
printf("old_letter = %c", old_letter);
printf("old_letter_vowel = %d", old_letter_vowel);
#endif
	old_letter_consonant = is_h_consonant(old_letter);
	}

	/*Get the next letter*/
	letter = getchar();

	/*If last letter in the word is a consonant, return false*/
/*	if(old_letter_consonant == consonant){
	not_valid = TRUE;}
*/
	/*Clearing various unwanted characters from words*/
	while(letter == '\n' || letter == '.' || letter == ',' || letter == '"'
	|| letter == '!' || letter == '(' || letter == ')')
        {letter = getchar();}

	/*If anything was untrue of the Hawaiian langauge before, tell the 
	  user the word is invalid*/
	if(((letter == ' ' || letter == '\n' || letter == EOF ) 
	&& not_valid == TRUE ) || (old_letter_vowel == FALSE && letter == ' '))
	{
	printf(" is an invalid Hawaiian word\n");
	/*clear invalid conotation picked up from previous evaluations*/
	not_valid = FALSE; 
	}
	/*If everything turned out valid, tell the user their word is valid*/
	else if(((letter == ' ' || letter == '\n' || letter == EOF) 
	&& valid == TRUE))
	{
	printf(" is a valid Hawaiian word\n");}
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
