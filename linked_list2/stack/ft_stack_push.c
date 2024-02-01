/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:53:23 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:52:52 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_push(t_stack *stack, void *data)
{
	t_list *node;

	if (stack == NULL)
		return ;
	ft_lstadd_front(&stack->top, ft_lstnew(data));
	stack->size++;
}