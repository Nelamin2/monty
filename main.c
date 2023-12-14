#include "monty.h"
stack_t *head = NULL;

/**
 * main - entry point of the program
 * @argc: arguments count
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
open_file(argv[1]);
free_elements();
return (0);
}
/**
 * initiate_node - initiates a new node.
 * @n: data.
 * Return: in case of success a pointer to the node. Otherwise NULL.
 */
stack_t *initiate_node(int n)
{
stack_t *new_node;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
handle_error(7);
new_node->next = NULL;
new_node->prev = NULL;
new_node->n = n;
return (new_node);
}
/**
 * free_elements - Frees nodes in the stack.
 */
void free_elements(void)
{
stack_t *temp;
if (head == NULL)
return;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
/**
 * insert_q - inserts a new  node to the queue.
 * @ins_node: Pointer to the new node.
 * @length: number of opcode lines
 */
void insert_q(stack_t **ins_node, __attribute__((unused))unsigned int length)
{
stack_t *temp;
if (ins_node == NULL || *ins_node == NULL)
exit(EXIT_FAILURE);
if (head == NULL)
{
head = *ins_node;
return;
}
temp = head;
while (temp->next != NULL)
temp = temp->next;
temp->next = *ins_node;
(*ins_node)->prev = temp;
}
