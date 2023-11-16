#include "monty.h"
/**
 * s_g_free_stack - a funct that frees a doubly linked list
 * @hd: the head of the stack
 */
void s_g_free_stack(stack_t *hd)
{
	stack_t *auxi;

	auxi = hd;
	while (hd)
	{
		auxi = hd->next;
		free(hd);
		hd = auxi;
	}
}
