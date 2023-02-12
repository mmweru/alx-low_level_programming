#include "main.h"
/**
* create_file - creates a new file
* @filename: the name of file
* @text_content: the content of file
* Return: 1 Success, -1 failure.
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
