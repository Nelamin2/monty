#include "monty.h"

/**
 * div_top_two - sdivides the top two elements of the stack.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line_number: number of lines.
 */
void div_top_two(stack_t **top, unsigned int line_number)
{
int result;
if (top == NULL || *top == NULL || (*top)->next == NULL)
handle_error(3, line_number, "div");i
if ((*top)->n == 0)
handle_error(2, line_number);
(*top) = (*top)->next;
result = (*top)->n / (*top)->prev->n;
(*top)->n = result;
free((*top)->prev);
(*top)->prev = NULL;
}
