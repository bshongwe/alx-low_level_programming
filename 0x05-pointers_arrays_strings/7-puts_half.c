#include "main.h"

/**
 * puts_half - function print half of string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return hal of input
 */
void puts_half(char *str)
{
	int n, len;

	len = strlen(str);
	n = len / 2;

	for (; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
