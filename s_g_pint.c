#include "monty.h"

/**
 * s_g_pint -  prints the value at the top of the stack
 * @hd: head of the stack
 * @num_ln: counts number line
 * Return: nothing to be returned
 */
void s_g_pint(stack_t **hd, unsigned int num_ln)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num_ln);
		fclose(bus.fl);
		free(bus.cntnt);
		s_g_free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
