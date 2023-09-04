#include "main.h"

/**
 * read_textfile - func reads text file and prints chars to stdout
 * @filename: filename to read
 * @letters: chars to read
 * Return: number of chars read (Success), Error (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buff);

	return (nwr);
}
