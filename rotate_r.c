#include "monty.h"
/**
 * rotate_r- Rotates the last node of the stack to the top.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line: line number of of the opcode.
 */
void rotate_r(stack_t **top, __attribute__((unused))unsigned int line)
{
stack_t *temp;
if (top == NULL || *top == NULL || (*top)->next == NULL)
return;
temp = *top;
while (temp->next != NULL)
temp = temp->next;
temp->next = *top;
temp->prev->next = NULL;
temp->prev = NULL;
(*top)->prev = temp;
(*top) = temp;
}
