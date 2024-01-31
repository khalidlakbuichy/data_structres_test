/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:51:31 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:10:27 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_pop(t_stack *stack)
{
	if (stack == NULL)
	{
		fprintf(stderr, "Cannot pop element from the stack\n");
		exit(EXIT_FAILURE);
	}
	if (ft_stack_is_empty(stack))
		return ;
	stack->top--;
}