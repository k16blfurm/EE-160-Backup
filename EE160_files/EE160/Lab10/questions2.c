/*      File : questions2.c     *
 *      By   :                  *
 *      login:                  *
 *      team :                  *
 *      Date :                  */

/*
 * Ask the user a question.
 */
#include <stdio.h>
#include "tfdef.h"
/*#define DEBUG*/

int yesOrNo (void);

int main()
{
        printf("Don't you just love this class? ");
        if (yesOrNo())
                printf("YES!  We knew it.\n");
        else
                printf("NO?  Come on, you know you love this class.\n");
  
}

int yesOrNo(void)
{
  int answer;                        /* holds input character */
  int c;

 		while(1)
		{
                /* process each input line */
#ifdef DEBUG
                printf("debug: Processing New Input Line\n");
#endif
                c = getchar();
#ifdef DEBUG
                printf("debug: Read First Character: %c\n", c);
#endif
		if ((answer = tolower(c)) == EOF)
                        return FALSE;                  /* EOF is NO! */

#ifdef DEBUG
                printf("debug: The answer is: %c\n", answer);
#endif
                /* read characters until the end of the line */
                while (c != '\n' && c != EOF){
			 c = getchar();
#ifdef DEBUG
	                  printf("debug: Skipping character: %c\n", c);
#endif
					     }
                /* return an appropriate value for Yes or No */
                if (answer == 'y')
                        return TRUE;
                if (answer == 'n')
                        return FALSE;

                /* error message if there's a problem */
                printf("Please answer with a YES or NO: ");
        	}
}
