#include<stdlib.h>
#include<time.h>
/* more headers going there */
#include<stdio.h>
/* betty style doc for function main going there */
/**
 * main -main function 
 *
 * Return : always 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code going there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

