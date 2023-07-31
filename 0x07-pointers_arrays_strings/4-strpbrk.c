#include "main.h"

/**
 * _strpbrk - function locates first occurrence in string s
 * @s: first input
 * @accept: second input
 * Return: number of accepted bytes (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s == accept[j])

				return (s);
		}
		s++;
	}

	return ('\0');
}
