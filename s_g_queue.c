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
	stack_t *newnode, *auxi;

	auxi = *hd;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode->n = n;
	newnode->next = NULL;
	if (auxi)
	{
		while (auxi->next)
			auxi = auxi->next;
	}
	if (!auxi)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		aux->next = newnode;
		newnode->prev = auxi;
	}
}
