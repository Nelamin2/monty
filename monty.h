#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **top, unsigned int line_number);
} instruction_t;
extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);
/*file operations*/
void open_file(char *file_name);
int parsing(char *buffer, int line_number, int format);
void read_file(FILE *);
int len_chars(FILE *);
void c(char *, char *, int, int);
/*Stack operations*/
stack_t *initiate_node(int n);
void free_elements(void);
void push_stack(stack_t **new_node, unsigned int line);
void pall_stack(stack_t **top, unsigned int line);
void insert_q(stack_t **ins_node, __attribute__((unused))unsigned int length);
void function_finder(char *opcode, char *value, int length, int format);
void right_function(op_func fptr,
char *opcode, char *value, int length, int format);
void print_first(stack_t **top, unsigned int line_number);
void pop_first(stack_t **top, unsigned int line_number);
/*Math operations with nodes*/
void div_top_two(stack_t **top, unsigned int line_number);
void mul_top_two(stack_t **top, unsigned int line_number);
void sum_top_two(stack_t **top, unsigned int line_number);
void sub_top_two(stack_t **top, unsigned int line_number);
void mod_top_two(stack_t **top, unsigned int line_number);
/*String operations*/
void top_char(stack_t **top, unsigned int line_number);
void character_str(stack_t **top, __attribute__((unused))unsigned int line);
void rotate_r(stack_t **top, __attribute__((unused))unsigned int line);
void rotate_l(stack_t **top, __attribute__((unused))unsigned int line);
/*Error hanlding*/
void handle_error(int code, ...);
void stg_error(int code, ...);
#endif
