/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:57:12 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:08:16 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_stack_is_empty(t_stack *stack)
{
	if (stack == NULL)
	{
		fprintf(stderr, "Cannot acces the stack\n");
		exit(EXIT_FAILURE);
	}
	return (stack->top < 0);
}