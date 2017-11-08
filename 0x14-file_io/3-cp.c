#include "holberton.h"
#define BUFFSIZE 1024
void oops(int n, char *str)
{
	if (n == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (n == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
}
/**
 * main - program that copies the content of a file to another file.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int fd1, fd2, fd_r, fd_w, fc;
	char *f_fr, *f_to, buffer[BUFFSIZE];
	if (argc != 3)
		oops(97, NULL);
	f_fr = argv[1];
	f_to = argv[2];
	fd1 = open(f_fr, O_RDONLY);
	if (fd1 == -1)
		oops(98, f_fr);
	fd2 = open(f_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}

	do {
		fd_r = read(fd1, &buffer, BUFFSIZE);
		if (fd_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_fr);
			fc = close(fd1);
			if (fc == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
				exit(100);
			}
			fc = close(fd2);
			if (fc == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
				exit(100);
			}
			exit(98);
		}
		fd_w = write(fd2, &buffer, fd_r);
		if (fd_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
			fc = close(fd1);
			if (fc == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
				exit(100);
			}
			fc = close(fd2);
			if (fc == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
				exit(100);
			}
			exit(99);
		}
	} while (fd_r > 0);
	fc = close(fd1);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	fc = close(fd2);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
