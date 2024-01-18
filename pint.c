#include "monty.h"
/**
 * pint_func - Prints the number at the top
 * @head: Head of the stack
 * @l_number: Line number being executed
 * Return: no value
*/
void pint_func(stack_t **head, unsigned int l_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", l_number);
		fclose(tray.file);
		free(tray.content);
		stack_free_func(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
