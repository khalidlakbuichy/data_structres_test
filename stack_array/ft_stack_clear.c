/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:03:53 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:05:41 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_clear(t_stack *stack)
{
	if (stack == NULL)
	{
		fprintf(stderr, "Cannot  acces the stack\n");
		exit(EXIT_FAILURE);
	}
	stack->top = -1;
}