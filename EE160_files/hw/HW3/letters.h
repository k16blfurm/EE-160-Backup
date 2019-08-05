/* File : letters.h                  *
 * By : Blaine Furman, Jared Austria *
 * login: bfurman, jpaust            *
 * team : XxFazeClan420xX            *
 * Date : 3/11/18
 * Members: Blaine Furman, Jared Austia */ 
/* A program contains prototypes and macros for finding if letters & words are
   valid Hawaiian letters*/

/*Macros for returning if letters entered by user or file are valid or not*/
#define TRUE 1
#define FALSE 0

/*Returns if letter is valid vowel in Hawaiian Language*/
int is_vowel(char);
/*Returns if letter is valid consonant in Hawaiian Language*/
int is_h_consonant(char);
