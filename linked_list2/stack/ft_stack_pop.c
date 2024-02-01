/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:58:17 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:53:31 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_pop(t_stack *stack, void (*del)(void *))
{
	if (stack == NULL)
		return ;
	if (ft_stack_is_empty(stack))
		return ;
	ft_lstdel_front(&stack->top, del);
	stack->size--;
}