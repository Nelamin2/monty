#include "month.h"
/**
 * top_char - Prints irst element in  Ascii value.
 * @top: Pointer to a pointer pointing to top node of the stack.
 * @line_number:  line number of of the opcode.
 */
void top_char(stack_t **top, unsigned int line_number)
{
int character;
if (top == NULL || *top == NULL)
stg_error(12, line_number);
character = (*top)->n;
if (character < 0 || character > 127)
stg_error(11, line_number);
printf("%c\n", character);
}
