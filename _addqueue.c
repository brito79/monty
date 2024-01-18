#include "monty.h"

/**
 * _add_queue - Add the queue
 * @head: points to the stack
 * @value: The value to be entered into the list
 * Return: no value
 */

void _add_queue(stack_t **head, unsigned int value)
{
	stack_t *newnode, *temp;

	temp = *head;

	newnode = (stack_t *)malloc(sizeof(stack_t));

	if (newnode == NULL)
	{
		printf("\nError");
	}
	newnode->n = value;
	newnode->next = NULL;

	if (temp)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL)
	{
		*head = newnode;
		temp->prev = NULL;
	}
	else
	{
		temp->next = newnode;
		newnode->prev = temp;
	}
}


