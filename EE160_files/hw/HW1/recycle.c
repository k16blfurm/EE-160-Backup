/*      File : countup.c        *
 *      By   : Blaine Furman, Jared Austria  *
 *      login: bfurman, jpaust  *
 *      team : XxFazeClan420xX  *
 *      Date : 2/10/18
 *     Members:	Blaine Furman, Jared Austia  */

/*  A program to calculate the money you would recieve from recycling
 *  Aluminum, Glass, and HI5 plastic between center X and center A  */
#include <stdio.h>
#include <math.h>

#define CENTER_A_AL 0.25
#define CENTER_A_GLASS 0.02
#define CENTER_A_HI5 0.02
#define CENTER_X_AL 0.21
#define CENTER_X_GLASS 0.025
#define CENTER_X_HI5 0.03

int main()
{

float Aluminum, Glass, hi5;
float A_price_Al, A_price_Gl, A_price_HI5;
float X_price_Al, X_price_Gl, X_price_HI5;
float X_total_price, A_total_price;
float x, y, z;
float X_Final;

/* Input of material */
printf("Enter the number of pounds of Aluminum: \n");
scanf("%f", &Aluminum);
printf("Enter the number of pounds of Glass: \n");
scanf("%f", &Glass);
printf("Enter the number of pounds of HI5: \n");
scanf("%f", &hi5);
/*Repeat for entered values*/
printf("For:\n");
printf("%f lbs of Aluminum \n", Aluminum);
printf("%f lbs of Glass \n", Glass);
printf("%f lbs of HI5 \n", hi5);

/* Computation of prices */
A_price_Al = CENTER_A_AL * (int)(Aluminum + 0.5 );
A_price_Gl = CENTER_A_GLASS *  (int)(Glass + 0.5);
A_price_HI5 = CENTER_A_HI5 * (int)(hi5 + 0.5);

A_total_price = A_price_Al + A_price_Gl + A_price_HI5; 

X_price_Al = CENTER_X_AL * Aluminum;
X_price_Gl = CENTER_X_GLASS * Glass;
X_price_HI5 = CENTER_X_HI5 * hi5;

X_total_price = X_price_Al + X_price_Gl + X_price_HI5;
X_total_price = (int)((X_total_price * 100) + .5);
X_total_price = X_total_price /100 ;


/* Money you would recieve from recycling between centers */
printf("You get $ %f from Center A \n", A_total_price);
printf("You get $ %f from Center X \n", X_total_price);
}
