#include "monty.h"
/**
 * div_func - Divides the top two elements of the stack.
 * @head: Stack head
 * @l_number: The line number
 * Return: no value
*/
void div_func(stack_t **head, unsigned int l_number)
{
	stack_t *temp;
	int len = 0, result_aux;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	result_aux = temp->next->n / temp->n;
	temp->next->n = result_aux;
	*head = temp->next;
	free(temp);
}

