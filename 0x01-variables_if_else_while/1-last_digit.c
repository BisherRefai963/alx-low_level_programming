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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code going there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}