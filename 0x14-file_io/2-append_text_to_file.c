#include "holberton.h"
/**
 * _strlen - gets length of string.
 * @str: string.
 * Return: length of string.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file to be appended to.
 * @text_content: string to append to the file.
 * Return: 1 on success, -1 on failure .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fopen, fwrite, len;

	if (filename == NULL)
		return (-1);
	fopen = open(filename, O_WRONLY | O_APPEND);
	if (fopen == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		fwrite = write(fopen, text_content, len);
		if (fwrite == -1)
			return (-1);
	}
	return (1);
}
