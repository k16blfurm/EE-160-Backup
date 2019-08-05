/*      File : readcmd.c        *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 3/13/18          */

/*
 * Read a command, skipping over leading blanks and any trailing
 * characters.
 */

#include <stdio.h>
/*#define DEBUG*/

int skipBlanks(void);
int skipOverRestOfCommand(void);

int main()
{
  int cmd;
	/*Enter in first command*/
        cmd = skipBlanks();
        while (cmd != EOF)
        {	
		/*Count command if a letter*/
		if((cmd >= 97 && cmd <= 122) || cmd == ' ' || cmd == ';' || 
			cmd == '\n'){
			if(cmd == ';' || cmd == '\n'){
			/*Print that the user didn't enter a command*/
                	printf("Error: missing command.\n");
                              }
			else{
			/*Print that the user did enter a command*/
                	printf("The command is: %c\n", cmd);
                	skipOverRestOfCommand();}
							      }
		else if(cmd != ';' ||
       (cmd <= 97 && cmd >= 122) || cmd != ' ' || cmd != '\n'){
			/*Print that the user didn't enter a letter*/
			printf("Error: %c is not a letter.\n", cmd);
			/*Skip over rest of entry after first command is found*/
			skipOverRestOfCommand();
							      }
		/*Get the next command*/
                cmd = skipBlanks();
        }
}

int skipBlanks(void)
{
  int c;

        c = getchar(); 
        while (c == ' ' ){
/*#ifdef DEBUG
		printf("the character is %c", c);
#endif
*/
                c = getchar();}
/*#ifdef DEBUG
	printf("character is %c", c);
#endif
*/
        return c;
}

int skipOverRestOfCommand(void)
{
  int c;
  
        c = getchar(); 
        while (c != '\n'){
/*
#ifdef DEBUG
		printf("character is %c", c);
#endif	
*/
		if(c == ';'){
		return c;   }
		else
                c = getchar();}
        return c;
}

