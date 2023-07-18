#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute of day of Jack Bauer
 * start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j

	for (j = 0; j <= 23; j++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar(':');
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar('\n');
		}
	}
}
