#include "monty.h"
/**
 * queue_func - prints the top
 * @head: stack head
 * @l_number: line_number
 * Return: no return
*/
void queue_func(stack_t **head, unsigned int l_number)
{
	(void)head;
	(void)l_number;
	tray.lf = 1;
}

/**
 * _add_queue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void _add_queue(stack_t **head, int n)
{
	stack_t *new_node, *result_aux;

	result_aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (result_aux)
	{
		while (result_aux->next)
			result_aux = result_aux->next;
	}
	if (!result_aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		result_aux->next = new_node;
		new_node->prev = result_aux;
	}
}

