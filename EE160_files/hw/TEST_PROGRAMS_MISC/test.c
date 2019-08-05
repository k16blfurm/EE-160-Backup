#include <stdio.h>

int main(void)
{
long int num;
int flag;

	printf("enter you number here\n");
	flag = scanf("%d", &num);

	while(flag != EOF)
	{

	printf("your number is %d\n", num);

	printf("enter you number here\n");
	flag = scanf("%d", &num);

       }

}
