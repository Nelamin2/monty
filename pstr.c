#include "monty.h"
/**
 * character_str - Prints a string.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line: Interger representing the line number of of the opcode.
 */
void character_str(stack_t **top, __attribute__((unused))unsigned int line)
{
int character;
stack_t *temp;
if (top == NULL || *top == NULL)
{
printf("\n");
return;
}
temp = *top;
while (temp != NULL)
{
charchter = temp->n;
if (charachter <= 0 ||character > 127)
break;
printf("%c", character);
temp = temp->next;
}
printf("\n");
}
