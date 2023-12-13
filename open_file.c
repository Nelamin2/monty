#include "monty.h"

/**
 * open_file - opens a file
 * @file_name: the file name path
 * Return: void
 */
void open_file(char *file_name)
{
FILE *fd = fopen(file_name, "r");
if (fd == NULL)
{
perror("Error");
fprintf(stderr, "Can't open file %s\n", file_name);
exit(EXIT_FAILURE);
}
read_file(fd);
fclose(fd);
}
