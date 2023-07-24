#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * includin terminating null byte (\0)
 * to the buffer to by dest
 * @dest: pointer to buffer where string is copied
 * @src: string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
