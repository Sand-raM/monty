#include "monty.h"

/**
 * s_g_div - divides the second top element of the stack
 * @hd: head of the stack
 * @num_ln: counts num lines
 * Return: nothing to be returned
 */
void s_g_div(stack_t **hd, unsigned int num_ln)
{
	stack_t *head;
	int lngth = 0, auxi;

	head = *hd;

	while (head)
	{
		head = head->next;
		lngth++;
	}
	if (lngth < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", num_ln);
		fclose(bus.fl);
		free(bus.cntnt);
		s_g_free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	auxi = head->next->n / head->n;
	head->next->n = auxi;
	*hd = head->next;
	free(head);
}
