#include "main.h"

/**
 * _puts_recursion - print string, followed by new line
 * @s: input string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s);
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
