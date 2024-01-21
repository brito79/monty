#include "monty.h"

int exec_func(char *content, stack_t **stack, unsigned int l_number, FILE *file);

/**
 * exec_func -  The function that executes pcode
 * @content: The variable that points to line under execution
 * @stack: The point to the stack
 * @l_number: The tracker for a line number
 * @file: The file tp be opened
 *
 * Return: No Value
 */

int exec_func(char *content, stack_t **stack,
		unsigned int l_number, FILE *file)
{
	instruction_t arr_ops[] = {{"push", push_func}
		, {"pall", pall_func},
		{"pint", pint_func}
		, {"pop", pop_func}
		, {"swap", swap_func}
		, {"add", add_func}
		, {"nop", nop_func}
		, {"sub", sub_func}
		, {"div", div_func}
		, {"mul", mul_func}
		, {"mod", mod_func}
		, {"pchar", pchar_func}
		, {"pstr", pstr_func}
		, {"rotl", rotl_func}
		, {"rotr", rotr_func}
		, {"queue", queue_func}
		, {"stack", stack_func}
		, {NULL, NULL}};

	char *opr;
	unsigned int i = 0;

	opr = strtok(content, " \n\t");

	if (opr && opr[0] == '#')
	{
		return (0);
	}
	tray.argument = strtok(NULL, " \n\t");
	while (arr_ops[i].opcode && opr)
	{
		if (strcmp(opr, arr_ops[i].opcode) == 0)
		{
			arr_ops[i].f(stack, l_number);
			return (0);
		}
		i++;
	}
	if (opr && arr_ops[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", l_number, opr);
		fclose(file);
		free(content);
		stack_free_func(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
