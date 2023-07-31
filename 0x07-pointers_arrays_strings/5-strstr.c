#include "main.h"

/**
 * _strstr - locate substring
 * @haystack: input string
 * @needle: substring
 * Return: pointer to beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			break;
		}
		haystack++;
	}
	return (haystack);
}
