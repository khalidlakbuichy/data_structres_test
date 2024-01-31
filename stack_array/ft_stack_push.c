/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:40:25 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:16:06 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

static void	ft_stack_double_capacity(t_stack *stack)
{
	void	*new_array;
	int		i;

	if (stack == NULL)
	{
		fprintf(stderr, "Cannot double stack size\n");
		exit(EXIT_FAILURE);
	}
	/* create new array for the stack with double size */
	new_array = malloc(sizeof(void *) * (stack->max_size * 2));
	if (new_array == NULL)
	{
		fprintf(stderr, "Insufficient memory to double the stack.\n");
		exit(EXIT_FAILURE);
	}
	/* coping elements to the new array, Ops! I want to to the new stack ;)*/
	i = -1;
	while (++i <= stack->top)
		new_array[i] = (stack->array + i);
	/* Replacing the new array in the stack */
	free(stack->array);
	stack->array = new_array;
	stack->max_size *= 2;
}

void	ft_stack_push(t_stack *stack, void *data)
{
	if (stack == NULL)
	{
		fprintf(stderr, "Cannot push element to the stack\n");
		exit(EXIT_FAILURE);
	}
	if ((stack->top + 1) >= stack->max_size)
		ft_stack_double_capacity(stack);
	stack->array[++stack->top] = data;
}