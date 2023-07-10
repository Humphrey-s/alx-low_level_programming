#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - create a file and write a string into it
 * @filename: file
 * @text_content: string
 * Return: (Success)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		fp = fopen(filename, "w");

	if (fp == NULL)
	{
	return (-1);
	}
	else
	{	
		if (text_content == NULL)
		{
			fclose(fp);
		}
		else
		{
			fprintf(fp, "%s", text_content);
		}
		chmod(filename, S_IWUSR | S_IRUSR);
		fclose(fp);
	return (1);
	}
	}
}
