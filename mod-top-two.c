#include "monty.h"
   
/**
 * mod_top_two - multiplies the top two elements of the stack.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line_number: number of lines.
 */
void mod_top_two(stack_t **top, unsigned int line_number)
{
int result;
int length;
length = 0;
stack_t mes;
if (top == NULL || *top == NULL || (*top)->next == NULL)
handle_error(8, line_number);
if ((*top)->n == 0)
handle_error(9, line_number);
mes = *top;
while (mes)
{
mes = mes->next;
length++;
}
if (length < 2)
handle_error(8, line_number)
*top = (*top)->next;
result = (*top)->n % (*top)->prev->n;
(*top)->n = result;
free((*top)->prev);
(*top)->prev = NULL;
}
