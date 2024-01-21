#include "monty.h"
/**
 * pchar_func - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @l_number: line_number
 * Return: no return
*/
void pchar_func(stack_t **head, unsigned int l_number)
{
	stack_t *temp;

	temp = *head;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}

