#include "main.h"

/**
 * _strlen - func returns length of string
 * @s: input string
 * Return: length of string (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 (Success), -1 (Error)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t bytes_wr;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	length = _strlen(text_content);

	bytes_wr = write(fd, text_content, length);
	if (bytes_wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
