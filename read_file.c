#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_file - reads a file
 * @fd: pointer to file descriptor
 * Return: void
 */

void read_file(FILE *fd)
{
size_t length;
int lines;
char *buffer;
int format;
buffer = NULL;
length = 0;
format = 0;
for (lines = 1; getline(&buffer, &length, fd) != -1; lines++)
{
format = parsing(buffer, lines, format);
}
free(buffer);
}
