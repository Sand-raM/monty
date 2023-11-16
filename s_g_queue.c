#include "monty.h"

/**
 * s_g_queue - function that prints the top
 * @hd: head of the stack
 * @num_ln: counts num lines
 * Return: nothing to be returned
*/
void s_g_queue(stack_t **hd, unsigned int num_ln)
{
	(void)hd;
	(void)num_ln;
	bus.flg_chng = 1;
}

/**
 * queue_add - a func that add node to the tail stack
 * @n: a value
 * @hd: head of the stack
 * Return: nothing to return
*/
void queue_add(stack_t **hd, int n)
{
	stack_t *new_node, *aux;

	aux = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*hd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
