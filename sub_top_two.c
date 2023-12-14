#include "monty.h"

/**
 * sub_top_two - subtract the top two elements of the stack.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line_number: number of lines.
 */
void sub_top_two(stack_t **top, unsigned int line_number)
{
int result;
if (top == NULL || *top == NULL || (*top)->next == NULL)
handle_error(8, line_number, "sub");
(*top) = (*top)->next;
result = (*top)->n - (*top)->prev->n;
(*top)->n = result;
free((*top)->prev);
(*top)->prev = NULL;
}
