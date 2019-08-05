/*      File : regress.c        *
 *      By   : Blaine Furman, Jared Austria  *
 *      login: bfurman, jpaust  *
 *      team : XxFazeClan420xX  *
 *      Date : 2/10/18
 *     Members:	Blaine Furman, Jared Austria  */

/*  To Find a slope from a batch file entered */
#include <stdio.h>
#include <math.h>

int main()
{
	float time, fahrenheit;
	int n = 0;
	float sum_fahrenheit = 0;
	float sum_time = 0;
	float m1, m2, mtotal;

	scanf("%f %f", &time, &fahrenheit); 

	printf("p = [ %f,", fahrenheit);

	while( scanf("%f", time) != EOF) {

	sum_fahrenheit = fahrenheit + sum_fahrenheit;
	sum_time = time + sum_time;
	n = n +1;
	scanf("%f %f", &time, &fahrenheit);
	printf(" %f", fahrenheit);
/*	printf("fahrenheit %f, time %f\n", fahrenheit, time);*/
	}

m1 = (sum_time * sum_fahrenheit) - ((float)n * sum_time * sum_fahrenheit);
m2 = (exp(sum_time) - (n * exp(sum_time)));

	printf("\nx = linespace( 0.00, %1.2f, 6 ", time);
	mtotal = m1 / m2;
	printf("%f", mtotal);
}
/*Algorithm
1. First Scanf for your intial points of the time and fahrenheit.
2. Then, start a while statement to loop that scanf.
3. In the while statement, add keep adding to the sum of both the time and
fahrenheit while continuously counting how many times the statement loops.
4. Once the table is done entering variables, then compute for the m and b.
5. Lastly, make a output file called graph.m to put into Matlab.
*/
