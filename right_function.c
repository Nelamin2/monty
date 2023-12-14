#include "monty.h"
/**
 * right_function -  match the required function.
 * @fptr: Pointer to the function.
 * @opcode: opcode.
 * @value: string representing a numeric value.
 * @length: numeber of lines.
 * @format: Format specifier. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 */
void right_function(op_func fptr, char *opcode,
char *value, int length, int format)
{
stack_t *node;
int flag, i;
flag = 1;
if (strcmp(opcode, "push") == 0)
{
if (value != NULL && value[0] == '-')
{
value = value + 1;
flag = -1;
}
if (value == NULL)
handle_error(5, length);
for (i = 0; value[i] != '\0'; i++)
{
if (isdigit(value[i]) == 0)
handle_error(5, length);
}
node = initiate_node(atoi(value) * flag);
if (format == 0)
fptr(&node, length);
if (format == 1)
insert_q(&node, length);
}
else
fptr(&head, length);
}
