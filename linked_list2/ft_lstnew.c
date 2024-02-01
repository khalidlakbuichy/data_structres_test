/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:26:28 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:26:30 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
