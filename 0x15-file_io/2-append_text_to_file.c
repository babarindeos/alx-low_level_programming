#include "main.h"

/**
 * append_text_to_file - Append text to a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: fails or filename is NULL - -1.
 *         file not exist or lack of write permission -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int w;
	int len;

	o = 0;
	w = 0;
	len = 0;


	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);

	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}

