#include "main.h"
#include <stdio.h>

/**
 * _strspn - get length of prefix substring
 * @s: input segment
 * @accept: accepted input bytes
 * Return: number of accepted bytes
 */
int strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (i);
}

int main(void)
{
	char *s = "helloworld";
	char *accept = "world";
	int len = strspn(s, accept);

	printf("The length of the prefix substring is %d\n", len);
	return (0);
}
