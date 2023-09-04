#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *read;
	ssize_t bytes_read, count;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	read = malloc(letters + 1);
	bytes_read = fread(read, sizeof(char), letters, file);
	if (bytes_read == -1)
	{
		free(read);
		fclose(file);
		return (0);
	}
	read[bytes_read] = '\0';
	count = write(STDOUT_FILENO, read, bytes_read);
	free(read);
	fclose(file);
	if (count == -1 || count != bytes_read)
		return (0);
	return (count);
}
