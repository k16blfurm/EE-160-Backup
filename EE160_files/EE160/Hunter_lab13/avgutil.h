/* file: averages.c      *
   by: Hunter Garrett    *
   login: hsgarr97       *
   date: 11/28/17        *
   team: coca_cola       *
*/

/* This file contains the function prototypes for averages.c
 */

#define MAXVALS 100       /* max number of values we can process */

int tableFill(double a[], int max);
void tablePrintIfLarger(double a[], int num, double averages);
void tablePrintIfSmaller(double a[], int num, double averages);
double tableAverage(double a[], int num);
int tableMatchingElements(double a[], int num, double target);
int tableLargerElements(double a[], int num, double target);
int tableSmallerElements(double a[], int num, double target);

