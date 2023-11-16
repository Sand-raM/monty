#include "monty.h"

/**
 * s_g_add - a func that  adds the top two
 * elements of the stack
 * @hd: the head of the stack
 * @num_ln: counts num lines
 * Return: nothing to be returned
 */
void s_g_add(stack_t **hd, unsigned int num_ln)
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
		fprintf(stderr, "L%d: can't add, Stack too short\n", num_ln);
		fclose(bus.fl);
		free(bus.cntnt);
		s_g_free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	auxi = head->n + head->next->n;
	head->next->n = auxi;
	*hd = head->next;
	free(head);
}
