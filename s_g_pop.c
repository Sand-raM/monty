#include "monty.h"

/**
 * s_g_pop - deletes the topmost value
 * @hd: the head of the stack
 * @num_ln: counts num lines
 * Return: nothing to be returned
 */
void s_g_pop(stack_t **hd, unsigned int num_ln)
{
	stack_t *head;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num_ln);
		fclose(bus.fl);
		free(bus.cntnt);
		s_g_free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	*hd = head->next;
	free(head);
}
