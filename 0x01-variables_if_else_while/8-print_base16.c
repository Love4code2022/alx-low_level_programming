#include <stdio.h>

/**
 * main - prints base 16 numbers
 * Return: Always 0
 */

int main(void)
{
	char c = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
		putchar(num + '0');
		}
		else
		{
		putchar(c);
		c++;
		}
	}

	putchar('\n');
	return (0);
}
