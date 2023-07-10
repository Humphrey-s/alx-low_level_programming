#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * append_text_to_file - append a text to a file
 * @filename: file
 * @text_content: text to be appended
 * Return: (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	int i;

	if (filename == NULL)
	{
	return (-1);
	}
	else
	{
		fp = fopen(filename, "a");

		if (fp == NULL)
		{
		return (-1);
		}
		else
		{
			if (text_content == NULL)
			{
			}
			else
			{
			i = fprintf(fp, "%s", text_content);
			}
			chmod(filename, S_IWGRP | S_IWUSR | S_IROTH | S_IRUSR | S_IRGRP);
			fclose(fp);
			if (i < 0)
			{
			return (-1);
			}
			else
			{
			return (1);
			}
		}
	}
}
