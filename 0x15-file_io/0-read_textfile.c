#include "main.h"

/**
 * read_textfile - func reads text file and prints letters
 * @filename: filename to be read on memory
 * @letters: letters printed on memory
 * Return: number of letters (Success), fail (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t len_r, Len_w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	len_r = read(fd, buff, letters);
	close(fd);
	if (len_r == -1)
	{
		free(buff);
		return (0);
	}
	len_w = write(STDOUT_FILENO, buff, len_r);
	free(buff);
	if (len_r == len_w)
	{
		return (0);
	}
	return (len_w);
}
