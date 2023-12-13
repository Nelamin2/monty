#include "monty.h"
/**
 * function_finder- match function with  the opcode
 * @opcode: opcode
 * @value: value to be ghandeled
 * @format:  storage format. If 0 Nodes will be entered as a stack.
 * @length: number of lines
 * if 1 nodes will be entered as a queue.
 * Return: void
 */
void function_finder(char *opcode, char *value, int length, int format)
{
int i;
int flag;
functions_t operationst[] = {
{"push", push_stack},
{"pall", pull_stack},
{"pint", show_top},
{"pop", top_pop},
{"nop", nop},
{"swap", swap_elements},
{"add", add_elements},
{"sub", sub_elements},
{"div", div_elements},
{"mul", mul_elements},
{"mod", mod_elements},
{"pchar", print_char},
{"pstr", print_str},
{"rotl", rotl},
{"rotr", rotr},
{NULL, NULL}
};
if (opcode[0] == '#')
return;
for (flag = 1, i = 0; Operations[i].opcode != NULL; i++)
{
if (strcmp(opcode, operations[i].opcode) == 0)
{
right_function(operations[i].f, opcode, value, length, format);
flag = 0;
}
}
if (flag == 1)
err(3, ln, opcode);
