 
/*     File : gravity.c     *
 *     By   : Blaine Furman *
 *     login: bfurman       *
 *     Date : 1/28/2018     */
 
/*
 *   This program computes the velocity and height of a falling
 *   object given the time.
 */
#include <stdio.h> 
 
int main()
{  float velocity;
   int time;
   float distance;
 
        /*  set the time  */
	printf("Enter your time value: \n");
	scanf("%d", &time);
 
        /*  compute the velocity*/
        velocity = 32.0 * time;
 
        /*  compute the distance  */
        distance = 32 * time * time / 2;
 
        /*  print the result  */
        printf("An object falling %f feet in %d seconds\n", distance, time);
        printf("is traveling %f ft/sec\n", velocity);
} 
 


