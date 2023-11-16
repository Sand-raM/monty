#include "monty.h"

/**
* s_g_exec - a func that executes the opcode
* @stack: head of the linked list
* @num_ln: counts lines
* @fl: poiner to monty file
* @cntnt: line content
* Return: nothing to be returned
*/
int s_g_exec(char *cntnt, stack_t **stack, unsigned int num_ln, FILE *fl)
{
	instruction_t opst[] = {
				{"push", s_g_push}, {"pall", s_g_pall}, {"pint", s_g_pint},
				{"pop", s_g_pop},
				{"swap", s_g_swap},
				{"add", s_g_add},
				{"nop", s_g_nop},
				{"sub", s_g_sub},
				{"div", s_g_div},
				{"mul", s_g_mul},
				{"mod", s_g_mod},
				{"pchar", s_g_pchar},
				{"pstr", s_g_pstr},
				{"rotl", s_g_rotl},
				{"rotr", s_g_rotr},
				{"queue", s_g_queue},
				{"stack", s_g_stack},
				{NULL, NULL}
				};
	unsigned int x = 0;
	char *opc;

	opc = strtok(cntnt, " \n\t");
	if (opc && opc[0] == '#')
		return (0);
	bus.s_g_arg = strtok(NULL, " \n\t");
	while (opst[x].opcode && opc)
	{
		if (strcmp(opc, opst[x].opcode) == 0)
		{	opst[x].f(stack, num_ln);
			return (0);
		}
		x++;
	}
	if (opc && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", num_ln, opc);
		fclose(fl);
		free(cntnt);
		s_g_free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
