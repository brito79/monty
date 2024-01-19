#include "monty.h"
/**
 * pop_func - Prints the top element
 * @head: Head of the stack
 * @l_number: The line under execution
 * Return: no value
*/
void pop_func(stack_t **head, unsigned int l_number)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}

