#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number whose last digit is to be printed
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);

}
