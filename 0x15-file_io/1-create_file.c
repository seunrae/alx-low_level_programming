#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content: text_content is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write “fails”,etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		count = write(fd, text_content, strlen(text_content));
		if (count == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
