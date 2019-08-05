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
    float n = 1;
    float sum_fahrenheit = 0;
    float sum_time = 0;
    float m1, m2, mtotal;
    float b1, b2, btotal;
    float xy; /* x times y*/
    float x2; /* x squared*/
    float sum_xy = 0; /*sum of x multiplied by y*/
    float sum_x2 = 0; /*sum of x squared*/

    scanf("%f %f ", &time, &fahrenheit);
/*printf("print fahrenheit %f, print time %f\n", fahrenheit, time);*/
    printf("p = [   %.2f,", fahrenheit);

    while( n < 5) {

	xy = fahrenheit * time;
	sum_xy = xy + sum_xy;
	x2 = time * time;
	sum_x2 = x2 + sum_x2;
	sum_fahrenheit = fahrenheit + sum_fahrenheit;
	sum_time = time + sum_time;
	n = n + 1;

	scanf("%f %f ", &time, &fahrenheit);
	printf("  %.2f,", fahrenheit);
/*	printf("fahrenheit %f, time %f\n", fahrenheit, time);*/
    }
	
	sum_fahrenheit = fahrenheit + sum_fahrenheit;
	sum_time = time + sum_time;
	xy = fahrenheit * time;
        sum_xy = xy + sum_xy;
        x2 = time * time;
        sum_x2 = x2 + sum_x2;
	

	scanf("%f %f ", &time, &fahrenheit);
	printf("  %.2f", fahrenheit);
	xy = fahrenheit * time;
	sum_xy = xy + sum_xy;
	x2 = time * time;
        sum_x2 = x2 + sum_x2;
	n = n + 1;
	sum_fahrenheit = fahrenheit + sum_fahrenheit;
	sum_time = time + sum_time;
/* printf("\nsum time =%f, sum fahrenheit =%f", sum_time,
	 sum_fahrenheit); */
/* printf("sum of xy : %f, sum of x^2 : %f", sum_xy, sum_x2);*/
    m1 = (sum_fahrenheit * sum_time) - (n * sum_xy);
    m2 = ((sum_time * sum_time) - (n * sum_x2));

    printf("];\nx = linspace(  0.00,   %1.2f, 6);\n", time);
    mtotal = m1 / m2;

    b1 = (sum_time * sum_xy) - (sum_x2 * sum_fahrenheit);
    b2 = (sum_time * sum_time) - n * sum_x2;

    btotal = b1 / b2;

    printf("y =   %2.2f * x +   %.2f;\n", mtotal, btotal);
    printf("plot(x, y ,x ,p, 'go')\n");
    printf("text(0.5,100,'y = %2.2f * x +   %.2f');\n", mtotal, btotal); 
/*	printf("%f", n);*/
}
/*Algorithm
  1. First Scanf for your intial points of the time and fahrenheit.
  2. Then, start a while statement to loop that scanf.
  3. In the while statement, add keep adding to the sum of both the time and
  fahrenheit while continuously counting how many times the statement loops.
  4. Once the table is done entering variables, then compute for the m and b.
  5. Lastly, make a output file called graph.m to put into Matlab.
  */
