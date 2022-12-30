#include <stdio.h>
/**
 * main - prints three digit combinations
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
		for (k = j + 1; k <= 9; k++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');

			if (i < 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
		}
	}

	putchar('\n');
	return (0);
}