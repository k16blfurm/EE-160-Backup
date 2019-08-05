/*   File: pay4.c
     Programmer: Programmer Name
     Date: Current Date
     This program reads in hours worked and rate of pay and calculates
     the pay for several persons. The program also computes the gross pay
     disbursed, number of people, and average pay. The end of data is
     signaled by a negative or a zero id number.
*/
#define   REG_LIMIT      40.0
#define   OT_FACTOR      1.5
main()
{
     /* declarations */
     int id_number, number;
     float hours_worked, rate_of_pay,
          regular_pay, overtime_pay, total_pay,
          gross, average;

     /* print title */
     printf("***Pay Calculation***\n\n");

     /* initialize cumulative sum variables */
     number = 0;
     gross = 0;
     /* initialize loop variables */
     printf("Type ID Number, 0 to quit: ");
     scanf("%d", &id_number);

     while (id_number > 0) {
          /* read data into variables */
          printf("Hours Worked: ");
          scanf("%f", &hours_worked);
          printf("Hourly Rate: ");
          scanf("%f", &rate_of_pay);

          /* calculate results */
          if (hours_worked > REG_LIMIT) {
               regular_pay = REG_LIMIT * rate_of_pay;
               overtime_pay = OT_FACTOR * rate_of_pay *
                                   (hours_worked - REG_LIMIT);
          }
          else {
               regular_pay = hours_worked * rate_of_pay;
               overtime_pay = 0;
          }

          total_pay = regular_pay + overtime_pay;

          /* print data and results */
          printf("\nID Number = %d\n", id_number);
          printf("Hours Worked = %f, Rate of Pay = $%f\n",
                    hours_worked, rate_of_pay);
          printf("Regular Pay = $%f, Overtime Pay = $%f\n",
                    regular_pay, overtime_pay);
          printf("Total Pay = $%f\n", total_pay);

          /* update cumulative sums */
          number = number + 1;
          gross = gross + total_pay;
          /* debug statements, print variable values */
printf("\ndebug: gross = %f, number = %d\n", gross, number);
          /* update loop variables */
          printf("\nType ID Number, 0 to quit: ");
          scanf("%d", &id_number);
     }
     if (number > 0) {
          average = gross / (float) number;
          printf("\n***Summary of Payroll***\n");
          printf("Number of people = %d, Gross Disbursements = $%f\n",
                    number, gross);
          printf("Average pay = $%f\n", average);
     }
}


