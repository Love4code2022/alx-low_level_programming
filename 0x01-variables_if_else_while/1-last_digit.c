#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints if the number is greater, less or 0
 * Return: always 0
 */
int main(void)
{
	int n;
	int D;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	D = n % 10;
	if (D > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, D);
	}
	else if (D == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, D);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, D);
	}
	return (0);
}

