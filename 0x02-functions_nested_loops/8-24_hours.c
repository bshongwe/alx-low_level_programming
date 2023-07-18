#include "main.h"

/**
 * jack_bauer - print every minute of day of Jack Bauer
 * start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
		for (minute = 0; minute <= 59; minute++)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		_putchar((j / 10) + '0');
		_putchar((i / 10) + '0');
		_putchar('\n');
	}
}
