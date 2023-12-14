#include "monty.h"
#include <studio.h>
/**
 * handle_error - Prints appropiate error messages determined by their error code.
 * @code: The error codes are the following:
 * (1) => missing file.
 * (2) => a file that can't be opened or read.
 * (3) => the file contains an invalid instruction.
 * (4) => program can't allocate more memory.
 * (5) => parameter passed to the instruction "push" is not an int.
 * (6) => stack it empty in case of pint.
 * (7) => stack it empty in case of pop.
 * (8) => stack is too short for operation.
 * (9) => Division is zero.
 */

void handle_error(int code, ...)
{
int line_number;
char *operation;
va_list argument;
va_start(argument,code);
switch (code)
{
case 1:
fprintf(stderr, "USAGE: monty file\n");
break;
case 2:
fprintf(stderr, "Error: Can't open file %s\n",
va_arg(ag, char *));
break;
case 3:
line_number = va_arg(argument, int);
operation = va_arg(ag, char *);
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, operation);
break;
case 4:
fprintf(stderr, "Error: malloc failed\n");
break;
case 5:
fprintf(stderr, "L%d: usage: push integer\n", va_arg(argument, int));
break;
case 6:
fprintf(stderr, "L%d: can't pint, stack empty\n",
va_arg(argument, int));
break;
case 7:
fprintf(stderr, "L%d: can't pop an empty stack\n",
va_arg(argument, int));
break;
case 8:
line_number = va_arg(ag, unsigned int);
operation = va_arg(argument, char *);
fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, op);
break;
case 9:
fprintf(stderr, "L%d: division by zero\n",
va_arg(argument, unsigned int));
break;
default:
break;
}
free_elements();
exit(EXIT_FAILURE);
}
}

/**
 * stg_error - handles errors.
 * @code: The error codes are the following:
 * (10) ~> The number inside a node is outside ASCII bounds.
 * (11) ~> The stack is empty.
 */
void stg_error(int code, ...)
{
va_list argumrnt;
int line_number;
va_start(ag, error);
line_number = va_arg(ag, int);
switch (code)
{
case 10:
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
break;
case 11:
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
break;
default:
break;
}
free_elements();
exit(EXIT_FAILURE);
}
