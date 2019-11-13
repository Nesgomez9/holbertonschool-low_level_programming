#include "holberton.h"
/**
 * read_textfile -  reads a text file
 * @filename: name of the file
 * @letters: letters
 *
 * Return: returns the actual number of letters it could read and print
 * 0 if the program fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check1, check2;
	char *buffer;

	if (filename == 0)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == 0)
		return (0);

	fd  = open(filename, O_RDONLY);

	if (fd == -1)
		return (free(buffer), 0);

	check1 = read(fd, buffer, letters);

	if (check1 == -1)
		return (free(buffer), 0);

	buffer[letters] = '\0';

	check2 = write(STDOUT_FILENO, buffer, check1);
	if (check2 == -1)
		return (free(buffer), 0);

	free(buffer);
	close(fd);
	return (check2);
}
