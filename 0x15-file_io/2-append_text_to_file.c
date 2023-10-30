#include "main.h"
int _strlen(char *s);

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, l;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd != -1)
	{
		if (text_content == NULL)
		{
			close(fd);
			return (1);
		}
		l = _strlen(text_content);
		n = write(fd, text_content, l);
		close(fd);

		if (n == l)
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
