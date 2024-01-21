#ifndef _MONTY_
#define _MONTY_

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

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
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct tray_s - It hold variables such file, linecontent, argument
 * @argument: Value on command line
 * @file: File pointer to monty file
 * @content: pointer to line content
 * @ff: flag change stack <-> queue (stack or queue)
 * Description: It conatains the value through the program
 */
typedef struct tray_s
{
	char *argument;
	FILE *file;
	char *content;
	int lf;
}  tray_t;
extern tray_t tray;

void _add_node(stack_t **head, int n);
void queue_func(stack_t **head, unsigned int l_number);
void pall_func(stack_t **head, unsigned int l_number);
void pint_func(stack_t **head, unsigned int l_number);
void push_func(stack_t **head, unsigned int l_number);
void stack_free_func(stack_t *head);
void pop_func(stack_t **head, unsigned int l_number);
void swap_func(stack_t **head, unsigned int l_number);
void nop_func(stack_t **head, unsigned int l_number);
void add_func(stack_t **head, unsigned int l_number);
void rotl_func(stack_t **head,  __attribute__((unused)) unsigned int l_number);
void stack_func(stack_t **head, unsigned int l_number);
void pchar_func(stack_t **head, unsigned int l_number);
void _add_queue(stack_t **head, int value);
int exec_func(char *content, stack_t **stack, unsigned int l_number, FILE *file);
void pstr_func(stack_t **head, unsigned int l_number);
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int l_number);
void queue_func(stack_t **head, unsigned int l_number);
void stack_func(stack_t **head, unsigned int l_number);
void add_func(stack_t **head, unsigned int l_number);
void mul_func(stack_t **head, unsigned int l_number);
void sub_func(stack_t **head, unsigned int l_number);
void mod_func(stack_t **head, unsigned int l_number);
void div_func(stack_t **head, unsigned int l_number);

#endif
