#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int bh;

	srand(time(0));
	bh = rand() - RAND_MAX / 2;

	if ((bh % 10) > 5)
	{printf("Last digit of %d is %d and is greater than 5\n", bh, bh % 10);
	}
	else if ((bh % 10) < 6 && (bh % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", bh, bh % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", bh, bh % 10);
	}

	return (0);
}
