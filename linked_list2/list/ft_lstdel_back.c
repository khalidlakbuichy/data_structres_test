/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:05:28 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:18:40 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstdel_back(t_list **lst, void (*del)(void *))
{
	t_list *prev_last;
	t_list *tail;

	prev_last = *lst;
	tail = ft_lstlast(*lst);
	if (tail == NULL)
		return ;
	if (tail->next == NULL)
		*lst = NULL;
	while (prev_last->next->next != NULL)
		prev_last = prev_last->next;
	prev_last->next = NULL;
	del(tail->content);
	free(tail);
}