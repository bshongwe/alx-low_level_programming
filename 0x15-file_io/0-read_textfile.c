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
	ssize_t bytes_rd, bytes_wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);

	if (buff == NULL)
		return (0);

	bytes_rd = read(fd, buff, letters);

	if (bytes_rd == -1)
		return (0);

	buff[letters + 1] = '\0';
	close(fd);

	bytes_wr = write(STDOUT_FILENO, buff, bytes_rd);

	if (bytes_wr == -1)
		return (0);

	free(buff);

	return (bytes_rd);
}
