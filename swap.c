#include "monty.h"
/**
 * swap_func - Swaps two elements of the stack.
 * @head: The head of the stack
 * @l_number: The line being executed
 * Return: No value
*/
void swap_func(stack_t **head, unsigned int l_number)
{
	stack_t *temp;
	int len = 0, var;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	var = temp->n;
	temp->n = temp->next->n;
	temp->next->n = var;
}

