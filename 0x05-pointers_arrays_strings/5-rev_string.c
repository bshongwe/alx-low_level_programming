#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int a = strlen(s) - 1;

	while (a >= 0)
	{
		_putchar(s[a]);
		_putchar('\n');
		a--;
	}
}
