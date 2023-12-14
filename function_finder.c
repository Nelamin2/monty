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
instruction_t operations[] = {
{"push", push_stack},
{"pall", pall_stack},
{"pint", print_first},
{"pop", pop_first},
{"nop", nop_function},
{"swap", swap},
{"add", sum_top_two},
{"sub", sub_top_two},
{"div", div_top_two},
{"mul", mul_top_two},
{"mod", mod_top_two},
{"pchar", top_char},
{"pstr", character_str},
{"rotl", rotate_l},
{"rotr", rotate_r},
{NULL, NULL}
};
if (opcode[0] == '#')
return;
for (flag = 1, i = 0; operations[i].opcode != NULL; i++)
{
if (strcmp(opcode, operations[i].opcode) == 0)
{
right_function(operations[i].f, opcode, value, length, format);
flag = 0;
}
}
if (flag == 1)
handle_error(3, length, opcode);
}
