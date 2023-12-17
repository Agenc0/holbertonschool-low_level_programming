#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 *
 * @filename: name of file to append to
 * @text_content: string to append
 *
 * Return: 1 if successful, -1 if else
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
