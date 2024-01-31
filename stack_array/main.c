/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:05:28 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:14:52 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	main(void)
{
	t_stack *stack;

	stack = ft_stack_create();
	for (int i = 0; i < 2000; i++)
	{
		ft_stack_push(stack, &i);
		assert(ft_stack_top(stack) == &i);
		assert(ft_stack_is_empty(stack) == 0);
		assert(ft_stack_size(stack) == i + 1);
	}
	stack_destroy(s);
	return (0);
}