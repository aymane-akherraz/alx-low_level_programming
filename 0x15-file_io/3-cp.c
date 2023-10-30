#include "main.h"
void c_error(int fd);
void r_error(char *s);
void w_error(char *s);

/**
 * main - opies the content of a file to another file
 * @ac: The number of arguments passed
 * @av: A pointer array which points to each argument passed to the program
 *
 * Return: always 0 (success)
*/
int main(int ac, char **av)
{
	int fd, fd2, r, r2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		r_error(av[1]);

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
		w_error(av[2]);

	r = read(fd, buf, 1024);
	while (r)
	{
		if (r == -1)
			r_error(av[1]);

		r2 = write(fd2, buf, r);
		if (r2 == -1)
			w_error(av[2]);

		r = read(fd, buf, 1024);
	}
	if (close(fd) == -1)
		c_error(fd);

	if (close(fd2) == -1)
		c_error(fd2);

	return (0);
}
/**
 * c_error - Prints the error and exit
 * @fd: the value of the file descriptor
*/
void c_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * r_error - Prints the error and exit
 * @s: the name of the file
*/
void r_error(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}
/**
 * w_error - Prints the error and exit
 * @s: the name of the file
*/
void w_error(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}
