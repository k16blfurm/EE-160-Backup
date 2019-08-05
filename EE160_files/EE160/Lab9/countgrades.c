/*      File : countgrades.c    *
 *      By   : Blaine Furman    *
 *      login: bfurman          *
 *      team : XxFazeClan420xX  *
 *      Date : 3/13/18          */

/*  A program to count the number of grades occuring in the input */

#include <stdio.h>
/*#define DEBUG*/

int main()
{
  int a;
  int b;
  int letterc;
  int c;
  int d;
  int f;
  int others;

       a = b = letterc = d = f = c = 0;
       others = 0;
       /*Get first number of grades*/
       while ((c = getchar()) != EOF)
       {
	      /*Continue of to numbers until told not to*/
/*	      while (getchar() == '\n')*/
/*	      while ((getchar()) != ' ');*/
              switch(c)
              {
                 case 'a':
		 case 'A': a++;
			break;
                 case 'b':
		 case 'B': b++;
			break;
                 case 'c':
		 case 'C': letterc++;
			break;
                 case 'd':
		 case 'D': d++;
			break;
                 case 'f':
		 case 'F': f++;
			break;
		 case '\n' :
		 case ' '  :
			break;

                 default: others++;
			break;
              }
#ifdef DEBUG /*Debug for each value that is input into the program*/
 printf("values for \na=%d\nb=%d\nc=%d\nd=%d\nf=%d\nother=%d\n", a,b,letterc,d,f,others);
#endif
       }
       /*Print the count of grades input by user*/
       printf("Grade counts:\n");
       /*Show user grades entered*/
       printf("  A's: %d\n", a);
       printf("  B's: %d\n", b);
       printf("  C's: %d\n", letterc);
       printf("  D's: %d\n", d);
       printf("  F's: %d\n", f);
       printf("  Other grades: %d\n", others);

}
