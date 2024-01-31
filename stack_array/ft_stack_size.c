/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:01:40 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:08:03 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_stack_size(t_stack *stack)
{
	if (stack == NULL)
	{
		fprintf(stderr, "Cannot  acces the stack\n");
		exit(EXIT_FAILURE);
	}
	return (stack->top + 1);
}