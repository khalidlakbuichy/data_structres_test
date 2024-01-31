/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:32:10 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:07:22 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_destroy(t_stack *stack)
{
	if (stack == NULL)
	{
		fprintf(stderr, "Cannot destroy stack\n");
		exit(EXIT_FAILURE);
	}
	free(stack->array);
	free(stack);
}