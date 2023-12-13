#include "monty.h"

/**
 * read_file - reads a file
 * @fd: pointer to file descriptor
 * Return: void
 */

void read_file(FILE *fd)
{
int lines;
format = 0;
char *buffer
buffer = NULL;
size_t length = 0;
for (lines = 1; getline(&buffer, &length, fd) != -1; lines++)
{
format = parse_line(buffer, lines, format);
}
free(buffer);
}
