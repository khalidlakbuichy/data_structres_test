/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:54:30 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:09:54 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	*ft_stack_top(t_stack *stack)
{
	if (stack == NULL)
	{
		fprintf(stderr, "Cannot return (top element from the stack\n"));
		exit(EXIT_FAILURE);
	}
	if (ft_stack_is_empty(stack))
		return (NULL);
	return (stack->array[stack->top]);
}