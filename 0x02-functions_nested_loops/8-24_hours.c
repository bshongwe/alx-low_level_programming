#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute of day of Jack Bauer
 * start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
		for (j = 0; j <= 59; j++)
	{
		_putchar(('0' + i / 10);
		_putchar(('0' + i % 10);
		_putchar(':');
		_putchar(('0' + j / 10);
		_putchar(('0' + j % 10);
		_putchar('\n');
	}
}
