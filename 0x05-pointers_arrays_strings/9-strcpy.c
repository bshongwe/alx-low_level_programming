#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * including terminating null byte (\0)
 * @dest: pointer to buffer where string is copied
 * @src: string to be copied
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
