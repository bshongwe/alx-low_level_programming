#include "main.h"

/**
 * _strpbrk - function locates first occurrence in string s
 * @s: first input
 * @accept: second input
 * Return: number of accepted bytes (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; *s && accept[i]; i++)
	{
		if (s == accept[i])
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}
