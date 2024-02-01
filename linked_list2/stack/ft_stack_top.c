/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:13:08 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:51:37 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	*ft_stack_top(t_stack *stack)
{
	if (stack == NULL || ft_satck_is_empy(stack))
		return (NULL);
	return (stack->top->data);
}