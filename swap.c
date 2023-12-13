#include "montey.h"
/**
 * swap - Swaps the top two elements of the stack.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void swap(stack_t **top, unsigned int line_number)
{
stack_t *temp;
if (top == NULL || *top == NULL || (*top)->next == NULL)
handle_error(3, line_number, "swap");
temp = (*stack)->next;
(*top)->next = temp->next;
if (temp->next != NULL)
temp->next->prev = *stack;
temp->next = *stack;
(*top)->prev = tmp;
temp->prev = NULL;
*top = temp;
}

