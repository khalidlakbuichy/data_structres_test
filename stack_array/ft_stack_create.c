/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:19:05 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 10:31:45 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

static t_stack	*ft_stack_create_max_size(int max_size)
{
	t_stack	*stack;
	void	*array;

	if (max_size <= 0)
	{
		fprintf(stderr, "Wrong stack size (%d)\n", max_size);
		abort();
	}
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (stack == NULL)
	{
		fprintf(stderr, "Insufficient memory to initialize stack.\n");
		abort();
	}
	array = malloc(sizeof(void *) * max_size);
	if (array == NULL)
	{
		fprintf(stderr, "Insufficient memory to initialize stack.\n");
		abort();
	}
	stack->array = array;
	stack->max_size = max_size;
	stack->top = -1;
	return (stack);
}

t_stack	*ft_stack_create(void)
{
	return (ft_stack_create_max_size(1024));
}
