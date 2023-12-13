#include "monty.h"
/**
 * parsing- parse line into tokens
 * @buffer: line from the file
 * @lines: number of lines
 * @format: indicates storages form.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int parsing(char *buffer, int lines, int format)
{
char *opcode, *value;
const char *delim = "\n ";
if (buffer == NULL)
handle_error(7);
opcode = strtok(buffer, delim);
if (opcode == NULL)
return (format);
value = strtok(NULL, delim);
if (strcmp(opcode, "stack") == 0)
return (0);
if (strcmp(opcode, "queue") == 0)
return (1);
function_finder(opcode, value, lines, format);
return (format);
}
