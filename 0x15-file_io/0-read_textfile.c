#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - func reads text file, prints letters to POSIX
 * @filename: filename to be read on memory
 * @letters: letters printed on memory
 * Return: letters and file read and printed (Success), fail (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_rd, bytes_wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
		return (0);

	bytes_rd = read(fd, buffer, letters);

	if (bytes_read == -1)
		return (0);

	buff[letters + 1] = '\0';
	close(fd);

	bytes_wr = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
		return (0);

	free(buff);

	return (bytes_rd);
}
