/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klakbuic <klakbuic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:40:42 by klakbuic          #+#    #+#             */
/*   Updated: 2024/02/02 15:47:53 by klakbuic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstdel_front(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	if (del == NULL || lst == NULL)
		return ;
	head = *lst;
	if (head->next != NULL)
		*lst = (*lst)->next;
	del(head->content);
	head->next = NULL;
	head->prev = NULL;
    free(head);
}
