#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 0; num++)
	{
		putchar((num % 10) + 0);
	}

	putchar('\n');
	return (0);
}
