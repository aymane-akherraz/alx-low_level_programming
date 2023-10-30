#include "main.h"
int _strlen(char *s);

/**
 * create_file - Creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, n, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd != -1)
	{
		if (text_content == NULL)
		{
			close(fd);
			return (1);
		}
		len = _strlen(text_content);
		n = write(fd, text_content, len);
		close(fd);

		if (n == len)
			return (1);
	}
	close(fd);
	return (-1);
}
/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the given string
 * Return: The length of the given string.
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
