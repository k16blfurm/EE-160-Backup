
/*	File:	stock4.eof.c
	By:	Tep Dobry
	login:	tep
        Date:	
        Mod :	
*/


/*  Program to compute the value of multiple stocks in a portfolio reading
        the data at run time. The program computes our net profit/loss
	on this portfolio. Data is read until end of file  */

#include <stdio.h>

float stock_price(int, int, int, int);

main()
{  /*  Variable Declarations   */
   int shares;		/*  number of shares owned     */
   int sell_whole;	/*  selling price information  */
   int sell_numer, sell_denomin;
   int buy_whole;	/*  buying price information  */
   int buy_numer, buy_denomin;
   int flag;		/*  result of scanf flag       */

   float portfolio_cost = 0.0;   /*  the cost  of the portfolio  */
   float portfolio_value = 0.0;  /*  the value of the portfolio  */
   float profit;           /*  the profit or loss          */

	/*  Get the number of shares values   */
	printf("Enter number of shares(EOF to quit): ");
	flag = scanf("%d", &shares);

	/*  While there are more stocks to process  */
	while( flag != EOF )
	{	/*  Get the selling price   */
		printf("Enter stock selling price as"
				" whole numerator denominator: ");
		scanf("%d %d %d", &sell_whole, &sell_numer, &sell_denomin);
		/*  Get the purchase price   */
		printf("Enter stock purchase price as"
				" whole numerator denominator: ");
		scanf("%d %d %d", &buy_whole, &buy_numer, &buy_denomin);
	
		/*  Print data values  */
		printf("You have %d shares of stock\n",shares);
		printf("selling at $%d %d/%d\n",
			sell_whole,sell_numer,sell_denomin);
		printf("which you bought at $%d %d/%d\n",
			buy_whole,buy_numer,buy_denomin);
	

		/*  Accumulate  portfolio  cost  */
		portfolio_cost  = portfolio_cost +
			stock_price(shares,buy_whole,buy_numer,buy_denomin);
		/*  Accumulate  portfolio  value  */
		portfolio_value = portfolio_value +
			stock_price(shares,sell_whole,sell_numer,sell_denomin);

		/*  Get the number of shares values   */
		printf("Enter number of shares(EOF to quit): ");
		flag = scanf("%d", &shares);
	}
	/*  Calculate  profit            */
	profit = portfolio_value - portfolio_cost;

	/*  Print result   */
	printf("\nYou bought stock for $%f.",portfolio_cost);
	printf("The value of your portfolio is $%f\n",portfolio_value);
	printf("Your net profit is $%f\n",profit);


}

float stock_price(int shares, int whole, int num, int denom)
/* Given: the number of shares, and stock price in whole, numerator
		and denominator.
   Return: the cost/value of this amount of stock.
*/
{  float value;

	/*  Compute the stock price  */
	value = shares * (whole + (float) num / (float) denom);

	/*  Return the value         */
	return value;
}
