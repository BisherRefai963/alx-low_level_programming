#include"main.h"
/**
 * main - Entry point
 * Description : 'get last digit of number '
 * Return: always 0
 */
int print_last_digit(int n)
{
	int l;
	l = n % 10;
	if (l < 0)
	{
		_putchart(-l + 48);
		return (-l);
	}
	else
	{
		_putchart(l + 48);
		return (l);
	}
}
