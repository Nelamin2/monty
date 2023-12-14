#include "monty.h"
/**
 * swap - Swaps the top two elements of the stack.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void swap(stack_t **top, unsigned int line_number)
{
stack_t *temp;
if (top == NULL || *top == NULL || (*top)->next == NULL)
handle_error(8, line_number, "swap");
temp = (*top)->next;
(*top)->next = temp->next;
if (temp->next != NULL)
temp->next->prev = *top;
temp->next = *top;
(*top)->prev = temp;
temp->prev = NULL;
*top = temp;
}

