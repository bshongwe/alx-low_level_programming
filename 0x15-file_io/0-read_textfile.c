#include "main.h"
#include <math.h>

/**
 * read_textfile - func reads text file and prints chars to stdout
 * @filename: filename to read
 * @letters: chars to read
 * Return: number of chars read or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, bytes_rd, i, bytes_wr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	bytes_rd = read(fd, buff, letters);
	buff[letters + 1] = '\0';

	for (i = 0; buff[i] != '\0'; i += 1)
		bytes_rd += 1;

	bytes_wr = close(f);
	if (res != 0)
		exit(-1);
	bytes_wr = write(STDOUT_FILENO, buff, bytes_rd);
	if (bytes_wr != bytes_rd)
		return (0);
	free(buff);

	return (bytes_rd);
}
