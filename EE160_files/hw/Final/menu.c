/*      File : menu.c           *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 4/25/2018        */

/*  Menu to start the game*/

#include <stdio.h>

int menu(void)
{
int flag = 0;
char i = 0;

/*While not quiting the program*/
while(i != 'q' && i != '2')
{    
/*Print the title screen*/
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
	"||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||||||||||||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||||\n");
printf("||||||||||||||||||||||||||||| WELCOME TO TABBLEPHIS |||||||||||||||||"
	"|||||||||||\n");
printf("||||||||||||||||||||||||||||||||||  1 for help |||||||||||||||||||||"
        "||||||||||||\n");
printf("||||||||||||||||||||||||||||||||||  2 to play  |||||||||||||||||||||"
        "||||||||||||\n");
printf("||||||||||||||||||||||||||||||||||  q to quit  |||||||||||||||||||||"
        "||||||||||||\n");
printf("||||||||||||||||||||||||||||||||  c for credits  ||||||||||||||||||||"
        "|||||||||||\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "||||||||||||||||||||||||||||");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
        "|||||||||||");
	scanf("%c", &i);
	/*If user wants to display credits*/
	if(i == 'c')
	{
	/*display credits while user doesn't return to main menu*/
	while(i != 'r' && i != 'q')
	{
printf("\n\n\n\n\n");
printf("\t\t\tDesign by: Tep Dobry\n");
printf("\t\t\tSoftware Engineering by: Blaine Furman, Tep Dobry\n");
printf("\t\t\tBattleship Intelligence  by: Blaine Furman\n");
printf("\t\t\tSubmarine Programming by: Blaine Furman\n");
printf("\t\t\tScreenplay by: Blaine Furman\n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("Return by pressing r");
scanf("%c", &i);
while(i != 'r' && i != 'q')
	scanf("%c", &i);
	}
	}

	/*If user wants to see help menu*/
	if(i == '1')
	{
	/*Display help menu as long as user doesn't return to menu or quit*/
	while(i != 'r' && i != 'q')
        {
printf("\n\n\n\n\n");
printf("\tYour submarine can be driven around the ocean using the \n\t'h', 'j', 'k', and 'l' keys just like the"
	" vi editor; i.e:\n");
printf("\t*(h) -- move one cell to the left\n");
printf("\t*(j) -- move one cell to down\n");
printf("\t*(k) -- move one cell to up\n");
printf("\t*(l) -- move one cell to the right\n");
printf("\t*(ENTER) -- to fire torpedo's at enemy ships\n");
printf("\t*(q) -- to quit the game at any time in defeat\n");
printf("\n\n\n\n\n\n\n\n\n\n");
printf("Return by pressing r");
scanf("%c", &i);
while(i != 'r' && i != 'q')
        scanf("%c", &i);
        }
	}


	}
	/*If user wants to play, let user play*/
	if(i == '2')
	{ /*Display storyline*/
while(i != '1' && i != 'q')
{
printf("\n\n\n\n\n\n");
printf("It is the year 1942, date January 23, time 13:04\n");
printf("Your submarine team is apart of the U-Boat Division\n");
printf("Reconnaissances through your Enigma Machine have shown multiple\n"
	"British Ships in your area.\n");
printf("To make the Fatherland happy, you are tasked with destroying them all\n");
printf("If you don't, you fail and get demoted to the Eastern Front\n");
printf("Do you have what it takes to complete the mission????\n");
printf("\n\n\n\n\n\n\n\n\n\n");
printf("Press the 1 key to continue: ");

while(i != '1' && i != 'q')
        scanf("%c", &i);
}
	}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
/*If user wants to quit, quit the program*/
if(i == 'q')
      return 'q';
}
