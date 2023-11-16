#include "monty.h"

/**
 * s_g_sub -  subtracts the top element of the stack
 * @hd: head of the stack
 * @num_ln: counts num line
 * Return: nothing to be returned
 */
void s_g_sub(stack_t **hd, unsigned int num_ln)
{ 
	stack_t *auxi;
	int sub, nd;

	auxi = *hd;
	for (nd = 0; auxi != NULL; nd++)
		auxi = auxi->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", num_ln);
		fclose(bus.fl);
		free(bus.cntnt);
		s_g_free_stack(*hd);
		exit(EXIT_FAILURE);
	}

	auxi = *hd;
	sub = auxi->next->n - auxi->n;
	auxi->next->n = sub;
	*hd = auxi->next;
	free(auxi);
}
