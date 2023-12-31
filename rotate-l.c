#include "monty.h"
/**
 * rotate_l - Rotates the first node of the stack to the bottom.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line: Interger representing the line number of of the opcode.
 */
void rotate_l(stack_t **top, __attribute__((unused))unsigned int line)
{
stack_t *temp;
if (top == NULL || *top == NULL || (*top)->next == NULL)
return;
temp = *top;
while (temp->next != NULL)
temp = temp->next;
temp->next = *top;
(*top)->prev = temp;
*top = (*top)->next;
(*top)->prev->next = NULL;
(*top)->prev = NULL;
}
