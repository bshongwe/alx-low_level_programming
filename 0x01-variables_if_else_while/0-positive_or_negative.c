#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check value of n status; print zero, positive or negative
 * Return Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negativee\n, n);

	return (0);
}