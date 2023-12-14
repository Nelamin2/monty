#include "monty.h"

/**
 * push_stack - insert a new element to the stack.
 * @new_node: Pointer to the inserted node.
 * @line: Line number of the opcode.
 */
void push_stack(stack_t **new_node, unsigned int line)
{
stack_t *temp;
if (new_node == NULL || *new_node == NULL)
{
fprintf(stderr, "L%u: usage: push integer\n", line);
exit(EXIT_FAILURE);
}
if (head == NULL)
{
head = *new_node;
return;
}
temp = head;
head = *new_node;
head->next = temp;
head->prev = NULL;
temp->prev = head;
}

/**
 * pall_stack - prints all values on the stack.
 * @top: Pointer to the stack.
 * @line: Line number of the opcode.
 */
void pall_stack(stack_t **top, unsigned int line)
{
stack_t *current;
current = *top;
(void)line;
if (top == NULL)
exit(EXIT_FAILURE);
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}

/**
 * pop_first - pops the first element in  the stack.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line_number: numbers of  lines of the opcode.
 */
void pop_first(stack_t **top, unsigned int line_number)
{
stack_t *temp;
if (top == NULL || *top == NULL)
handle_error(7, line_number);
temp = *top;
*top = temp->next;
if (*top != NULL)
(*top)->prev = NULL;
free(temp);
}

/**
 * print_first - Prints thefirst element of the stack.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line_number: number of lines of the opcode.
 */
void print_first(stack_t **top, unsigned int line_number)
{
if (top == NULL || *top == NULL)
handle_error(6, line_number);
printf("%d\n", (*top)->n);
}
