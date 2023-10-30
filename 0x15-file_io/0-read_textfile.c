#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read from
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print otherwise 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, b, n;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd != -1)
	{
		buf = malloc((sizeof(char) * letters) + 1);
		if (buf != NULL)
		{
			b = read(fd, buf, letters);
			if (b != -1)
			{
				buf[b] = '\0';
				n = write(STDOUT_FILENO, buf, b);
				if (n == b)
				{
					close(fd);
					free(buf);
					return (n);
				}
			}
		}
		free(buf);
	}
	close(fd);
	return (0);
}
