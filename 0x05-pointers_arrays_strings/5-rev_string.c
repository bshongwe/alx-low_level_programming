#include "main.h"
#include <string.h>

/**
 * rev_string - reverse the string
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	int a;

	for (a = strlen(s) - 1; a >= 0; a--)
	{
		_putchar(*s);
		_putchar('\n');
		_putchar(s[a]);
	}
}
