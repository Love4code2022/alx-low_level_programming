#include "main.h"

/**
 * main - prints all alphabelt times 10 in lower case
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);

		_putchar('\n');
		i++;
		}
	}
}
