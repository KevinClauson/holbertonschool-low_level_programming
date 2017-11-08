#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fopen, fread, fwrite;
	char *buf;

	fopen = open(filename, O_RDONLY);

	if (fopen == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fread = read(fopen, buf, letters);
	if (fread == -1)
	{
		free(buf);
		return (0);
	}
	fwrite = write(STDOUT_FILENO, buf, letters);
	if (fwrite == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fopen);
	return (letters);
}
