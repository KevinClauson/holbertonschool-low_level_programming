#include "holberton.h"
#define BUFFSIZE 1024
/**
 * oops - prints error message
 * @n: type of error
 * @str: string to be printed for some errors.
 * @fd: this the fd to be printed for some errors.
 * Return: int that is the exit value.
 */
int oops(int n, char *str, int fd)
{
	if (n == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	if (n == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		return (98);
	}
	if (n == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		return (99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments from command line.
 * @argv: array of the arguments.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int fd1, fd2, fd_r, fd_w;
	char *f_fr, *f_to, buffer[BUFFSIZE];

	if (argc != 3)
		exit(oops(97, NULL, 0));
	f_fr = argv[1];
	f_to = argv[2];
	fd1 = open(f_fr, O_RDONLY);
	if (fd1 == -1)
		exit(oops(98, f_fr, 0));
	fd2 = open(f_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		exit(oops(99, f_to, 0));
	do {
		fd_r = read(fd1, &buffer, BUFFSIZE);
		if (fd_r == -1)
		{
			oops(98, f_fr, 0);
			if (close(fd1) == -1)
				exit(oops(100, NULL, fd1));
			if (close(fd2) == -1)
				exit(oops(100, NULL, fd2));
			exit(98);
		}
		fd_w = write(fd2, &buffer, fd_r);
		if (fd_w == -1)
		{
			oops(99, f_to, 0);
			if (close(fd1) == -1)
				exit(oops(100, NULL, fd1));
			if (close(fd2) == -1)
				exit(oops(100, NULL, fd2));
			exit(99);
		}
	} while (fd_r > 0);
	if (close(fd1) == -1)
		exit(oops(100, NULL, fd1));
	if (close(fd2) == -1)
		exit(oops(100, NULL, fd2));
	return (0);
}
