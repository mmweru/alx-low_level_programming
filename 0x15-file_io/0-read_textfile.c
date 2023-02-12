#include "main.h"
/**
* read_textfile - reads a text
* outputs it in stdout
* @filename: the name of the file
* @letters: the characters to be
* outputed
* Return: the number of characters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fild = 0, chk = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);
	fild = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	chk = read(fild, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);
	close(fild);
	free(buffer);
	return (chk);
}
