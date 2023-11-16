#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <ctype.h>
#define  _POSIX_C_SOURCE 200809L
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables, arguments, fl, line content
 * @s_g_arg: value
 * @fl: pointer to monty file
 * @cntnt: line content
 * @flg_chng: flag change stack <-> queue
 */
typedef struct bus_s
{
	char *s_g_arg;
	FILE *fl;
	char *cntnt;
	int flg_chng;
}  bus_t;
extern bus_t bus;
void s_g_push(stack_t **hd, unsigned int num_ln);
void s_g_pint(stack_t **hd, unsigned int num_ln);
void s_g_pall(stack_t **hd, unsigned int num_ln);
void s_g_pop(stack_t **hd, unsigned int num_ln);
void s_g_swap(stack_t **hd, unsigned int num_ln);
void s_g_add(stack_t **hd, unsigned int num_ln);
void s_g_nop(stack_t **hd, unsigned int num_ln);
void s_g_free_stack(stack_t *hd);
void s_g_sub(stack_t **hd, unsigned int num_ln);
void s_g_div(stack_t **hd, unsigned int num_ln);
void s_g_mul(stack_t **hd, unsigned int num_ln);
void s_g_mod(stack_t **hd, unsigned int num_ln);
void s_g_pchar(stack_t **hd, unsigned int num_ln);
void s_g_pstr(stack_t **hd, unsigned int num_ln);
int s_g_exec(char *cntnt, stack_t **stack, unsigned int num_ln, FILE *fl);
void nod_add(stack_t **hd, int n);
void s_g_queue(stack_t **hd, unsigned int num_ln);
void s_g_rotl(stack_t **hd,  __attribute__((unused)) unsigned int num_ln);
void s_g_rotr(stack_t **hd, __attribute__((unused)) unsigned int num_ln);
void s_g_stack(stack_t **hd, unsigned int num_ln);
void queue_add(stack_t **hd, int n);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);









#endif
